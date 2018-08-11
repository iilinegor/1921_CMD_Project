/**
  ******************************************************************************
  * file    main.c
  * author  Bogdan Kolbov (kolbov@niiet.ru)
  * version V1.0.0
  * date    08.10.2015
  * brief   Simple flashing led project. Led is on H[7].
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "K1921VK01T.h"
#include "LED.h"
#include "Functions.h"
#include "Var_Def.h"
/* Exported functions --------------------------------------------------------*/
/* Private types -------------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
//#define LED_PIN       (1<<7)

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


#define GPIO_PIN2  (1 << 2)
#define GPIO_PIN3  (1 << 3)
#define GPIO_PIN13  (1 << 13)
#define GPIO_PIN14  (1 << 14)
#define GPIO_PIN15  (1 << 15)



int zaderzhka = 10;
int flag = 0;
unsigned int* Pointer_My = 0;



//int k;// = 0;
float x_1 = 12.356f;
int arg_F1 = 0;
float W11 = 0.413763434080f;




void Delay (uint32_t dlyTicks) {
  uint32_t curTicks,i;
  for(curTicks=0;curTicks<dlyTicks;curTicks++){
        for(i=0;i<1000;i++);
    }
}



/*----------------------------------------------------------------------------
  initialize LED Pins
 *----------------------------------------------------------------------------*/
void LED_Init (void) {

  /* configure pins PC.13,PC.14,PC.15,PD.13,PD.14,PD.15,PE.2,PE.3  as output */
  NT_COMMON_REG->GPIODENC |= (GPIO_PIN13 | GPIO_PIN14 | GPIO_PIN15); 	/* enable pins in GPIOC */
  NT_COMMON_REG->GPIODEND |= (GPIO_PIN13 | GPIO_PIN14 | GPIO_PIN15);  	/* enable pins in GPIOD */
  NT_COMMON_REG->GPIODENE |= (GPIO_PIN2 | GPIO_PIN3);  					/* enable pins in GPIOE */
  NT_GPIOC->OUTENSET = (GPIO_PIN13 | GPIO_PIN14 | GPIO_PIN15);			/* enable OUTPUT pins in GPIOC */
  NT_GPIOD->OUTENSET = (GPIO_PIN13 | GPIO_PIN14 | GPIO_PIN15);			/* enable OUTPUT pins in GPIOD */
  NT_GPIOE->OUTENSET = (GPIO_PIN2 | GPIO_PIN3);							/* enable OUTPUT pins in GPIOE */
  NT_GPIOC->ALTFUNCCLR = (GPIO_PIN13 | GPIO_PIN14 | GPIO_PIN15);		/* disable ALTFUNCTION pins in GPIOC */
  NT_GPIOD->ALTFUNCCLR = (GPIO_PIN13 | GPIO_PIN14 | GPIO_PIN15);		/* disable ALTFUNCTION pins in GPIOD */
  NT_GPIOE->ALTFUNCCLR = (GPIO_PIN2 | GPIO_PIN3);						/* disable ALTFUNCTION pins in GPIOE */

  LED_Out (0);                               /* switch LEDs off               */
}


/*----------------------------------------------------------------------------
  Function that turns on requested LED
 *----------------------------------------------------------------------------*/
void LED_On (unsigned int num) {

  if (num < LED_NUM) {
   switch (num){
    case 0: NT_GPIOC->MASKHIGHBYTE[0x20] =0xFF00; break;
    case 1: NT_GPIOC->MASKHIGHBYTE[0x40] =0xFF00; break;
    case 2: NT_GPIOC->MASKHIGHBYTE[0x80] =0xFF00; break;
    case 3: NT_GPIOD->MASKHIGHBYTE[0x20] =0xFF00; break;
    case 4: NT_GPIOD->MASKHIGHBYTE[0x40] =0xFF00; break;
    case 5: NT_GPIOD->MASKHIGHBYTE[0x80] =0xFF00; break;
    case 6: NT_GPIOE->MASKLOWBYTE[0x04] =0x00FF; break;
    case 7: NT_GPIOE->MASKLOWBYTE[0x08] =0x00FF; break;
    }
  }
}

/*----------------------------------------------------------------------------
  Function that turns off requested LED
 *----------------------------------------------------------------------------*/
void LED_Off (unsigned int num) {

  if (num < LED_NUM) {
   switch (num){
    case 0: NT_GPIOC->MASKHIGHBYTE[0x20] =0x0000; break;
    case 1: NT_GPIOC->MASKHIGHBYTE[0x40] =0x0000; break;
    case 2: NT_GPIOC->MASKHIGHBYTE[0x80] =0x0000; break;
    case 3: NT_GPIOD->MASKHIGHBYTE[0x20] =0x0000; break;
    case 4: NT_GPIOD->MASKHIGHBYTE[0x40] =0x0000; break;
    case 5: NT_GPIOD->MASKHIGHBYTE[0x80] =0x0000; break;
    case 6: NT_GPIOE->MASKLOWBYTE[0x04] =0x0000; break;
    case 7: NT_GPIOE->MASKLOWBYTE[0x08] =0x0000; break;
    }
  }
}

/*----------------------------------------------------------------------------
  Function that outputs value to LEDs
 *----------------------------------------------------------------------------*/
void LED_Out(unsigned int value) {
  int i;

  for (i = 0; i < LED_NUM; i++) {
    if (value & (1<<i)) {
      LED_On (i);
    } else {
      LED_Off(i);
    }
  }
}


int main()
{

    int num     = -1;
    int dir     =  1;

    Init();

     LED_Init();
   // NT_GPIOH->OUTENSET=LED_PIN;                 //pin output mode
  //  NT_COMMON_REG->GPIODEN3_bit.PORTH|=LED_PIN; //output enable
  //  SysTick_Config(0xF00F00);                   //cmsis systick configure function
  //  __enable_irq();

    while(1)
    {

      //  Test_VAR1 = Test_VAR1 + 0.01;
      //  Test_VAR2 = Test_VAR2 + 0.01;
        //if (Test_VAR1>=1000.0) Test_VAR1=0.0;
        num += dir;
            if (num == LED_NUM) { dir = -1; num =  LED_NUM-2; }
            else if   (num < 0) { dir =  1; num =  1;         }

                zaderzhka++;
                if (zaderzhka >= 1000)zaderzhka = 0;
                //k+=0.1f;
                //if (k>=5.5f) k=5.5f;
            LED_On (num);
           // LED_On (3);

         //   arg_F1 = (int)(x_1 * W11);



            Delay(zaderzhka);
          //  Delay(250);
            LED_Off(num);
        //    Delay(250);


/*
                if (flag == 0)
                {
                    zaderzhka++;
                }

                if (flag == 1)
                {
                    zaderzhka--;
                }

                if (zaderzhka>=150) flag = 1;

                if (zaderzhka<=10) flag = 0;
*/



    }
    return 0;
}

//void SysTick_Handler()
//{
//    //NT_GPIOH->DATAOUT^=LED_PIN;
//    ;
//}

