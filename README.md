# Руководство для использования makefile

***makefile обладает аппаратной кроссплатформенностью, достаточно лишь делать всё согласно данному руководству***

**Что нужно для использования:**
 1. Любой редактор кода.
 2. Установленный arm-none-eabi-gcc.
 
**Как пользоваться:**
 1. Чтобы собрать проект следует перейти в директорию проекта через терминал и ввести "make".
 2. Чтобы удалить ранее скопилированные файлы (если это требуется) - ввести "make clean".

**Краткое описание исходного кода makefile:**

1. "type_of_microcontroller" (2 строка) - введите название контроллера.

2. "program_name" (4 строка) - введите название проекта (выходного .hex файла).

3. "#paths of directories for different file types:" (6-9 строка) - пути к директорям:
	
	- "headers_path" - указаны пути, где следует хранить заголовочные файлы (headers, cmsis и.т.п).
	- "source_path" - указан путь, где следует хранить файлы с исходным кодом (.с,.cpp).
	- "asm_path" - указан путь, где следует располагать ассемблер-файлы "xxx.S"
	- "linker_path" - указан путь, где следует располагать конфигуратор линкёра "xxx.ld"
					
	***ОБРАТИТЬ ВНИМАНИЕ!!!!***
	
	***Физическое название файла конфигуратора линкёра - "xxx.ld" и startup-файла "xxx.S" должны совпадать с ранее введенным названием контроллера в переменной "type_of_microcontroller".***
	
	***Например: "type_of_microcontroller := STM32F103", "STM32F103.ld", "STM32F103.S".***
	
	***Требуется для того, чтобы исходный код Makefile был универсальным для всех контроллеров (достаточно лишь изменить название контроллера в Makefile и расположить конфигуратор линкёра и startup-файл с такими же именами по указанным путям).***


4. "c_compile_config" (27 строка) - конфигурация arm-none-eabi-gcc для компиляции Си-файлов.
5. "S_compile_config" (28 строка) - конфигурация arm-none-eabi-gcc для компиляции ассемблерных-файлов.
6. "linker_config" (29 строка) - конфигурация arm-none-eabi-gcc для линковки.
7. "obj_copy_config" (30 строка) - конфигурация arm-none-eabi-objcopy для конвертирования elf to hex.

P.S.
Остальные строки кратко прокоментированы в исходном коде Makefile.


# Руководство по установке arm-none-eabi-gcc:

1) Cсылка на скачивание (я использую Linux x64):

	https://developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2?revision=bc2c96c0-14b5-4bb4-9f18-bceb4050fee7?product=GNU%20Arm%20Embedded%20Toolchain,64-bit,,Linux,7-2018-q2-update

2) Архив распаковываем, например в /opt
3) Теперь необходимо добавить путь до папки bin с исполняемыми файлами компилятора в переменную среды PATH. Например, сделать это можно, добавив текст в конец файла ~/.profile вида:
	
	PATH=$PATH:<путь_до_компилятора>/bin

# Руководство по установке и настройке openocd с J-LINK:

1) Сперва необходимо установить все зависимости. Сделать это можно, выполнив в терминале:

	sudo apt-get install libtool autoconf texinfo libusb-dev libusb-1.0-0-dev

2) Затем нужно получить исходный код OpenOCD. Для этого переходим в указанную директорию и клонируем репозиторий:
	
	cd /home/<имя администратора>
	git clone git://git.code.sf.net/p/openocd/code openocd

3) Теперь переходим в папку openocd, компилируем исходный код и устанавливаем программу:
	
	cd openocd
	./bootstrap
	./configure --enable-jlink
	make
	sudo make install

   Ключ --enable-jlink предписывает включить поддержку адаптера J-LINK (если у вас другой адаптер, следует указать его).

4) Далее следует подсоединить адаптер J-LINK к ПК и проверить список подключенных по USB устройств командой:

	lsusb

   Если адаптер подключен, то вывод команды должен содержать следующую строку:
	
	Bus 001 Device 004: ID 1366:0101 SEGGER J-Link PLUS

где:	1366 — VID-номер (код производителя USB-устройства), 
	0101 — PID-номер (код изделия).

5) Для того чтобы обеспечить взаимодействие сервера отладки OpenOCD с адаптером по интерфейсу USB, необходимо создать файл-правило для менеджера устройств udev, например так:
	
	sudo nano /etc/udev/rules.d/45-jlink.rules

И ввести следующий текст:

	# SEGGER JLINK USB DEVICE 1366:0101
	BUS!="usb", ACTION!="add", SUBSYSTEM!=="usb_device", GOTO="kcontrol_rules_end"
	SYSFS{idProduct}=="0101", SYSFS{idVendor}=="1366", MODE="664", GROUP="plugdev"
	LABEL="kcontrol_rules_end"

6) Далее добавим текущего пользователя в группу plugdev, возможно он уже в ней находится:

	sudo adduser "имя" plugdev

7) Перезагружаемся.

8) Создаем в папке openocd файл openocd.cfg:
	
	gedit ~/openocd/openocd.cfg

И записываем в него настройки которые настраивают порты по которым можно коннектится с openocd, а также передается информация о используемом интерфейсе для общения с контроллером (jlink.cfg - далее описывается наполнение этого файла) и информация о микроконтроллере с которым собрались общаться ( файлы stm32f1x.cfg - как правило поставляется производителем):

	telnet_port 4444			// разрешить подключение к серверу openocd по протоколу telnet через порт 4444
	gdb_port 3333				// установить порт 3333 для подключения отладчика GDB
	
	source [find interface/jlink.cfg]
	source [find target/stm32f1x.cfg]

	reset_config trst_only			// указание способа reset (на J-link есть только TRST)
	adapter_khz 500				// указание скорости J-LINK интерфейса
	init 
	reset init

9) Файл конфигурации jlink.cfg должен располагаться в папке ~/openocd/tcl/interface/

И содержать список:

	#
	# Segger J-Link
	#
	# http://www.segger.com/jlink.html
	#

	interface jlink


	# The serial number can be used to select a specific interface in case more than one
	# is connected to the host.
	#
	# Segger software omits leading zeros in serial number displays,
	# OpenOCD requires them.
	#
	# Example: Select J-Link with serial 123456789
	#
	# jlink serial 000123456789

10) Файл stm32f1x.cfg должен располагаться по пути ~/openocd/tcl/target/

11) Openocd работает при использовании прав администратора sudo, чтобы каждый раз при выполнении СКРИПТА не вводить пароль следует отключить их применительно к openocd:
	 
Найдем месторасположение запускаемого файла openocd: (у меня это: /usr/local/bin/openocd)

	whereis openocd

Откроем файл конфигурации запроса паролей:

	sudo visudo

В котором нужно ввести следующее:
	%<имя администратора> ALL=(ALL) NOPASSWD: <путь к исполняемому файлу openocd>

11) Далее проверяем работоспособность системы, подключаем оборудование и вводим в терминале:
	
	cd ~/openocd		// переходим в папку, где лежит openocd.cfg, для того чтобы не указывать его явно
	sudo openocd		// не обращаем внимания на sudo, пункт 11 требуется для скрипта

Если все сделано правильно, то в терминал будет выведено что-то вроде, причем ОС не передаст дальнейшее управление пользователю командной строкой, что свидетельствует о успешном запуске сервера и правильном подсоединении с микроконтроллером:

	Open On-Chip Debugger 0.10.0+dev-00475-g9f93cca4 (2018-07-19-17:24)
	Licensed under GNU GPL v2
	For bug reports, read
		http://openocd.org/doc/doxygen/bugs.html
	Info : auto-selecting first available session transport "jtag". To override use 'transport select <transport>'.
	adapter speed: 2000 kHz
	adapter_nsrst_delay: 100
	jtag_ntrst_delay: 100
	none separate
	cortex_m reset_config sysresetreq
	trst_only separate trst_push_pull
	adapter speed: 500 kHz
	Info : J-Link V10 compiled Nov 28 2017 11:45:53
	Info : Hardware version: 10.10
	Info : VTarget = 3.380 V
	Info : clock speed 500 kHz
	Info : JTAG tap: k1921vk01t.cpu tap/device found: 0x4ba00477 (mfg: 0x23b (ARM Ltd.), part: 0xba00, ver: 0x4)
	Info : k1921vk01t.cpu: hardware has 6 breakpoints, 4 watchpoints
	Info : Listening on port 3333 for gdb connections
	Info : JTAG tap: k1921vk01t.cpu tap/device found: 0x4ba00477 (mfg: 0x23b (ARM Ltd.), part: 0xba00, ver: 0x4)
	target halted due to debug-request, current mode: Thread 
	xPSR: 0x01000000 pc: 0x00000580 msp: 0x20020000
	Info : Listening on port 6666 for tcl connections
	Info : Listening on port 4444 for telnet connections

# Руководство по настройке GDB-отладки + OpenOCD + J-LINK:

1) Перед запуском gdb, следует создать файл конфигуратор .gdbinit в папке с проектом со следующим текстом:
	
	target remote 127.0.0.1:3333 			// выделение порта под GDB-соединения с сервером OpenOCD
	monitor set remote hardware-watchpoint-limit 4	// количество вотчпоинтов
	monitor set remote hardware-breakpoint-limit 6	// количество брекпоинтов
	monitor set remotetimeout 3			// таймаут
	monitor reset halt				// сброс
	load						// загрузка программы
	monitor reset halt				// сброс

2) Также следует создать глобальный конфигуратор .gdbinit в корневой папке ~/ (у меня это /home/mansur) следует указать команду и путь к локальному конфигуратору (иначе выдаст gdb warning):
	
	add-auto-load-safe-path /home/mansur/Документы/1921_CMD_Project/.gdbinit

3) Запуск gdb отладчика (openocd уже должен быть запущен): 
	
	arm-none-eabi-gdb -x .gdbinit /путь/file.elf


# Установка tmux:

1) apt-get install tmux // установка tmux
2) создать файл .tmux.conf в папке ~/ (у меня это /home/mansur) и записать в него следующее (задает настройки управления мышью в терминальном мультплексоре т.е. выбор окон мышью, скроллинг мышью и.т.д):
	
	set-option -g mouse on
	bind -n WheelUpPane if-shell -F -t = "#{mouse_any_flag}" "send-keys -M" "if -Ft= '#{pane_in_mode}' 'send-keys -M' 'select-pane -t=; copy-mode -e; send-keys -M'"
	bind -n WheelDownPane select-pane -t= \; send-keys -M

# Описание скрипта go.sh:

В данном скрипте пользователю предоставляется выбор между:

1) Инкрементальной компиляцией проекта и запуском openocd и gdb.
2) Полной перекомпиляцией проекта и запуском openocd и gdb.
3) Инкрементальной компиляцией проекта без запуска openocd и gdb.
4) Полной перекомпиляцией проекта без запуска openocd и gdb.
5) Запуск openocd и gdb без компиляции проекта.

* Если пользователь введет иную цифру, которая не указана в выборе, произойдет ошибка, о которой проинформирует скрипт.
* Если пользователю требуется посмотреть все записи компиляции (log-записи gcc-arm-none-eabi), он может посмотреть их 
  в "./Build_Results/Output/out.log" (после каждой компиляции происходит удаление предыдущих записей).
* Скрипт работает по следующему принципу: 
	- автоматически запускает утилиту make, которая согласно алгоритму указаному в Makefile компилирует проект.
	- далее в зависимости от выбора запускается openocd и gdb (происходит автоматический поиск имени файла в log-записях 		  gcc-arm-none-eabi с форматом elf, имя которого ранее было указано в makefile).
	- openocd и gdb будут запущены с помощью терминального мультплексора в одном окне командной строки, которая будет вертикально поделена на две части.





