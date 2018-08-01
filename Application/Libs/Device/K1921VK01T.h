/**
******************************************************************************
* @file    K1921VK01T.h
* @author  Angioscan Electronics Application Team
* @version V1.3.1
* @date    15.06.2015
* @brief   This file contains all the Special Function Registers definitions
*          for the NIIET K1921VK01T microcontroller.
******************************************************************************
*
*
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
* TIME. AS A RESULT, ANGIOSCAN ELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
* DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
* FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
* CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
*                         COPYRIGHT 2015 Angioscan Electronics
*******************************************************************************
* FILE K1921VK01T.h
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __K1921VK01T_H
#define __K1921VK01T_H

#define __I     volatile const                /*!< defines 'read only' permissions      */
#define __O     volatile                      /*!< defines 'write only' permissions     */
#define __IO    volatile                      /*!< defines 'read / write' permissions   */

/* Configuration of the Cortex-M4F Processor and Core Peripherals */
#define __CM4F_REV             0x0100         /*!< Cortex-M4F Core Revision r0p1                */
#define __MPU_PRESENT             1           /*!< MPU present or not                           */
#define __NVIC_PRIO_BITS          3           /*!< Number of Bits used for Priority Levels      */
#define __Vendor_SysTickConfig    0           /*!< Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             1           /*!< FPU present or not                           */

#include "stdint.h"
#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************/
/*                   K1921VK01T Interrupt Number Definition                     */
/******************************************************************************/

typedef enum IRQn
{
    /*-- Cortex-M4F Processor Exceptions Numbers ---------------------------------*/
    NonMaskableInt_IRQn     = -14,      /*!<  2 Non Maskable Interrupt          */
    HardFault_IRQn          = -13,      /*!<  3 Hard Fault Interrupt            */
    SVCall_IRQn             = -5,       /*!< 11 SV Call Interrupt               */
    PendSV_IRQn             = -2,       /*!< 14 Pend SV Interrupt               */
    SysTick_IRQn            = -1,       /*!< 15 System Tick Timer Interrupt     */

    /*-- K1921VK01Tspecific Interrupt Numbers --------------------------------------*/
    WWDG_IRQn                =  0,      /*!< WWDG interrupt                     */
    I2C0_IRQn                =  1,      /*!< I2C_0 interrupt                    */
    I2C1_IRQn                =  2,      /*!< I2C_1 interrupt                    */
    TIM0_IRQn                =  3,      /*!< TIMER0 interrupt                   */
    TIM1_IRQn                =  4,      /*!< TIMER1 interrupt                   */
    TIM2_IRQn                =  5,      /*!< TIMER2 interrupt                   */
    DMA_Stream0_IRQn         =  6,      /*!< DMA_Stream0 interrupt              */
    DMA_Stream1_IRQn         =  7,      /*!< DMA_Stream1 interrupt              */
    DMA_Stream2_IRQn         =  8,      /*!< DMA_Stream2 interrupt              */
    DMA_Stream3_IRQn         =  9,      /*!< DMA_Stream3 interrupt              */
    DMA_Stream4_IRQn         =  10,     /*!< DMA_Stream4 interrupt              */
    DMA_Stream5_IRQn         =  11,     /*!< DMA_Stream5 interrupt              */
    DMA_Stream6_IRQn         =  12,     /*!< DMA_Stream6 interrupt              */
    DMA_Stream7_IRQn         =  13,     /*!< DMA_Stream7 interrupt              */
    DMA_Stream8_IRQn         =  14,     /*!< DMA_Stream8 interrupt              */
    DMA_Stream9_IRQn         =  15,     /*!< DMA_Stream9 interrupt              */
    DMA_Stream10_IRQn        =  16,     /*!< DMA_Stream10 interrupt             */
    DMA_Stream11_IRQn        =  17,     /*!< DMA_Stream11 interrupt             */
    DMA_Stream12_IRQn        =  18,     /*!< DMA_Stream12 interrupt             */
    DMA_Stream13_IRQn        =  19,     /*!< DMA_Stream13 interrupt             */
    DMA_Stream14_IRQn        =  20,     /*!< DMA_Stream14 interrupt             */
    DMA_Stream15_IRQn        =  21,     /*!< DMA_Stream15 interrupt             */
    DMA_Stream16_IRQn        =  22,     /*!< DMA_Stream16 interrupt             */
    DMA_Stream17_IRQn        =  23,     /*!< DMA_Stream17 interrupt             */
    DMA_Stream18_IRQn        =  24,     /*!< DMA_Stream18 interrupt             */
    DMA_Stream19_IRQn        =  25,     /*!< DMA_Stream19 interrupt             */
    DMA_Stream20_IRQn        =  26,     /*!< DMA_Stream20 interrupt             */
    DMA_Stream21_IRQn        =  27,     /*!< DMA_Stream21 interrupt             */
    DMA_Stream22_IRQn        =  28,     /*!< DMA_Stream22 interrupt             */
    DMA_Stream23_IRQn        =  29,     /*!< DMA_Stream23 interrupt             */
    UART0_MX_IRQn            =  30,     /*!< UART 0 interrupt                   */
    UART0_RX_IRQn            =  31,     /*!< UART 0 interrupt                   */
    UART0_TX_IRQn            =  32,     /*!< UART 0 interrupt                   */
    UART0_RT_IRQn            =  33,     /*!< UART 0 interrupt                   */
    UART0_E_IRQn             =  34,     /*!< UART 0 interrupt                   */
    UART0_IRQn               =  35,     /*!< UART 0 interrupt                   */
    UART1_MX_IRQn            =  36,     /*!< UART 1 interrupt                   */
    UART1_RX_IRQn            =  37,     /*!< UART 1 interrupt                   */
    UART1_TX_IRQn            =  38,     /*!< UART 1 interrupt                   */
    UART1_RT_IRQn            =  39,     /*!< UART 1 interrupt                   */
    UART1_E_IRQn             =  40,     /*!< UART 1 interrupt                   */
    UART1_IRQn               =  41,     /*!< UART 1 interrupt                   */
    UART2_MX_IRQn            =  42,     /*!< UART 2 interrupt                   */
    UART2_RX_IRQn            =  43,     /*!< UART 2 interrupt                   */
    UART2_TX_IRQn            =  44,     /*!< UART 2 interrupt                   */
    UART2_RT_IRQn            =  45,     /*!< UART 2 interrupt                   */
    UART2_E_IRQn             =  46,     /*!< UART 2 interrupt                   */
    UART2_IRQn               =  47,     /*!< UART 2 interrupt                   */
    UART3_MX_IRQn            =  48,     /*!< UART 3 interrupt                   */
    UART3_RX_IRQn            =  49,     /*!< UART 3 interrupt                   */
    UART3_TX_IRQn            =  50,     /*!< UART 3 interrupt                   */
    UART3_RT_IRQn            =  51,     /*!< UART 3 interrupt                   */
    UART3_E_IRQn             =  52,     /*!< UART 3 interrupt                   */
    UART3_IRQn               =  53,     /*!< UART 3 interrupt                   */
    PWM0_IRQn                =  54,     /*!< PWM 0 general interrupt            */
    PWM0_HD_IRQn             =  55,     /*!< PWM HR 0 interrupt                 */
    PWM0_TZ_IRQn             =  56,     /*!< TZ PWM 0 interrupt                 */
    PWM1_IRQn                =  57,     /*!< PWM 1 general interrupt            */
    PWM1_HD_IRQn             =  58,     /*!< PWM HR 1 general interrupt         */
    PWM1_TZ_IRQn             =  59,     /*!< TZ PWM 1 interrupt                 */
    PWM2_IRQn                =  60,     /*!< PWM 2 general interrupt            */
    PWM2_HD_IRQn             =  61,     /*!< PWM HR 2 general interrupt         */
    PWM2_TZ_IRQn             =  62,     /*!< TZ PWM 2 interrupt                 */
    PWM3_IRQn                =  63,     /*!< PWM 3 general interrupt            */
    PWM3_HD_IRQn             =  64,     /*!< PWM HR 3 general interrupt         */
    PWM3_TZ_IRQn             =  65,     /*!< TZ PWM 3 interrupt                 */
    PWM4_IRQn                =  66,     /*!< PWM 4 general interrupt            */
    PWM4_HD_IRQn             =  67,     /*!< PWM HR 4 general interrupt         */
    PWM4_TZ_IRQn             =  68,     /*!< TZ PWM 4 interrupt                 */
    PWM5_IRQn                =  69,     /*!< PWM 5 general interrupt            */
    PWM5_HD_IRQn             =  70,     /*!< PWM HR 5 general interrupt         */
    PWM5_TZ_IRQn             =  71,     /*!< TZ PWM 5 interrupt                 */
    PWM6_IRQn                =  72,     /*!< PWM 6 general interrupt            */
    PWM6_HD_IRQn             =  73,     /*!< PWM HR 6 general interrupt         */
    PWM6_TZ_IRQn             =  74,     /*!< TZ PWM 6 interrupt                 */
    PWM7_IRQn                =  75,     /*!< PWM 7 general interrupt            */
    PWM7_HD_IRQn             =  76,     /*!< PWM HR 7 general interrupt         */
    PWM7_TZ_IRQn             =  77,     /*!< TZ PWM 7 interrupt                 */
    PWM8_IRQn                =  78,     /*!< PWM 8 general interrupt            */
    PWM8_HD_IRQn             =  79,     /*!< PWM HR 8 general interrupt         */
    PWM8_TZ_IRQn             =  80,     /*!< TZ PWM 8 interrupt                 */
    ADC_SEQ0_IRQn            =  81,     /*!< ADC_0 interrupt                    */
    ADC_SEQ1_IRQn            =  82,     /*!< ADC_1 interrupt                    */
    ADC_SEQ2_IRQn            =  83,     /*!< ADC_2 interrupt                    */
    ADC_SEQ3_IRQn            =  84,     /*!< ADC_3 interrupt                    */
    ADC_SEQ4_IRQn            =  85,     /*!< ADC_4 interrupt                    */
    ADC_SEQ5_IRQn            =  86,     /*!< ADC_5 interrupt                    */
    ADC_SEQ6_IRQn            =  87,     /*!< ADC_6 interrupt                    */
    ADC_SEQ7_IRQn            =  88,     /*!< ADC_7 interrupt                    */
    ADC_CompInt_IRQn         =  89,     /*!< ADC Comparator interrupt           */
    CAP0_IRQn                =  90,     /*!< CAP_0 interrupt                    */
    CAP1_IRQn                =  91,     /*!< CAP_1 interrupt                    */
    CAP2_IRQn                =  92,     /*!< CAP_2 interrupt                    */
    CAP3_IRQn                =  93,     /*!< CAP_3 interrupt                    */
    CAP4_IRQn                =  94,     /*!< CAP_4 interrupt                    */
    CAP5_IRQn                =  95,     /*!< CAP_5 interrupt                    */
    QEP0_IRQn                =  96,     /*!< QEP_0 interrupt                    */
    QEP1_IRQn                =  97,     /*!< QEP_1 interrupt                    */
    BootFlash_IRQn           =  98,     /*!< BootFlash interrupt                */
    CMP0_IRQn                =  99,     /*!< CMP 0 interrupt                    */
    CMP1_IRQn                =  100,    /*!< CMP 1 interrupt                    */
    CMP2_IRQn                =  101,    /*!< CMP 2 interrupt                    */
    SPI0_IRQn                =  102,    /*!< SPI_0 interrupt                    */
    SPI1_IRQn                =  103,    /*!< SPI_1 interrupt                    */
    SPI2_IRQn                =  104,    /*!< SPI_2 interrupt                    */
    SPI3_IRQn                =  105,    /*!< SPI_3 interrupt                    */
    UserFlash_IRQn           =  106,    /*!< UserFlash interrupt                */
    GPIOA_IRQn               =  107,    /*!< GPIO Ђ interrupt                   */
    GPIOB_IRQn               =  108,    /*!< GPIO B interrupt                   */
    GPIOC_IRQn               =  109,    /*!< GPIO C interrupt                   */
    GPIOD_IRQn               =  110,    /*!< GPIO D interrupt                   */
    GPIOE_IRQn               =  111,    /*!< GPIO E interrupt                   */
    GPIOF_IRQn               =  112,    /*!< GPIO F interrupt                   */
    GPIOG_IRQn               =  113,    /*!< GPIO G interrupt                   */
    GPIOH_IRQn               =  114,    /*!< GPIO H interrupt                   */
    Ethernet_IRQn            =  115,    /*!< Ethernet interrupt                 */
    CAN0_IRQn                =  116,    /*!< CAN 0 interrupt                    */
    CAN1_IRQn                =  117,    /*!< CAN  1 interrupt                   */
    CAN2_IRQn                =  118,    /*!< CAN  2 interrupt                   */
    CAN3_IRQn                =  119,    /*!< CAN  3 interrupt                   */
    CAN4_IRQn                =  120,    /*!< CAN  4 interrupt                   */
    CAN5_IRQn                =  121,    /*!< CAN  5 interrupt                   */
    CAN6_IRQn                =  122,    /*!< CAN  6 interrupt                   */
    CAN7_IRQn                =  123,    /*!< CAN  7 interrupt                   */
    CAN8_IRQn                =  124,    /*!< CAN  8 interrupt                   */
    CAN9_IRQn                =  125,    /*!< CAN  9 interrupt                   */
    CAN10_IRQn               =  126,    /*!< CAN 10 interrupt                   */
    CAN11_IRQn               =  127,    /*!< CAN 11 interrupt                   */
    CAN12_IRQn               =  128,    /*!< CAN 12 interrupt                   */
    CAN13_IRQn               =  129,    /*!< CAN 13 interrupt                   */
    CAN14_IRQn               =  130,    /*!< CAN 14 interrupt                   */
    CAN15_IRQn               =  131,    /*!< CAN 15 interrupt                   */
    RTC_IRQn                 =  132,    /*!< RTC interrupt                      */
    USB_IRQn                 =  133,    /*!< USB OTG interrupt                  */
} IRQn_Type;

#include <core_cm4.h>                         /* Cortex-M4 processor and core peripherals       */
#ifdef ARM_MATH_CM4
#include <arm_math.h>                       /* ARM DSP library                                */
#endif

/******************************************************************************/
/*                         ADC controller registers                           */
/******************************************************************************/

/*-- ADCACTSS: Configuration secvensors register -----------------------------*/

typedef struct {
    uint32_t ASEN0                             :1;          /*!< enable secvensor 0 */
    uint32_t ASEN1                             :1;          /*!< enable secvensor 1 */
    uint32_t ASEN2                             :1;          /*!< enable secvensor 2 */
    uint32_t ASEN3                             :1;          /*!< enable secvensor 3 */
    uint32_t ASEN4                             :1;          /*!< enable secvensor 4 */
    uint32_t ASEN5                             :1;          /*!< enable secvensor 5 */
    uint32_t ASEN6                             :1;          /*!< enable secvensor 6 */
    uint32_t ASEN7                             :1;          /*!< enable secvensor 7 */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _ADCACTSS_bits;

/* Bit field positions: */
#define ADCACTSS_ASEN0_Pos                   0            /*!< enable secvensor 0 */
#define ADCACTSS_ASEN1_Pos                   1            /*!< enable secvensor 1 */
#define ADCACTSS_ASEN2_Pos                   2            /*!< enable secvensor 2 */
#define ADCACTSS_ASEN3_Pos                   3            /*!< enable secvensor 3 */
#define ADCACTSS_ASEN4_Pos                   4            /*!< enable secvensor 4 */
#define ADCACTSS_ASEN5_Pos                   5            /*!< enable secvensor 5 */
#define ADCACTSS_ASEN6_Pos                   6            /*!< enable secvensor 6 */
#define ADCACTSS_ASEN7_Pos                   7            /*!< enable secvensor 7 */

/* Bit field masks: */
#define ADCACTSS_ASEN0_Msk                   0x00000001   /*!< enable secvensor 0 */
#define ADCACTSS_ASEN1_Msk                   0x00000002   /*!< enable secvensor 1 */
#define ADCACTSS_ASEN2_Msk                   0x00000004   /*!< enable secvensor 2 */
#define ADCACTSS_ASEN3_Msk                   0x00000008   /*!< enable secvensor 3 */
#define ADCACTSS_ASEN4_Msk                   0x00000010   /*!< enable secvensor 4 */
#define ADCACTSS_ASEN5_Msk                   0x00000020   /*!< enable secvensor 5 */
#define ADCACTSS_ASEN6_Msk                   0x00000040   /*!< enable secvensor 6 */
#define ADCACTSS_ASEN7_Msk                   0x00000080   /*!< enable secvensor 7 */

/*-- ADCRIS: Register unmasked interrupt -------------------------------------*/

typedef struct {
    uint32_t INR0                              :1;          /*!< ADC complete msr */
    uint32_t INR1                              :1;          /*!< ADC complete msr */
    uint32_t INR2                              :1;          /*!< ADC complete msr */
    uint32_t INR3                              :1;          /*!< ADC complete msr */
    uint32_t INR4                              :1;          /*!< ADC complete msr */
    uint32_t INR5                              :1;          /*!< ADC complete msr */
    uint32_t INR6                              :1;          /*!< ADC complete msr */
    uint32_t INR7                              :1;          /*!< ADC complete msr */
    uint32_t INRDC0                            :1;          /*!< Received interrupt from CMP 0 */
    uint32_t INRDC1                            :1;          /*!< Received interrupt from CMP 1 */
    uint32_t INRDC2                            :1;          /*!< Received interrupt from CMP 2 */
    uint32_t INRDC3                            :1;          /*!< Received interrupt from CMP 3 */
    uint32_t INRDC4                            :1;          /*!< Received interrupt from CMP 4 */
    uint32_t INRDC5                            :1;          /*!< Received interrupt from CMP 5 */
    uint32_t INRDC6                            :1;          /*!< Received interrupt from CMP 6 */
    uint32_t INRDC7                            :1;          /*!< Received interrupt from CMP 7 */
    uint32_t INRDC8                            :1;          /*!< Received interrupt from CMP 8 */
    uint32_t INRDC9                            :1;          /*!< Received interrupt from CMP 9 */
    uint32_t INRDC10                           :1;          /*!< Received interrupt from CMP 10 */
    uint32_t INRDC11                           :1;          /*!< Received interrupt from CMP 11 */
    uint32_t INRDC12                           :1;          /*!< Received interrupt from CMP 12 */
    uint32_t INRDC13                           :1;          /*!< Received interrupt from CMP 13 */
    uint32_t INRDC14                           :1;          /*!< Received interrupt from CMP 14 */
    uint32_t INRDC15                           :1;          /*!< Received interrupt from CMP 15 */
    uint32_t INRDC16                           :1;          /*!< Received interrupt from CMP 16 */
    uint32_t INRDC17                           :1;          /*!< Received interrupt from CMP 17 */
    uint32_t INRDC18                           :1;          /*!< Received interrupt from CMP 18 */
    uint32_t INRDC19                           :1;          /*!< Received interrupt from CMP 19 */
    uint32_t INRDC20                           :1;          /*!< Received interrupt from CMP 20 */
    uint32_t INRDC21                           :1;          /*!< Received interrupt from CMP 21 */
    uint32_t INRDC22                           :1;          /*!< Received interrupt from CMP 22 */
    uint32_t INRDC23                           :1;          /*!< Received interrupt from CMP 23 */
} _ADCRIS_bits;

/* Bit field positions: */
#define ADCRIS_INR0_Pos                      0            /*!< ADC complete msr */
#define ADCRIS_INR1_Pos                      1            /*!< ADC complete msr */
#define ADCRIS_INR2_Pos                      2            /*!< ADC complete msr */
#define ADCRIS_INR3_Pos                      3            /*!< ADC complete msr */
#define ADCRIS_INR4_Pos                      4            /*!< ADC complete msr */
#define ADCRIS_INR5_Pos                      5            /*!< ADC complete msr */
#define ADCRIS_INR6_Pos                      6            /*!< ADC complete msr */
#define ADCRIS_INR7_Pos                      7            /*!< ADC complete msr */
#define ADCRIS_INRDC0_Pos                    8            /*!< Received interrupt from CMP 0 */
#define ADCRIS_INRDC1_Pos                    9            /*!< Received interrupt from CMP 1 */
#define ADCRIS_INRDC2_Pos                    10           /*!< Received interrupt from CMP 2 */
#define ADCRIS_INRDC3_Pos                    11           /*!< Received interrupt from CMP 3 */
#define ADCRIS_INRDC4_Pos                    12           /*!< Received interrupt from CMP 4 */
#define ADCRIS_INRDC5_Pos                    13           /*!< Received interrupt from CMP 5 */
#define ADCRIS_INRDC6_Pos                    14           /*!< Received interrupt from CMP 6 */
#define ADCRIS_INRDC7_Pos                    15           /*!< Received interrupt from CMP 7 */
#define ADCRIS_INRDC8_Pos                    16           /*!< Received interrupt from CMP 8 */
#define ADCRIS_INRDC9_Pos                    17           /*!< Received interrupt from CMP 9 */
#define ADCRIS_INRDC10_Pos                   18           /*!< Received interrupt from CMP 10 */
#define ADCRIS_INRDC11_Pos                   19           /*!< Received interrupt from CMP 11 */
#define ADCRIS_INRDC12_Pos                   20           /*!< Received interrupt from CMP 12 */
#define ADCRIS_INRDC13_Pos                   21           /*!< Received interrupt from CMP 13 */
#define ADCRIS_INRDC14_Pos                   22           /*!< Received interrupt from CMP 14 */
#define ADCRIS_INRDC15_Pos                   23           /*!< Received interrupt from CMP 15 */
#define ADCRIS_INRDC16_Pos                   24           /*!< Received interrupt from CMP 16 */
#define ADCRIS_INRDC17_Pos                   25           /*!< Received interrupt from CMP 17 */
#define ADCRIS_INRDC18_Pos                   26           /*!< Received interrupt from CMP 18 */
#define ADCRIS_INRDC19_Pos                   27           /*!< Received interrupt from CMP 19 */
#define ADCRIS_INRDC20_Pos                   28           /*!< Received interrupt from CMP 20 */
#define ADCRIS_INRDC21_Pos                   29           /*!< Received interrupt from CMP 21 */
#define ADCRIS_INRDC22_Pos                   30           /*!< Received interrupt from CMP 22 */
#define ADCRIS_INRDC23_Pos                   31           /*!< Received interrupt from CMP 23 */

/* Bit field masks: */
#define ADCRIS_INR0_Msk                      0x00000001   /*!< ADC complete msr */
#define ADCRIS_INR1_Msk                      0x00000002   /*!< ADC complete msr */
#define ADCRIS_INR2_Msk                      0x00000004   /*!< ADC complete msr */
#define ADCRIS_INR3_Msk                      0x00000008   /*!< ADC complete msr */
#define ADCRIS_INR4_Msk                      0x00000010   /*!< ADC complete msr */
#define ADCRIS_INR5_Msk                      0x00000020   /*!< ADC complete msr */
#define ADCRIS_INR6_Msk                      0x00000040   /*!< ADC complete msr */
#define ADCRIS_INR7_Msk                      0x00000080   /*!< ADC complete msr */
#define ADCRIS_INRDC0_Msk                    0x00000100   /*!< Received interrupt from CMP 0 */
#define ADCRIS_INRDC1_Msk                    0x00000200   /*!< Received interrupt from CMP 1 */
#define ADCRIS_INRDC2_Msk                    0x00000400   /*!< Received interrupt from CMP 2 */
#define ADCRIS_INRDC3_Msk                    0x00000800   /*!< Received interrupt from CMP 3 */
#define ADCRIS_INRDC4_Msk                    0x00001000   /*!< Received interrupt from CMP 4 */
#define ADCRIS_INRDC5_Msk                    0x00002000   /*!< Received interrupt from CMP 5 */
#define ADCRIS_INRDC6_Msk                    0x00004000   /*!< Received interrupt from CMP 6 */
#define ADCRIS_INRDC7_Msk                    0x00008000   /*!< Received interrupt from CMP 7 */
#define ADCRIS_INRDC8_Msk                    0x00010000   /*!< Received interrupt from CMP 8 */
#define ADCRIS_INRDC9_Msk                    0x00020000   /*!< Received interrupt from CMP 9 */
#define ADCRIS_INRDC10_Msk                   0x00040000   /*!< Received interrupt from CMP 10 */
#define ADCRIS_INRDC11_Msk                   0x00080000   /*!< Received interrupt from CMP 11 */
#define ADCRIS_INRDC12_Msk                   0x00100000   /*!< Received interrupt from CMP 12 */
#define ADCRIS_INRDC13_Msk                   0x00200000   /*!< Received interrupt from CMP 13 */
#define ADCRIS_INRDC14_Msk                   0x00400000   /*!< Received interrupt from CMP 14 */
#define ADCRIS_INRDC15_Msk                   0x00800000   /*!< Received interrupt from CMP 15 */
#define ADCRIS_INRDC16_Msk                   0x01000000   /*!< Received interrupt from CMP 16 */
#define ADCRIS_INRDC17_Msk                   0x02000000   /*!< Received interrupt from CMP 17 */
#define ADCRIS_INRDC18_Msk                   0x04000000   /*!< Received interrupt from CMP 18 */
#define ADCRIS_INRDC19_Msk                   0x08000000   /*!< Received interrupt from CMP 19 */
#define ADCRIS_INRDC20_Msk                   0x10000000   /*!< Received interrupt from CMP 20 */
#define ADCRIS_INRDC21_Msk                   0x20000000   /*!< Received interrupt from CMP 21 */
#define ADCRIS_INRDC22_Msk                   0x40000000   /*!< Received interrupt from CMP 22 */
#define ADCRIS_INRDC23_Msk                   0x80000000   /*!< Received interrupt from CMP 23 */

/*-- ADCIM: Register mask interrupt ------------------------------------------*/

typedef struct {
    uint32_t MASK0                             :1;          /*!< Enable transmission interrupt line IS0 */
    uint32_t MASK1                             :1;          /*!< Enable transmission interrupt line IS1 */
    uint32_t MASK2                             :1;          /*!< Enable transmission interrupt line IS2 */
    uint32_t MASK3                             :1;          /*!< Enable transmission interrupt line IS3 */
    uint32_t MASK4                             :1;          /*!< Enable transmission interrupt line IS4 */
    uint32_t MASK5                             :1;          /*!< Enable transmission interrupt line IS5 */
    uint32_t MASK6                             :1;          /*!< Enable transmission interrupt line IS6 */
    uint32_t MASK7                             :1;          /*!< Enable transmission interrupt line IS7 */
    uint32_t MIDC0                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC0 */
    uint32_t MIDC1                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC1 */
    uint32_t MIDC2                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC2 */
    uint32_t MIDC3                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC3 */
    uint32_t MIDC4                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC4 */
    uint32_t MIDC5                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC5 */
    uint32_t MIDC6                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC6 */
    uint32_t MIDC7                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC7 */
    uint32_t MIDC8                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC8 */
    uint32_t MIDC9                             :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC9 */
    uint32_t MIDC10                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC10 */
    uint32_t MIDC11                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC11 */
    uint32_t MIDC12                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC12 */
    uint32_t MIDC13                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC13 */
    uint32_t MIDC14                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC14 */
    uint32_t MIDC15                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC15 */
    uint32_t MIDC16                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC16 */
    uint32_t MIDC17                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC17 */
    uint32_t MIDC18                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC18 */
    uint32_t MIDC19                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC19 */
    uint32_t MIDC20                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC20 */
    uint32_t MIDC21                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC21 */
    uint32_t MIDC22                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC22 */
    uint32_t MIDC23                            :1;          /*!< Transmit to controller by line IDC flag interrupt INRDC23 */
} _ADCIM_bits;

/* Bit field positions: */
#define ADCIM_MASK0_Pos                      0            /*!< Enable transmission interrupt line IS0 */
#define ADCIM_MASK1_Pos                      1            /*!< Enable transmission interrupt line IS1 */
#define ADCIM_MASK2_Pos                      2            /*!< Enable transmission interrupt line IS2 */
#define ADCIM_MASK3_Pos                      3            /*!< Enable transmission interrupt line IS3 */
#define ADCIM_MASK4_Pos                      4            /*!< Enable transmission interrupt line IS4 */
#define ADCIM_MASK5_Pos                      5            /*!< Enable transmission interrupt line IS5 */
#define ADCIM_MASK6_Pos                      6            /*!< Enable transmission interrupt line IS6 */
#define ADCIM_MASK7_Pos                      7            /*!< Enable transmission interrupt line IS7 */
#define ADCIM_MIDC0_Pos                      8            /*!< Transmit to controller by line IDC flag interrupt INRDC0 */
#define ADCIM_MIDC1_Pos                      9            /*!< Transmit to controller by line IDC flag interrupt INRDC1 */
#define ADCIM_MIDC2_Pos                      10           /*!< Transmit to controller by line IDC flag interrupt INRDC2 */
#define ADCIM_MIDC3_Pos                      11           /*!< Transmit to controller by line IDC flag interrupt INRDC3 */
#define ADCIM_MIDC4_Pos                      12           /*!< Transmit to controller by line IDC flag interrupt INRDC4 */
#define ADCIM_MIDC5_Pos                      13           /*!< Transmit to controller by line IDC flag interrupt INRDC5 */
#define ADCIM_MIDC6_Pos                      14           /*!< Transmit to controller by line IDC flag interrupt INRDC6 */
#define ADCIM_MIDC7_Pos                      15           /*!< Transmit to controller by line IDC flag interrupt INRDC7 */
#define ADCIM_MIDC8_Pos                      16           /*!< Transmit to controller by line IDC flag interrupt INRDC8 */
#define ADCIM_MIDC9_Pos                      17           /*!< Transmit to controller by line IDC flag interrupt INRDC9 */
#define ADCIM_MIDC10_Pos                     18           /*!< Transmit to controller by line IDC flag interrupt INRDC10 */
#define ADCIM_MIDC11_Pos                     19           /*!< Transmit to controller by line IDC flag interrupt INRDC11 */
#define ADCIM_MIDC12_Pos                     20           /*!< Transmit to controller by line IDC flag interrupt INRDC12 */
#define ADCIM_MIDC13_Pos                     21           /*!< Transmit to controller by line IDC flag interrupt INRDC13 */
#define ADCIM_MIDC14_Pos                     22           /*!< Transmit to controller by line IDC flag interrupt INRDC14 */
#define ADCIM_MIDC15_Pos                     23           /*!< Transmit to controller by line IDC flag interrupt INRDC15 */
#define ADCIM_MIDC16_Pos                     24           /*!< Transmit to controller by line IDC flag interrupt INRDC16 */
#define ADCIM_MIDC17_Pos                     25           /*!< Transmit to controller by line IDC flag interrupt INRDC17 */
#define ADCIM_MIDC18_Pos                     26           /*!< Transmit to controller by line IDC flag interrupt INRDC18 */
#define ADCIM_MIDC19_Pos                     27           /*!< Transmit to controller by line IDC flag interrupt INRDC19 */
#define ADCIM_MIDC20_Pos                     28           /*!< Transmit to controller by line IDC flag interrupt INRDC20 */
#define ADCIM_MIDC21_Pos                     29           /*!< Transmit to controller by line IDC flag interrupt INRDC21 */
#define ADCIM_MIDC22_Pos                     30           /*!< Transmit to controller by line IDC flag interrupt INRDC22 */
#define ADCIM_MIDC23_Pos                     31           /*!< Transmit to controller by line IDC flag interrupt INRDC23 */

/* Bit field masks: */
#define ADCIM_MASK0_Msk                      0x00000001   /*!< Enable transmission interrupt line IS0 */
#define ADCIM_MASK1_Msk                      0x00000002   /*!< Enable transmission interrupt line IS1 */
#define ADCIM_MASK2_Msk                      0x00000004   /*!< Enable transmission interrupt line IS2 */
#define ADCIM_MASK3_Msk                      0x00000008   /*!< Enable transmission interrupt line IS3 */
#define ADCIM_MASK4_Msk                      0x00000010   /*!< Enable transmission interrupt line IS4 */
#define ADCIM_MASK5_Msk                      0x00000020   /*!< Enable transmission interrupt line IS5 */
#define ADCIM_MASK6_Msk                      0x00000040   /*!< Enable transmission interrupt line IS6 */
#define ADCIM_MASK7_Msk                      0x00000080   /*!< Enable transmission interrupt line IS7 */
#define ADCIM_MIDC0_Msk                      0x00000100   /*!< Transmit to controller by line IDC flag interrupt INRDC0 */
#define ADCIM_MIDC1_Msk                      0x00000200   /*!< Transmit to controller by line IDC flag interrupt INRDC1 */
#define ADCIM_MIDC2_Msk                      0x00000400   /*!< Transmit to controller by line IDC flag interrupt INRDC2 */
#define ADCIM_MIDC3_Msk                      0x00000800   /*!< Transmit to controller by line IDC flag interrupt INRDC3 */
#define ADCIM_MIDC4_Msk                      0x00001000   /*!< Transmit to controller by line IDC flag interrupt INRDC4 */
#define ADCIM_MIDC5_Msk                      0x00002000   /*!< Transmit to controller by line IDC flag interrupt INRDC5 */
#define ADCIM_MIDC6_Msk                      0x00004000   /*!< Transmit to controller by line IDC flag interrupt INRDC6 */
#define ADCIM_MIDC7_Msk                      0x00008000   /*!< Transmit to controller by line IDC flag interrupt INRDC7 */
#define ADCIM_MIDC8_Msk                      0x00010000   /*!< Transmit to controller by line IDC flag interrupt INRDC8 */
#define ADCIM_MIDC9_Msk                      0x00020000   /*!< Transmit to controller by line IDC flag interrupt INRDC9 */
#define ADCIM_MIDC10_Msk                     0x00040000   /*!< Transmit to controller by line IDC flag interrupt INRDC10 */
#define ADCIM_MIDC11_Msk                     0x00080000   /*!< Transmit to controller by line IDC flag interrupt INRDC11 */
#define ADCIM_MIDC12_Msk                     0x00100000   /*!< Transmit to controller by line IDC flag interrupt INRDC12 */
#define ADCIM_MIDC13_Msk                     0x00200000   /*!< Transmit to controller by line IDC flag interrupt INRDC13 */
#define ADCIM_MIDC14_Msk                     0x00400000   /*!< Transmit to controller by line IDC flag interrupt INRDC14 */
#define ADCIM_MIDC15_Msk                     0x00800000   /*!< Transmit to controller by line IDC flag interrupt INRDC15 */
#define ADCIM_MIDC16_Msk                     0x01000000   /*!< Transmit to controller by line IDC flag interrupt INRDC16 */
#define ADCIM_MIDC17_Msk                     0x02000000   /*!< Transmit to controller by line IDC flag interrupt INRDC17 */
#define ADCIM_MIDC18_Msk                     0x04000000   /*!< Transmit to controller by line IDC flag interrupt INRDC18 */
#define ADCIM_MIDC19_Msk                     0x08000000   /*!< Transmit to controller by line IDC flag interrupt INRDC19 */
#define ADCIM_MIDC20_Msk                     0x10000000   /*!< Transmit to controller by line IDC flag interrupt INRDC20 */
#define ADCIM_MIDC21_Msk                     0x20000000   /*!< Transmit to controller by line IDC flag interrupt INRDC21 */
#define ADCIM_MIDC22_Msk                     0x40000000   /*!< Transmit to controller by line IDC flag interrupt INRDC22 */
#define ADCIM_MIDC23_Msk                     0x80000000   /*!< Transmit to controller by line IDC flag interrupt INRDC23 */

/*-- ADCISC: Register reset interrupt ----------------------------------------*/

typedef struct {
    uint32_t IN0                               :1;          /*!< Status Indicator flag don`t reset interrupt INR0 */
    uint32_t IN1                               :1;          /*!< Status Indicator flag don`t reset interrupt INR1 */
    uint32_t IN2                               :1;          /*!< Status Indicator flag don`t reset interrupt INR2 */
    uint32_t IN3                               :1;          /*!< Status Indicator flag don`t reset interrupt INR3 */
    uint32_t IN4                               :1;          /*!< Status Indicator flag don`t reset interrupt INR4 */
    uint32_t IN5                               :1;          /*!< Status Indicator flag don`t reset interrupt INR5 */
    uint32_t IN6                               :1;          /*!< Status Indicator flag don`t reset interrupt INR6 */
    uint32_t IN7                               :1;          /*!< Status Indicator flag don`t reset interrupt INR7 */
    uint32_t DCIN0                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC0 */
    uint32_t DCIN1                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC1 */
    uint32_t DCIN2                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC2 */
    uint32_t DCIN3                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC3 */
    uint32_t DCIN4                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC4 */
    uint32_t DCIN5                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC5 */
    uint32_t DCIN6                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC6 */
    uint32_t DCIN7                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC7 */
    uint32_t DCIN8                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC8 */
    uint32_t DCIN9                             :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC9 */
    uint32_t DCIN10                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC10 */
    uint32_t DCIN11                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC11 */
    uint32_t DCIN12                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC12 */
    uint32_t DCIN13                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC13 */
    uint32_t DCIN14                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC14 */
    uint32_t DCIN15                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC15 */
    uint32_t DCIN16                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC16 */
    uint32_t DCIN17                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC17 */
    uint32_t DCIN18                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC18 */
    uint32_t DCIN19                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC19 */
    uint32_t DCIN20                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC20 */
    uint32_t DCIN21                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC21 */
    uint32_t DCIN22                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC22 */
    uint32_t DCIN23                            :1;          /*!< Status Indicator flag don`t reset interrupt on line INRDC23 */
} _ADCISC_bits;

/* Bit field positions: */
#define ADCISC_IN0_Pos                       0            /*!< Status Indicator flag don`t reset interrupt INR0 */
#define ADCISC_IN1_Pos                       1            /*!< Status Indicator flag don`t reset interrupt INR1 */
#define ADCISC_IN2_Pos                       2            /*!< Status Indicator flag don`t reset interrupt INR2 */
#define ADCISC_IN3_Pos                       3            /*!< Status Indicator flag don`t reset interrupt INR3 */
#define ADCISC_IN4_Pos                       4            /*!< Status Indicator flag don`t reset interrupt INR4 */
#define ADCISC_IN5_Pos                       5            /*!< Status Indicator flag don`t reset interrupt INR5 */
#define ADCISC_IN6_Pos                       6            /*!< Status Indicator flag don`t reset interrupt INR6 */
#define ADCISC_IN7_Pos                       7            /*!< Status Indicator flag don`t reset interrupt INR7 */
#define ADCISC_DCIN0_Pos                     8            /*!< Status Indicator flag don`t reset interrupt on line INRDC0 */
#define ADCISC_DCIN1_Pos                     9            /*!< Status Indicator flag don`t reset interrupt on line INRDC1 */
#define ADCISC_DCIN2_Pos                     10           /*!< Status Indicator flag don`t reset interrupt on line INRDC2 */
#define ADCISC_DCIN3_Pos                     11           /*!< Status Indicator flag don`t reset interrupt on line INRDC3 */
#define ADCISC_DCIN4_Pos                     12           /*!< Status Indicator flag don`t reset interrupt on line INRDC4 */
#define ADCISC_DCIN5_Pos                     13           /*!< Status Indicator flag don`t reset interrupt on line INRDC5 */
#define ADCISC_DCIN6_Pos                     14           /*!< Status Indicator flag don`t reset interrupt on line INRDC6 */
#define ADCISC_DCIN7_Pos                     15           /*!< Status Indicator flag don`t reset interrupt on line INRDC7 */
#define ADCISC_DCIN8_Pos                     16           /*!< Status Indicator flag don`t reset interrupt on line INRDC8 */
#define ADCISC_DCIN9_Pos                     17           /*!< Status Indicator flag don`t reset interrupt on line INRDC9 */
#define ADCISC_DCIN10_Pos                    18           /*!< Status Indicator flag don`t reset interrupt on line INRDC10 */
#define ADCISC_DCIN11_Pos                    19           /*!< Status Indicator flag don`t reset interrupt on line INRDC11 */
#define ADCISC_DCIN12_Pos                    20           /*!< Status Indicator flag don`t reset interrupt on line INRDC12 */
#define ADCISC_DCIN13_Pos                    21           /*!< Status Indicator flag don`t reset interrupt on line INRDC13 */
#define ADCISC_DCIN14_Pos                    22           /*!< Status Indicator flag don`t reset interrupt on line INRDC14 */
#define ADCISC_DCIN15_Pos                    23           /*!< Status Indicator flag don`t reset interrupt on line INRDC15 */
#define ADCISC_DCIN16_Pos                    24           /*!< Status Indicator flag don`t reset interrupt on line INRDC16 */
#define ADCISC_DCIN17_Pos                    25           /*!< Status Indicator flag don`t reset interrupt on line INRDC17 */
#define ADCISC_DCIN18_Pos                    26           /*!< Status Indicator flag don`t reset interrupt on line INRDC18 */
#define ADCISC_DCIN19_Pos                    27           /*!< Status Indicator flag don`t reset interrupt on line INRDC19 */
#define ADCISC_DCIN20_Pos                    28           /*!< Status Indicator flag don`t reset interrupt on line INRDC20 */
#define ADCISC_DCIN21_Pos                    29           /*!< Status Indicator flag don`t reset interrupt on line INRDC21 */
#define ADCISC_DCIN22_Pos                    30           /*!< Status Indicator flag don`t reset interrupt on line INRDC22 */
#define ADCISC_DCIN23_Pos                    31           /*!< Status Indicator flag don`t reset interrupt on line INRDC23 */

/* Bit field masks: */
#define ADCISC_IN0_Msk                       0x00000001   /*!< Status Indicator flag don`t reset interrupt INR0 */
#define ADCISC_IN1_Msk                       0x00000002   /*!< Status Indicator flag don`t reset interrupt INR1 */
#define ADCISC_IN2_Msk                       0x00000004   /*!< Status Indicator flag don`t reset interrupt INR2 */
#define ADCISC_IN3_Msk                       0x00000008   /*!< Status Indicator flag don`t reset interrupt INR3 */
#define ADCISC_IN4_Msk                       0x00000010   /*!< Status Indicator flag don`t reset interrupt INR4 */
#define ADCISC_IN5_Msk                       0x00000020   /*!< Status Indicator flag don`t reset interrupt INR5 */
#define ADCISC_IN6_Msk                       0x00000040   /*!< Status Indicator flag don`t reset interrupt INR6 */
#define ADCISC_IN7_Msk                       0x00000080   /*!< Status Indicator flag don`t reset interrupt INR7 */
#define ADCISC_DCIN0_Msk                     0x00000100   /*!< Status Indicator flag don`t reset interrupt on line INRDC0 */
#define ADCISC_DCIN1_Msk                     0x00000200   /*!< Status Indicator flag don`t reset interrupt on line INRDC1 */
#define ADCISC_DCIN2_Msk                     0x00000400   /*!< Status Indicator flag don`t reset interrupt on line INRDC2 */
#define ADCISC_DCIN3_Msk                     0x00000800   /*!< Status Indicator flag don`t reset interrupt on line INRDC3 */
#define ADCISC_DCIN4_Msk                     0x00001000   /*!< Status Indicator flag don`t reset interrupt on line INRDC4 */
#define ADCISC_DCIN5_Msk                     0x00002000   /*!< Status Indicator flag don`t reset interrupt on line INRDC5 */
#define ADCISC_DCIN6_Msk                     0x00004000   /*!< Status Indicator flag don`t reset interrupt on line INRDC6 */
#define ADCISC_DCIN7_Msk                     0x00008000   /*!< Status Indicator flag don`t reset interrupt on line INRDC7 */
#define ADCISC_DCIN8_Msk                     0x00010000   /*!< Status Indicator flag don`t reset interrupt on line INRDC8 */
#define ADCISC_DCIN9_Msk                     0x00020000   /*!< Status Indicator flag don`t reset interrupt on line INRDC9 */
#define ADCISC_DCIN10_Msk                    0x00040000   /*!< Status Indicator flag don`t reset interrupt on line INRDC10 */
#define ADCISC_DCIN11_Msk                    0x00080000   /*!< Status Indicator flag don`t reset interrupt on line INRDC11 */
#define ADCISC_DCIN12_Msk                    0x00100000   /*!< Status Indicator flag don`t reset interrupt on line INRDC12 */
#define ADCISC_DCIN13_Msk                    0x00200000   /*!< Status Indicator flag don`t reset interrupt on line INRDC13 */
#define ADCISC_DCIN14_Msk                    0x00400000   /*!< Status Indicator flag don`t reset interrupt on line INRDC14 */
#define ADCISC_DCIN15_Msk                    0x00800000   /*!< Status Indicator flag don`t reset interrupt on line INRDC15 */
#define ADCISC_DCIN16_Msk                    0x01000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC16 */
#define ADCISC_DCIN17_Msk                    0x02000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC17 */
#define ADCISC_DCIN18_Msk                    0x04000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC18 */
#define ADCISC_DCIN19_Msk                    0x08000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC19 */
#define ADCISC_DCIN20_Msk                    0x10000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC20 */
#define ADCISC_DCIN21_Msk                    0x20000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC21 */
#define ADCISC_DCIN22_Msk                    0x40000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC22 */
#define ADCISC_DCIN23_Msk                    0x80000000   /*!< Status Indicator flag don`t reset interrupt on line INRDC23 */

/*-- ADCOSTAT: Register flags FIFO overflow ----------------------------------*/

typedef struct {
    uint32_t OV0                               :1;          /*!< FIFO secvensor0 overflow */
    uint32_t OV1                               :1;          /*!< FIFO secvensor1 overflow */
    uint32_t OV2                               :1;          /*!< FIFO secvensor2 overflow */
    uint32_t OV3                               :1;          /*!< FIFO secvensor3 overflow */
    uint32_t OV4                               :1;          /*!< FIFO secvensor4 overflow */
    uint32_t OV5                               :1;          /*!< FIFO secvensor5 overflow */
    uint32_t OV6                               :1;          /*!< FIFO secvensor6 overflow */
    uint32_t OV7                               :1;          /*!< FIFO secvensor7 overflow */
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t DOV0                              :1;          /*!< Error DMA FIFFO0 */
    uint32_t DOV1                              :1;          /*!< Error DMA FIFFO1 */
    uint32_t DOV2                              :1;          /*!< Error DMA FIFFO2 */
    uint32_t DOV3                              :1;          /*!< Error DMA FIFFO3 */
    uint32_t DOV4                              :1;          /*!< Error DMA FIFFO4 */
    uint32_t DOV5                              :1;          /*!< Error DMA FIFFO5 */
    uint32_t DOV6                              :1;          /*!< Error DMA FIFFO6 */
    uint32_t DOV7                              :1;          /*!< Error DMA FIFFO7 */
    uint32_t Reserved1                         :8;          /*!< Reserved */
} _ADCOSTAT_bits;

/* Bit field positions: */
#define ADCOSTAT_OV0_Pos                     0            /*!< FIFO secvensor0 overflow */
#define ADCOSTAT_OV1_Pos                     1            /*!< FIFO secvensor1 overflow */
#define ADCOSTAT_OV2_Pos                     2            /*!< FIFO secvensor2 overflow */
#define ADCOSTAT_OV3_Pos                     3            /*!< FIFO secvensor3 overflow */
#define ADCOSTAT_OV4_Pos                     4            /*!< FIFO secvensor4 overflow */
#define ADCOSTAT_OV5_Pos                     5            /*!< FIFO secvensor5 overflow */
#define ADCOSTAT_OV6_Pos                     6            /*!< FIFO secvensor6 overflow */
#define ADCOSTAT_OV7_Pos                     7            /*!< FIFO secvensor7 overflow */
#define ADCOSTAT_DOV0_Pos                    16           /*!< Error DMA FIFFO0 */
#define ADCOSTAT_DOV1_Pos                    17           /*!< Error DMA FIFFO1 */
#define ADCOSTAT_DOV2_Pos                    18           /*!< Error DMA FIFFO2 */
#define ADCOSTAT_DOV3_Pos                    19           /*!< Error DMA FIFFO3 */
#define ADCOSTAT_DOV4_Pos                    20           /*!< Error DMA FIFFO4 */
#define ADCOSTAT_DOV5_Pos                    21           /*!< Error DMA FIFFO5 */
#define ADCOSTAT_DOV6_Pos                    22           /*!< Error DMA FIFFO6 */
#define ADCOSTAT_DOV7_Pos                    23           /*!< Error DMA FIFFO7 */

/* Bit field masks: */
#define ADCOSTAT_OV0_Msk                     0x00000001   /*!< FIFO secvensor0 overflow */
#define ADCOSTAT_OV1_Msk                     0x00000002   /*!< FIFO secvensor1 overflow */
#define ADCOSTAT_OV2_Msk                     0x00000004   /*!< FIFO secvensor2 overflow */
#define ADCOSTAT_OV3_Msk                     0x00000008   /*!< FIFO secvensor3 overflow */
#define ADCOSTAT_OV4_Msk                     0x00000010   /*!< FIFO secvensor4 overflow */
#define ADCOSTAT_OV5_Msk                     0x00000020   /*!< FIFO secvensor5 overflow */
#define ADCOSTAT_OV6_Msk                     0x00000040   /*!< FIFO secvensor6 overflow */
#define ADCOSTAT_OV7_Msk                     0x00000080   /*!< FIFO secvensor7 overflow */
#define ADCOSTAT_DOV0_Msk                    0x00010000   /*!< Error DMA FIFFO0 */
#define ADCOSTAT_DOV1_Msk                    0x00020000   /*!< Error DMA FIFFO1 */
#define ADCOSTAT_DOV2_Msk                    0x00040000   /*!< Error DMA FIFFO2 */
#define ADCOSTAT_DOV3_Msk                    0x00080000   /*!< Error DMA FIFFO3 */
#define ADCOSTAT_DOV4_Msk                    0x00100000   /*!< Error DMA FIFFO4 */
#define ADCOSTAT_DOV5_Msk                    0x00200000   /*!< Error DMA FIFFO5 */
#define ADCOSTAT_DOV6_Msk                    0x00400000   /*!< Error DMA FIFFO6 */
#define ADCOSTAT_DOV7_Msk                    0x00800000   /*!< Error DMA FIFFO7 */

/*-- ADCEMUX: Select register triggering events sequencer --------------------*/

typedef struct {
    uint32_t EM0                               :4;          /*!< select event for seqensor SS0 */
    uint32_t EM1                               :4;          /*!< select event for SS1 */
    uint32_t EM2                               :4;          /*!< select event for SS2 */
    uint32_t EM3                               :4;          /*!< select event for SS3 */
    uint32_t EM4                               :4;          /*!< select event for SS4 */
    uint32_t EM5                               :4;          /*!< select event for SS5 */
    uint32_t EM6                               :4;          /*!< select event for SS6 */
    uint32_t EM7                               :4;          /*!< select event for SS7 */
} _ADCEMUX_bits;

/* Bit field positions: */
#define ADCEMUX_EM0_Pos                      0            /*!< select event for seqensor SS0 */
#define ADCEMUX_EM1_Pos                      4            /*!< select event for SS1 */
#define ADCEMUX_EM2_Pos                      8            /*!< select event for SS2 */
#define ADCEMUX_EM3_Pos                      12           /*!< select event for SS3 */
#define ADCEMUX_EM4_Pos                      16           /*!< select event for SS4 */
#define ADCEMUX_EM5_Pos                      20           /*!< select event for SS5 */
#define ADCEMUX_EM6_Pos                      24           /*!< select event for SS6 */
#define ADCEMUX_EM7_Pos                      28           /*!< select event for SS7 */

/* Bit field masks: */
#define ADCEMUX_EM0_Msk                      0x0000000F   /*!< select event for seqensor SS0 */
#define ADCEMUX_EM1_Msk                      0x000000F0   /*!< select event for SS1 */
#define ADCEMUX_EM2_Msk                      0x00000F00   /*!< select event for SS2 */
#define ADCEMUX_EM3_Msk                      0x0000F000   /*!< select event for SS3 */
#define ADCEMUX_EM4_Msk                      0x000F0000   /*!< select event for SS4 */
#define ADCEMUX_EM5_Msk                      0x00F00000   /*!< select event for SS5 */
#define ADCEMUX_EM6_Msk                      0x0F000000   /*!< select event for SS6 */
#define ADCEMUX_EM7_Msk                      0xF0000000   /*!< select event for SS7 */

/*-- ADCUSTAT: Register FIFO empty -------------------------------------------*/

typedef struct {
    uint32_t UV0                               :1;          /*!< fifo0 underflow */
    uint32_t UV1                               :1;          /*!< fifo1 underflow */
    uint32_t UV2                               :1;          /*!< fifo2 underflow */
    uint32_t UV3                               :1;          /*!< fifo3 underflow */
    uint32_t UV4                               :1;          /*!< fifo4 underflow */
    uint32_t UV5                               :1;          /*!< fifo5 underflow */
    uint32_t UV6                               :1;          /*!< fifo6 underflow */
    uint32_t UV7                               :1;          /*!< fifo7 underflow */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _ADCUSTAT_bits;

/* Bit field positions: */
#define ADCUSTAT_UV0_Pos                     0            /*!< fifo0 underflow */
#define ADCUSTAT_UV1_Pos                     1            /*!< fifo1 underflow */
#define ADCUSTAT_UV2_Pos                     2            /*!< fifo2 underflow */
#define ADCUSTAT_UV3_Pos                     3            /*!< fifo3 underflow */
#define ADCUSTAT_UV4_Pos                     4            /*!< fifo4 underflow */
#define ADCUSTAT_UV5_Pos                     5            /*!< fifo5 underflow */
#define ADCUSTAT_UV6_Pos                     6            /*!< fifo6 underflow */
#define ADCUSTAT_UV7_Pos                     7            /*!< fifo7 underflow */

/* Bit field masks: */
#define ADCUSTAT_UV0_Msk                     0x00000001   /*!< fifo0 underflow */
#define ADCUSTAT_UV1_Msk                     0x00000002   /*!< fifo1 underflow */
#define ADCUSTAT_UV2_Msk                     0x00000004   /*!< fifo2 underflow */
#define ADCUSTAT_UV3_Msk                     0x00000008   /*!< fifo3 underflow */
#define ADCUSTAT_UV4_Msk                     0x00000010   /*!< fifo4 underflow */
#define ADCUSTAT_UV5_Msk                     0x00000020   /*!< fifo5 underflow */
#define ADCUSTAT_UV6_Msk                     0x00000040   /*!< fifo6 underflow */
#define ADCUSTAT_UV7_Msk                     0x00000080   /*!< fifo7 underflow */

/*-- ADCSPC0: Register delay start ADC0, ADC1 --------------------------------*/

typedef struct {
    uint32_t PHASE0                            :12;         /*!< Delay start ADC0 (Channel 0,1) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t PHASE1                            :12;         /*!< Delay start ADC1 (Channel 2,3) */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCSPC0_bits;

/* Bit field positions: */
#define ADCSPC0_PHASE0_Pos                   0            /*!< Delay start ADC0 (Channel 0,1) */
#define ADCSPC0_PHASE1_Pos                   16           /*!< Delay start ADC1 (Channel 2,3) */

/* Bit field masks: */
#define ADCSPC0_PHASE0_Msk                   0x00000FFF   /*!< Delay start ADC0 (Channel 0,1) */
#define ADCSPC0_PHASE1_Msk                   0x0FFF0000   /*!< Delay start ADC1 (Channel 2,3) */

/*-- ADCSPC1: Register delay start ADC2, ADC3 --------------------------------*/

typedef struct {
    uint32_t PHASE2                            :12;         /*!< Delay start ADC2 (Channel 4,5) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t PHASE3                            :12;         /*!< Delay start ADC3 (Channel 6,7) */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCSPC1_bits;

/* Bit field positions: */
#define ADCSPC1_PHASE2_Pos                   0            /*!< Delay start ADC2 (Channel 4,5) */
#define ADCSPC1_PHASE3_Pos                   16           /*!< Delay start ADC3 (Channel 6,7) */

/* Bit field masks: */
#define ADCSPC1_PHASE2_Msk                   0x00000FFF   /*!< Delay start ADC2 (Channel 4,5) */
#define ADCSPC1_PHASE3_Msk                   0x0FFF0000   /*!< Delay start ADC3 (Channel 6,7) */

/*-- ADCSPC2: Register delay start ADC4, ADC5 --------------------------------*/

typedef struct {
    uint32_t PHASE4                            :12;         /*!< Delay start ADC4(Channel 8,9) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t PHASE5                            :12;         /*!< Delay start ADC5 (Channel 10,11) */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCSPC2_bits;

/* Bit field positions: */
#define ADCSPC2_PHASE4_Pos                   0            /*!< Delay start ADC4(Channel 8,9) */
#define ADCSPC2_PHASE5_Pos                   16           /*!< Delay start ADC5 (Channel 10,11) */

/* Bit field masks: */
#define ADCSPC2_PHASE4_Msk                   0x00000FFF   /*!< Delay start ADC4(Channel 8,9) */
#define ADCSPC2_PHASE5_Msk                   0x0FFF0000   /*!< Delay start ADC5 (Channel 10,11) */

/*-- ADCSPC3: Register delay start ADC6, ADC7 --------------------------------*/

typedef struct {
    uint32_t PHASE6                            :12;         /*!< Delay start ADC6 (Channel 12,13) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t PHASE7                            :12;         /*!< Delay start ADC7 (Channel 14,15) */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCSPC3_bits;

/* Bit field positions: */
#define ADCSPC3_PHASE6_Pos                   0            /*!< Delay start ADC6 (Channel 12,13) */
#define ADCSPC3_PHASE7_Pos                   16           /*!< Delay start ADC7 (Channel 14,15) */

/* Bit field masks: */
#define ADCSPC3_PHASE6_Msk                   0x00000FFF   /*!< Delay start ADC6 (Channel 12,13) */
#define ADCSPC3_PHASE7_Msk                   0x0FFF0000   /*!< Delay start ADC7 (Channel 14,15) */

/*-- ADCSPC4: Register delay start ADC8, ADC9 --------------------------------*/

typedef struct {
    uint32_t PHASE8                            :12;         /*!< Delay start ADC8 (Channel 16,17) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t PHASE9                            :12;         /*!< Delay start ADC9 (Channel 18,19) */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCSPC4_bits;

/* Bit field positions: */
#define ADCSPC4_PHASE8_Pos                   0            /*!< Delay start ADC8 (Channel 16,17) */
#define ADCSPC4_PHASE9_Pos                   16           /*!< Delay start ADC9 (Channel 18,19) */

/* Bit field masks: */
#define ADCSPC4_PHASE8_Msk                   0x00000FFF   /*!< Delay start ADC8 (Channel 16,17) */
#define ADCSPC4_PHASE9_Msk                   0x0FFF0000   /*!< Delay start ADC9 (Channel 18,19) */

/*-- ADCSPC5: Register delay start ADC10, ADC11 ------------------------------*/

typedef struct {
    uint32_t PHASE10                           :12;         /*!< Delay start ADC10 (Channel 20,21) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t PHASE11                           :12;         /*!< Delay start ADC11 (Channel 22,23) */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCSPC5_bits;

/* Bit field positions: */
#define ADCSPC5_PHASE10_Pos                  0            /*!< Delay start ADC10 (Channel 20,21) */
#define ADCSPC5_PHASE11_Pos                  16           /*!< Delay start ADC11 (Channel 22,23) */

/* Bit field masks: */
#define ADCSPC5_PHASE10_Msk                  0x00000FFF   /*!< Delay start ADC10 (Channel 20,21) */
#define ADCSPC5_PHASE11_Msk                  0x0FFF0000   /*!< Delay start ADC11 (Channel 22,23) */

/*-- ADCSAC: Register averagel control ---------------------------------------*/

typedef struct {
    uint32_t AVG0                              :3;          /*!< Averaging value0 */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t AVG1                              :3;          /*!< Averaging value1 */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t AVG2                              :3;          /*!< Averaging value2 */
    uint32_t Reserved2                         :1;          /*!< Reserved */
    uint32_t AVG3                              :3;          /*!< Averaging value3 */
    uint32_t Reserved3                         :1;          /*!< Reserved */
    uint32_t AVG4                              :3;          /*!< Averaging value4 */
    uint32_t Reserved4                         :1;          /*!< Reserved */
    uint32_t AVG5                              :3;          /*!< Averaging value5 */
    uint32_t Reserved5                         :1;          /*!< Reserved */
    uint32_t AVG6                              :3;          /*!< Averaging value6 */
    uint32_t Reserved6                         :1;          /*!< Reserved */
    uint32_t AVG7                              :3;          /*!< Averaging value7 */
    uint32_t Reserved7                         :1;          /*!< Reserved */
} _ADCSAC_bits;

/* Bit field positions: */
#define ADCSAC_AVG0_Pos                      0            /*!< Averaging value0 */
#define ADCSAC_AVG1_Pos                      4            /*!< Averaging value1 */
#define ADCSAC_AVG2_Pos                      8            /*!< Averaging value2 */
#define ADCSAC_AVG3_Pos                      12           /*!< Averaging value3 */
#define ADCSAC_AVG4_Pos                      16           /*!< Averaging value4 */
#define ADCSAC_AVG5_Pos                      20           /*!< Averaging value5 */
#define ADCSAC_AVG6_Pos                      24           /*!< Averaging value6 */
#define ADCSAC_AVG7_Pos                      28           /*!< Averaging value7 */

/* Bit field masks: */
#define ADCSAC_AVG0_Msk                      0x00000007   /*!< Averaging value0 */
#define ADCSAC_AVG1_Msk                      0x00000070   /*!< Averaging value1 */
#define ADCSAC_AVG2_Msk                      0x00000700   /*!< Averaging value2 */
#define ADCSAC_AVG3_Msk                      0x00007000   /*!< Averaging value3 */
#define ADCSAC_AVG4_Msk                      0x00070000   /*!< Averaging value4 */
#define ADCSAC_AVG5_Msk                      0x00700000   /*!< Averaging value5 */
#define ADCSAC_AVG6_Msk                      0x07000000   /*!< Averaging value6 */
#define ADCSAC_AVG7_Msk                      0x70000000   /*!< Averaging value7 */

/*-- RICNT: Counter interrupt reset register ---------------------------------*/

typedef struct {
    uint32_t AVG8                              :3;          /*!< Averaging value8 */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t AVG9                              :3;          /*!< Averaging value9 */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t AVG10                             :3;          /*!< Averaging value10 */
    uint32_t Reserved2                         :1;          /*!< Reserved */
    uint32_t AVG11                             :3;          /*!< Averaging value11 */
    uint32_t Reserved3                         :1;          /*!< Reserved */
    uint32_t RICNT0                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT1                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT2                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT3                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT4                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT5                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT6                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t RICNT7                            :1;          /*!< Disable reset counter interrupt on start seqensor */
    uint32_t Reserved4                         :8;          /*!< Reserved */
} _RICNT_bits;

/* Bit field positions: */
#define RICNT_AVG8_Pos                       0            /*!< Averaging value8 */
#define RICNT_AVG9_Pos                       4            /*!< Averaging value9 */
#define RICNT_AVG10_Pos                      8            /*!< Averaging value10 */
#define RICNT_AVG11_Pos                      12           /*!< Averaging value11 */
#define RICNT_RICNT0_Pos                     16           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT1_Pos                     17           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT2_Pos                     18           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT3_Pos                     19           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT4_Pos                     20           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT5_Pos                     21           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT6_Pos                     22           /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT7_Pos                     23           /*!< Disable reset counter interrupt on start seqensor */

/* Bit field masks: */
#define RICNT_AVG8_Msk                       0x00000007   /*!< Averaging value8 */
#define RICNT_AVG9_Msk                       0x00000070   /*!< Averaging value9 */
#define RICNT_AVG10_Msk                      0x00000700   /*!< Averaging value10 */
#define RICNT_AVG11_Msk                      0x00007000   /*!< Averaging value11 */
#define RICNT_RICNT0_Msk                     0x00010000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT1_Msk                     0x00020000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT2_Msk                     0x00040000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT3_Msk                     0x00080000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT4_Msk                     0x00100000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT5_Msk                     0x00200000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT6_Msk                     0x00400000   /*!< Disable reset counter interrupt on start seqensor */
#define RICNT_RICNT7_Msk                     0x00800000   /*!< Disable reset counter interrupt on start seqensor */

/*-- ADCSSMUX: Select register triggering events sequencer -------------------*/

typedef struct {
    uint32_t CH0                               :1;          /*!< enable measure chn0 */
    uint32_t CH1                               :1;          /*!< enable measure chn1 */
    uint32_t CH2                               :1;          /*!< enable measure chn2 */
    uint32_t CH3                               :1;          /*!< enable measure chn3 */
    uint32_t CH4                               :1;          /*!< enable measure chn4 */
    uint32_t CH5                               :1;          /*!< enable measure chn5 */
    uint32_t CH6                               :1;          /*!< enable measure chn6 */
    uint32_t CH7                               :1;          /*!< enable measure chn7 */
    uint32_t CH8                               :1;          /*!< enable measure chn8 */
    uint32_t CH9                               :1;          /*!< enable measure chn9 */
    uint32_t CH10                              :1;          /*!< enable measure chn10 */
    uint32_t CH11                              :1;          /*!< enable measure chn11 */
    uint32_t CH12                              :1;          /*!< enable measure chn12 */
    uint32_t CH13                              :1;          /*!< enable measure chn13 */
    uint32_t CH14                              :1;          /*!< enable measure chn14 */
    uint32_t CH15                              :1;          /*!< enable measure chn15 */
    uint32_t CH16                              :1;          /*!< enable measure chn16 */
    uint32_t CH17                              :1;          /*!< enable measure chn17 */
    uint32_t CH18                              :1;          /*!< enable measure chn18 */
    uint32_t CH19                              :1;          /*!< enable measure chn19 */
    uint32_t CH20                              :1;          /*!< enable measure chn20 */
    uint32_t CH21                              :1;          /*!< enable measure chn21 */
    uint32_t CH22                              :1;          /*!< enable measure chn22 */
    uint32_t CH23                              :1;          /*!< enable measure chn23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _ADCSSMUX_bits;

/* Bit field positions: */
#define ADCSSMUX_CH0_Pos                     0            /*!< enable measure chn0 */
#define ADCSSMUX_CH1_Pos                     1            /*!< enable measure chn1 */
#define ADCSSMUX_CH2_Pos                     2            /*!< enable measure chn2 */
#define ADCSSMUX_CH3_Pos                     3            /*!< enable measure chn3 */
#define ADCSSMUX_CH4_Pos                     4            /*!< enable measure chn4 */
#define ADCSSMUX_CH5_Pos                     5            /*!< enable measure chn5 */
#define ADCSSMUX_CH6_Pos                     6            /*!< enable measure chn6 */
#define ADCSSMUX_CH7_Pos                     7            /*!< enable measure chn7 */
#define ADCSSMUX_CH8_Pos                     8            /*!< enable measure chn8 */
#define ADCSSMUX_CH9_Pos                     9            /*!< enable measure chn9 */
#define ADCSSMUX_CH10_Pos                    10           /*!< enable measure chn10 */
#define ADCSSMUX_CH11_Pos                    11           /*!< enable measure chn11 */
#define ADCSSMUX_CH12_Pos                    12           /*!< enable measure chn12 */
#define ADCSSMUX_CH13_Pos                    13           /*!< enable measure chn13 */
#define ADCSSMUX_CH14_Pos                    14           /*!< enable measure chn14 */
#define ADCSSMUX_CH15_Pos                    15           /*!< enable measure chn15 */
#define ADCSSMUX_CH16_Pos                    16           /*!< enable measure chn16 */
#define ADCSSMUX_CH17_Pos                    17           /*!< enable measure chn17 */
#define ADCSSMUX_CH18_Pos                    18           /*!< enable measure chn18 */
#define ADCSSMUX_CH19_Pos                    19           /*!< enable measure chn19 */
#define ADCSSMUX_CH20_Pos                    20           /*!< enable measure chn20 */
#define ADCSSMUX_CH21_Pos                    21           /*!< enable measure chn21 */
#define ADCSSMUX_CH22_Pos                    22           /*!< enable measure chn22 */
#define ADCSSMUX_CH23_Pos                    23           /*!< enable measure chn23 */

/* Bit field masks: */
#define ADCSSMUX_CH0_Msk                     0x00000001   /*!< enable measure chn0 */
#define ADCSSMUX_CH1_Msk                     0x00000002   /*!< enable measure chn1 */
#define ADCSSMUX_CH2_Msk                     0x00000004   /*!< enable measure chn2 */
#define ADCSSMUX_CH3_Msk                     0x00000008   /*!< enable measure chn3 */
#define ADCSSMUX_CH4_Msk                     0x00000010   /*!< enable measure chn4 */
#define ADCSSMUX_CH5_Msk                     0x00000020   /*!< enable measure chn5 */
#define ADCSSMUX_CH6_Msk                     0x00000040   /*!< enable measure chn6 */
#define ADCSSMUX_CH7_Msk                     0x00000080   /*!< enable measure chn7 */
#define ADCSSMUX_CH8_Msk                     0x00000100   /*!< enable measure chn8 */
#define ADCSSMUX_CH9_Msk                     0x00000200   /*!< enable measure chn9 */
#define ADCSSMUX_CH10_Msk                    0x00000400   /*!< enable measure chn10 */
#define ADCSSMUX_CH11_Msk                    0x00000800   /*!< enable measure chn11 */
#define ADCSSMUX_CH12_Msk                    0x00001000   /*!< enable measure chn12 */
#define ADCSSMUX_CH13_Msk                    0x00002000   /*!< enable measure chn13 */
#define ADCSSMUX_CH14_Msk                    0x00004000   /*!< enable measure chn14 */
#define ADCSSMUX_CH15_Msk                    0x00008000   /*!< enable measure chn15 */
#define ADCSSMUX_CH16_Msk                    0x00010000   /*!< enable measure chn16 */
#define ADCSSMUX_CH17_Msk                    0x00020000   /*!< enable measure chn17 */
#define ADCSSMUX_CH18_Msk                    0x00040000   /*!< enable measure chn18 */
#define ADCSSMUX_CH19_Msk                    0x00080000   /*!< enable measure chn19 */
#define ADCSSMUX_CH20_Msk                    0x00100000   /*!< enable measure chn20 */
#define ADCSSMUX_CH21_Msk                    0x00200000   /*!< enable measure chn21 */
#define ADCSSMUX_CH22_Msk                    0x00400000   /*!< enable measure chn22 */
#define ADCSSMUX_CH23_Msk                    0x00800000   /*!< enable measure chn23 */

/*-- ADCSSCTL: Register control ----------------------------------------------*/

typedef struct {
    uint32_t RCNT                              :8;          /*!< Number restart seqensor ADC */
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t ICNT                              :8;          /*!< Cyclical generation interrupt */
    uint32_t WMARK                             :3;          /*!< number meas., writing in FIFO */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t DMAEN                             :1;          /*!< Enable uses DMA */
    uint32_t Reserved2                         :3;          /*!< Reserved */
} _ADCSSCTL_bits;

/* Bit field positions: */
#define ADCSSCTL_RCNT_Pos                    0            /*!< Number restart seqensor ADC */
#define ADCSSCTL_ICNT_Pos                    16           /*!< Cyclical generation interrupt */
#define ADCSSCTL_WMARK_Pos                   24           /*!< number meas., writing in FIFO */
#define ADCSSCTL_DMAEN_Pos                   28           /*!< Enable uses DMA */

/* Bit field masks: */
#define ADCSSCTL_RCNT_Msk                    0x000000FF   /*!< Number restart seqensor ADC */
#define ADCSSCTL_ICNT_Msk                    0x00FF0000   /*!< Cyclical generation interrupt */
#define ADCSSCTL_WMARK_Msk                   0x07000000   /*!< number meas., writing in FIFO */
#define ADCSSCTL_DMAEN_Msk                   0x10000000   /*!< Enable uses DMA */

/*-- ADCSSFSTAT: Register flags FIFO overflow --------------------------------*/

typedef struct {
    uint32_t FLOAD                             :6;          /*!< Value of count FIFO sequencer */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _ADCSSFSTAT_bits;

/* Bit field positions: */
#define ADCSSFSTAT_FLOAD_Pos                 0            /*!< Value of count FIFO sequencer */

/* Bit field masks: */
#define ADCSSFSTAT_FLOAD_Msk                 0x0000003F   /*!< Value of count FIFO sequencer */

/*-- ADCSSOP: Register flags measurements ------------------------------------*/

typedef struct {
    uint32_t RCNT                              :8;          /*!< Number realize measuring by sequencer  */
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t ICNT                              :8;          /*!< Value interrupt count */
    uint32_t Reserved1                         :8;          /*!< Reserved */
} _ADCSSOP_bits;

/* Bit field positions: */
#define ADCSSOP_RCNT_Pos                     0            /*!< Number realize measuring by sequencer  */
#define ADCSSOP_ICNT_Pos                     16           /*!< Value interrupt count */

/* Bit field masks: */
#define ADCSSOP_RCNT_Msk                     0x000000FF   /*!< Number realize measuring by sequencer  */
#define ADCSSOP_ICNT_Msk                     0x00FF0000   /*!< Value interrupt count */

/*-- ADCSSDCP: Register selection of comparator ------------------------------*/

typedef struct {
    uint32_t CMP0                              :1;          /*!< enable cmp1 */
    uint32_t CMP1                              :1;          /*!< enable cmp1 */
    uint32_t CMP2                              :1;          /*!< enable cmp2 */
    uint32_t CMP3                              :1;          /*!< enable cmp3 */
    uint32_t CMP4                              :1;          /*!< enable cmp4 */
    uint32_t CMP5                              :1;          /*!< enable cmp5 */
    uint32_t CMP6                              :1;          /*!< enable cmp6 */
    uint32_t CMP7                              :1;          /*!< enable cmp7 */
    uint32_t CMP8                              :1;          /*!< enable cmp8 */
    uint32_t CMP9                              :1;          /*!< enable cmp9 */
    uint32_t CMP10                             :1;          /*!< enable cmp10 */
    uint32_t CMP11                             :1;          /*!< enable cmp11 */
    uint32_t CMP12                             :1;          /*!< enable cmp12 */
    uint32_t CMP13                             :1;          /*!< enable cmp13 */
    uint32_t CMP14                             :1;          /*!< enable cmp14 */
    uint32_t CMP15                             :1;          /*!< enable cmp15 */
    uint32_t CMP16                             :1;          /*!< enable cmp16 */
    uint32_t CMP17                             :1;          /*!< enable cmp17 */
    uint32_t CMP18                             :1;          /*!< enable cmp18 */
    uint32_t CMP19                             :1;          /*!< enable cmp19 */
    uint32_t CMP20                             :1;          /*!< enable cmp20 */
    uint32_t CMP21                             :1;          /*!< enable cmp21 */
    uint32_t CMP22                             :1;          /*!< enable cmp22 */
    uint32_t CMP23                             :1;          /*!< enable cmp23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _ADCSSDCP_bits;

/* Bit field positions: */
#define ADCSSDCP_CMP0_Pos                    0            /*!< enable cmp1 */
#define ADCSSDCP_CMP1_Pos                    1            /*!< enable cmp1 */
#define ADCSSDCP_CMP2_Pos                    2            /*!< enable cmp2 */
#define ADCSSDCP_CMP3_Pos                    3            /*!< enable cmp3 */
#define ADCSSDCP_CMP4_Pos                    4            /*!< enable cmp4 */
#define ADCSSDCP_CMP5_Pos                    5            /*!< enable cmp5 */
#define ADCSSDCP_CMP6_Pos                    6            /*!< enable cmp6 */
#define ADCSSDCP_CMP7_Pos                    7            /*!< enable cmp7 */
#define ADCSSDCP_CMP8_Pos                    8            /*!< enable cmp8 */
#define ADCSSDCP_CMP9_Pos                    9            /*!< enable cmp9 */
#define ADCSSDCP_CMP10_Pos                   10           /*!< enable cmp10 */
#define ADCSSDCP_CMP11_Pos                   11           /*!< enable cmp11 */
#define ADCSSDCP_CMP12_Pos                   12           /*!< enable cmp12 */
#define ADCSSDCP_CMP13_Pos                   13           /*!< enable cmp13 */
#define ADCSSDCP_CMP14_Pos                   14           /*!< enable cmp14 */
#define ADCSSDCP_CMP15_Pos                   15           /*!< enable cmp15 */
#define ADCSSDCP_CMP16_Pos                   16           /*!< enable cmp16 */
#define ADCSSDCP_CMP17_Pos                   17           /*!< enable cmp17 */
#define ADCSSDCP_CMP18_Pos                   18           /*!< enable cmp18 */
#define ADCSSDCP_CMP19_Pos                   19           /*!< enable cmp19 */
#define ADCSSDCP_CMP20_Pos                   20           /*!< enable cmp20 */
#define ADCSSDCP_CMP21_Pos                   21           /*!< enable cmp21 */
#define ADCSSDCP_CMP22_Pos                   22           /*!< enable cmp22 */
#define ADCSSDCP_CMP23_Pos                   23           /*!< enable cmp23 */

/* Bit field masks: */
#define ADCSSDCP_CMP0_Msk                    0x00000001   /*!< enable cmp1 */
#define ADCSSDCP_CMP1_Msk                    0x00000002   /*!< enable cmp1 */
#define ADCSSDCP_CMP2_Msk                    0x00000004   /*!< enable cmp2 */
#define ADCSSDCP_CMP3_Msk                    0x00000008   /*!< enable cmp3 */
#define ADCSSDCP_CMP4_Msk                    0x00000010   /*!< enable cmp4 */
#define ADCSSDCP_CMP5_Msk                    0x00000020   /*!< enable cmp5 */
#define ADCSSDCP_CMP6_Msk                    0x00000040   /*!< enable cmp6 */
#define ADCSSDCP_CMP7_Msk                    0x00000080   /*!< enable cmp7 */
#define ADCSSDCP_CMP8_Msk                    0x00000100   /*!< enable cmp8 */
#define ADCSSDCP_CMP9_Msk                    0x00000200   /*!< enable cmp9 */
#define ADCSSDCP_CMP10_Msk                   0x00000400   /*!< enable cmp10 */
#define ADCSSDCP_CMP11_Msk                   0x00000800   /*!< enable cmp11 */
#define ADCSSDCP_CMP12_Msk                   0x00001000   /*!< enable cmp12 */
#define ADCSSDCP_CMP13_Msk                   0x00002000   /*!< enable cmp13 */
#define ADCSSDCP_CMP14_Msk                   0x00004000   /*!< enable cmp14 */
#define ADCSSDCP_CMP15_Msk                   0x00008000   /*!< enable cmp15 */
#define ADCSSDCP_CMP16_Msk                   0x00010000   /*!< enable cmp16 */
#define ADCSSDCP_CMP17_Msk                   0x00020000   /*!< enable cmp17 */
#define ADCSSDCP_CMP18_Msk                   0x00040000   /*!< enable cmp18 */
#define ADCSSDCP_CMP19_Msk                   0x00080000   /*!< enable cmp19 */
#define ADCSSDCP_CMP20_Msk                   0x00100000   /*!< enable cmp20 */
#define ADCSSDCP_CMP21_Msk                   0x00200000   /*!< enable cmp21 */
#define ADCSSDCP_CMP22_Msk                   0x00400000   /*!< enable cmp22 */
#define ADCSSDCP_CMP23_Msk                   0x00800000   /*!< enable cmp23 */

/*-- ADCSSTMR: Register restart timer sequencer modules ADC ------------------*/

typedef struct {
    uint32_t TMR                               :24;         /*!< Maximum value of the timer counter restarts sequencer modules ADC */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _ADCSSTMR_bits;

/* Bit field positions: */
#define ADCSSTMR_TMR_Pos                     0            /*!< Maximum value of the timer counter restarts sequencer modules ADC */

/* Bit field masks: */
#define ADCSSTMR_TMR_Msk                     0x00FFFFFF   /*!< Maximum value of the timer counter restarts sequencer modules ADC */

/*-- FIFO: Register FIFO result of seqensor ----------------------------------*/

typedef struct {
    uint32_t DATA                              :16;         /*!< Value of AD conversion */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _FIFO_bits;

/* Bit field positions: */
#define FIFO_DATA_Pos                        0            /*!< Value of AD conversion */

/* Bit field masks: */
#define FIFO_DATA_Msk                        0x0000FFFF   /*!< Value of AD conversion */

/*-- ADCDCCTL: Register control comparator -----------------------------------*/

typedef struct {
    uint32_t CIM                               :2;          /*!< Generating mode interrupt measurement channel */
    uint32_t CIC                               :2;          /*!< Putting conditions on the measurement interrupt channel */
    uint32_t CIE                               :1;          /*!< Enable generating measurement interrupt channel */
    uint32_t Reserved0                         :3;          /*!< Reserved */
    uint32_t CTM                               :2;          /*!< Trigger mode on the measurement channel */
    uint32_t CTC                               :2;          /*!< Trigger conditions on the measurement channel */
    uint32_t CTE                               :1;          /*!< Start trigger */
    uint32_t Reserved1                         :3;          /*!< Reserved */
    uint32_t CHNL                              :5;          /*!< Channel select */
    uint32_t Reserved2                         :11;         /*!< Reserved */
} _ADCDCCTL_bits;

/* Bit field positions: */
#define ADCDCCTL_CIM_Pos                     0            /*!< Generating mode interrupt measurement channel */
#define ADCDCCTL_CIC_Pos                     2            /*!< Putting conditions on the measurement interrupt channel */
#define ADCDCCTL_CIE_Pos                     4            /*!< Enable generating measurement interrupt channel */
#define ADCDCCTL_CTM_Pos                     8            /*!< Trigger mode on the measurement channel */
#define ADCDCCTL_CTC_Pos                     10           /*!< Trigger conditions on the measurement channel */
#define ADCDCCTL_CTE_Pos                     12           /*!< Start trigger */
#define ADCDCCTL_CHNL_Pos                    16           /*!< Channel select */

/* Bit field masks: */
#define ADCDCCTL_CIM_Msk                     0x00000003   /*!< Generating mode interrupt measurement channel */
#define ADCDCCTL_CIC_Msk                     0x0000000C   /*!< Putting conditions on the measurement interrupt channel */
#define ADCDCCTL_CIE_Msk                     0x00000010   /*!< Enable generating measurement interrupt channel */
#define ADCDCCTL_CTM_Msk                     0x00000300   /*!< Trigger mode on the measurement channel */
#define ADCDCCTL_CTC_Msk                     0x00000C00   /*!< Trigger conditions on the measurement channel */
#define ADCDCCTL_CTE_Msk                     0x00001000   /*!< Start trigger */
#define ADCDCCTL_CHNL_Msk                    0x001F0000   /*!< Channel select */

/*-- ADCDCCMP: Register range comparator -------------------------------------*/

typedef struct {
    uint32_t COMP0                             :12;         /*!< lower range */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t COMP1                             :12;         /*!< upper range */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _ADCDCCMP_bits;

/* Bit field positions: */
#define ADCDCCMP_COMP0_Pos                   0            /*!< lower range */
#define ADCDCCMP_COMP1_Pos                   16           /*!< upper range */

/* Bit field masks: */
#define ADCDCCMP_COMP0_Msk                   0x00000FFF   /*!< lower range */
#define ADCDCCMP_COMP1_Msk                   0x0FFF0000   /*!< upper range */

/*-- ADCDCVAL: Register measurement comparator -------------------------------*/

typedef struct {
    uint32_t VAL                               :12;         /*!< Last measurement that was used in the comparison */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _ADCDCVAL_bits;

/* Bit field positions: */
#define ADCDCVAL_VAL_Pos                     0            /*!< Last measurement that was used in the comparison */

/* Bit field masks: */
#define ADCDCVAL_VAL_Msk                     0x00000FFF   /*!< Last measurement that was used in the comparison */

/*-- ADCDCRIC_L: Low register reset comparators ------------------------------*/

typedef struct {
    uint32_t DCINT0                            :1;          /*!< Reset interrupt comp0 */
    uint32_t DCINT1                            :1;          /*!< Reset interrupt comp1 */
    uint32_t DCINT2                            :1;          /*!< Reset interrupt comp2 */
    uint32_t DCINT3                            :1;          /*!< Reset interrupt comp3 */
    uint32_t DCINT4                            :1;          /*!< Reset interrupt comp4 */
    uint32_t DCINT5                            :1;          /*!< Reset interrupt comp5 */
    uint32_t DCINT6                            :1;          /*!< Reset interrupt comp6 */
    uint32_t DCINT7                            :1;          /*!< Reset interrupt comp7 */
    uint32_t DCINT8                            :1;          /*!< Reset interrupt comp8 */
    uint32_t DCINT9                            :1;          /*!< Reset interrupt comp9 */
    uint32_t DCINT10                           :1;          /*!< Reset interrupt comp10 */
    uint32_t DCINT11                           :1;          /*!< Reset interrupt comp11 */
    uint32_t DCINT12                           :1;          /*!< Reset interrupt comp12 */
    uint32_t DCINT13                           :1;          /*!< Reset interrupt comp13 */
    uint32_t DCINT14                           :1;          /*!< Reset interrupt comp14 */
    uint32_t DCINT15                           :1;          /*!< Reset interrupt comp15 */
    uint32_t DCINT16                           :1;          /*!< Reset interrupt comp16 */
    uint32_t DCINT17                           :1;          /*!< Reset interrupt comp17 */
    uint32_t DCINT18                           :1;          /*!< Reset interrupt comp18 */
    uint32_t DCINT19                           :1;          /*!< Reset interrupt comp19 */
    uint32_t DCINT20                           :1;          /*!< Reset interrupt comp20 */
    uint32_t DCINT21                           :1;          /*!< Reset interrupt comp21 */
    uint32_t DCINT22                           :1;          /*!< Reset interrupt comp22 */
    uint32_t DCINT23                           :1;          /*!< Reset interrupt comp23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _ADCDCRIC_L_bits;

/* Bit field positions: */
#define ADCDCRIC_L_DCINT0_Pos                0            /*!< Reset interrupt comp0 */
#define ADCDCRIC_L_DCINT1_Pos                1            /*!< Reset interrupt comp1 */
#define ADCDCRIC_L_DCINT2_Pos                2            /*!< Reset interrupt comp2 */
#define ADCDCRIC_L_DCINT3_Pos                3            /*!< Reset interrupt comp3 */
#define ADCDCRIC_L_DCINT4_Pos                4            /*!< Reset interrupt comp4 */
#define ADCDCRIC_L_DCINT5_Pos                5            /*!< Reset interrupt comp5 */
#define ADCDCRIC_L_DCINT6_Pos                6            /*!< Reset interrupt comp6 */
#define ADCDCRIC_L_DCINT7_Pos                7            /*!< Reset interrupt comp7 */
#define ADCDCRIC_L_DCINT8_Pos                8            /*!< Reset interrupt comp8 */
#define ADCDCRIC_L_DCINT9_Pos                9            /*!< Reset interrupt comp9 */
#define ADCDCRIC_L_DCINT10_Pos               10           /*!< Reset interrupt comp10 */
#define ADCDCRIC_L_DCINT11_Pos               11           /*!< Reset interrupt comp11 */
#define ADCDCRIC_L_DCINT12_Pos               12           /*!< Reset interrupt comp12 */
#define ADCDCRIC_L_DCINT13_Pos               13           /*!< Reset interrupt comp13 */
#define ADCDCRIC_L_DCINT14_Pos               14           /*!< Reset interrupt comp14 */
#define ADCDCRIC_L_DCINT15_Pos               15           /*!< Reset interrupt comp15 */
#define ADCDCRIC_L_DCINT16_Pos               16           /*!< Reset interrupt comp16 */
#define ADCDCRIC_L_DCINT17_Pos               17           /*!< Reset interrupt comp17 */
#define ADCDCRIC_L_DCINT18_Pos               18           /*!< Reset interrupt comp18 */
#define ADCDCRIC_L_DCINT19_Pos               19           /*!< Reset interrupt comp19 */
#define ADCDCRIC_L_DCINT20_Pos               20           /*!< Reset interrupt comp20 */
#define ADCDCRIC_L_DCINT21_Pos               21           /*!< Reset interrupt comp21 */
#define ADCDCRIC_L_DCINT22_Pos               22           /*!< Reset interrupt comp22 */
#define ADCDCRIC_L_DCINT23_Pos               23           /*!< Reset interrupt comp23 */

/* Bit field masks: */
#define ADCDCRIC_L_DCINT0_Msk                0x00000001   /*!< Reset interrupt comp0 */
#define ADCDCRIC_L_DCINT1_Msk                0x00000002   /*!< Reset interrupt comp1 */
#define ADCDCRIC_L_DCINT2_Msk                0x00000004   /*!< Reset interrupt comp2 */
#define ADCDCRIC_L_DCINT3_Msk                0x00000008   /*!< Reset interrupt comp3 */
#define ADCDCRIC_L_DCINT4_Msk                0x00000010   /*!< Reset interrupt comp4 */
#define ADCDCRIC_L_DCINT5_Msk                0x00000020   /*!< Reset interrupt comp5 */
#define ADCDCRIC_L_DCINT6_Msk                0x00000040   /*!< Reset interrupt comp6 */
#define ADCDCRIC_L_DCINT7_Msk                0x00000080   /*!< Reset interrupt comp7 */
#define ADCDCRIC_L_DCINT8_Msk                0x00000100   /*!< Reset interrupt comp8 */
#define ADCDCRIC_L_DCINT9_Msk                0x00000200   /*!< Reset interrupt comp9 */
#define ADCDCRIC_L_DCINT10_Msk               0x00000400   /*!< Reset interrupt comp10 */
#define ADCDCRIC_L_DCINT11_Msk               0x00000800   /*!< Reset interrupt comp11 */
#define ADCDCRIC_L_DCINT12_Msk               0x00001000   /*!< Reset interrupt comp12 */
#define ADCDCRIC_L_DCINT13_Msk               0x00002000   /*!< Reset interrupt comp13 */
#define ADCDCRIC_L_DCINT14_Msk               0x00004000   /*!< Reset interrupt comp14 */
#define ADCDCRIC_L_DCINT15_Msk               0x00008000   /*!< Reset interrupt comp15 */
#define ADCDCRIC_L_DCINT16_Msk               0x00010000   /*!< Reset interrupt comp16 */
#define ADCDCRIC_L_DCINT17_Msk               0x00020000   /*!< Reset interrupt comp17 */
#define ADCDCRIC_L_DCINT18_Msk               0x00040000   /*!< Reset interrupt comp18 */
#define ADCDCRIC_L_DCINT19_Msk               0x00080000   /*!< Reset interrupt comp19 */
#define ADCDCRIC_L_DCINT20_Msk               0x00100000   /*!< Reset interrupt comp20 */
#define ADCDCRIC_L_DCINT21_Msk               0x00200000   /*!< Reset interrupt comp21 */
#define ADCDCRIC_L_DCINT22_Msk               0x00400000   /*!< Reset interrupt comp22 */
#define ADCDCRIC_L_DCINT23_Msk               0x00800000   /*!< Reset interrupt comp23 */

/*-- ADCDCRIC_H: High register reset comparators -----------------------------*/

typedef struct {
    uint32_t DCTRIG0                           :1;          /*!< Reset trigger comp0 */
    uint32_t DCTRIG1                           :1;          /*!< Reset trigger comp1 */
    uint32_t DCTRIG2                           :1;          /*!< Reset trigger comp2 */
    uint32_t DCTRIG3                           :1;          /*!< Reset trigger comp3 */
    uint32_t DCTRIG4                           :1;          /*!< Reset trigger comp4 */
    uint32_t DCTRIG5                           :1;          /*!< Reset trigger comp5 */
    uint32_t DCTRIG6                           :1;          /*!< Reset trigger comp6 */
    uint32_t DCTRIG7                           :1;          /*!< Reset trigger comp7 */
    uint32_t DCTRIG8                           :1;          /*!< Reset trigger comp8 */
    uint32_t DCTRIG9                           :1;          /*!< Reset trigger comp9 */
    uint32_t DCTRIG10                          :1;          /*!< Reset trigger comp10 */
    uint32_t DCTRIG11                          :1;          /*!< Reset trigger comp11 */
    uint32_t DCTRIG12                          :1;          /*!< Reset trigger comp12 */
    uint32_t DCTRIG13                          :1;          /*!< Reset trigger comp13 */
    uint32_t DCTRIG14                          :1;          /*!< Reset trigger comp14 */
    uint32_t DCTRIG15                          :1;          /*!< Reset trigger comp15 */
    uint32_t DCTRIG16                          :1;          /*!< Reset trigger comp16 */
    uint32_t DCTRIG17                          :1;          /*!< Reset trigger comp17 */
    uint32_t DCTRIG18                          :1;          /*!< Reset trigger comp18 */
    uint32_t DCTRIG19                          :1;          /*!< Reset trigger comp19 */
    uint32_t DCTRIG20                          :1;          /*!< Reset trigger comp20 */
    uint32_t DCTRIG21                          :1;          /*!< Reset trigger comp21 */
    uint32_t DCTRIG22                          :1;          /*!< Reset trigger comp22 */
    uint32_t DCTRIG23                          :1;          /*!< Reset trigger comp23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _ADCDCRIC_H_bits;

/* Bit field positions: */
#define ADCDCRIC_H_DCTRIG0_Pos               0            /*!< Reset trigger comp0 */
#define ADCDCRIC_H_DCTRIG1_Pos               1            /*!< Reset trigger comp1 */
#define ADCDCRIC_H_DCTRIG2_Pos               2            /*!< Reset trigger comp2 */
#define ADCDCRIC_H_DCTRIG3_Pos               3            /*!< Reset trigger comp3 */
#define ADCDCRIC_H_DCTRIG4_Pos               4            /*!< Reset trigger comp4 */
#define ADCDCRIC_H_DCTRIG5_Pos               5            /*!< Reset trigger comp5 */
#define ADCDCRIC_H_DCTRIG6_Pos               6            /*!< Reset trigger comp6 */
#define ADCDCRIC_H_DCTRIG7_Pos               7            /*!< Reset trigger comp7 */
#define ADCDCRIC_H_DCTRIG8_Pos               8            /*!< Reset trigger comp8 */
#define ADCDCRIC_H_DCTRIG9_Pos               9            /*!< Reset trigger comp9 */
#define ADCDCRIC_H_DCTRIG10_Pos              10           /*!< Reset trigger comp10 */
#define ADCDCRIC_H_DCTRIG11_Pos              11           /*!< Reset trigger comp11 */
#define ADCDCRIC_H_DCTRIG12_Pos              12           /*!< Reset trigger comp12 */
#define ADCDCRIC_H_DCTRIG13_Pos              13           /*!< Reset trigger comp13 */
#define ADCDCRIC_H_DCTRIG14_Pos              14           /*!< Reset trigger comp14 */
#define ADCDCRIC_H_DCTRIG15_Pos              15           /*!< Reset trigger comp15 */
#define ADCDCRIC_H_DCTRIG16_Pos              16           /*!< Reset trigger comp16 */
#define ADCDCRIC_H_DCTRIG17_Pos              17           /*!< Reset trigger comp17 */
#define ADCDCRIC_H_DCTRIG18_Pos              18           /*!< Reset trigger comp18 */
#define ADCDCRIC_H_DCTRIG19_Pos              19           /*!< Reset trigger comp19 */
#define ADCDCRIC_H_DCTRIG20_Pos              20           /*!< Reset trigger comp20 */
#define ADCDCRIC_H_DCTRIG21_Pos              21           /*!< Reset trigger comp21 */
#define ADCDCRIC_H_DCTRIG22_Pos              22           /*!< Reset trigger comp22 */
#define ADCDCRIC_H_DCTRIG23_Pos              23           /*!< Reset trigger comp23 */

/* Bit field masks: */
#define ADCDCRIC_H_DCTRIG0_Msk               0x00000001   /*!< Reset trigger comp0 */
#define ADCDCRIC_H_DCTRIG1_Msk               0x00000002   /*!< Reset trigger comp1 */
#define ADCDCRIC_H_DCTRIG2_Msk               0x00000004   /*!< Reset trigger comp2 */
#define ADCDCRIC_H_DCTRIG3_Msk               0x00000008   /*!< Reset trigger comp3 */
#define ADCDCRIC_H_DCTRIG4_Msk               0x00000010   /*!< Reset trigger comp4 */
#define ADCDCRIC_H_DCTRIG5_Msk               0x00000020   /*!< Reset trigger comp5 */
#define ADCDCRIC_H_DCTRIG6_Msk               0x00000040   /*!< Reset trigger comp6 */
#define ADCDCRIC_H_DCTRIG7_Msk               0x00000080   /*!< Reset trigger comp7 */
#define ADCDCRIC_H_DCTRIG8_Msk               0x00000100   /*!< Reset trigger comp8 */
#define ADCDCRIC_H_DCTRIG9_Msk               0x00000200   /*!< Reset trigger comp9 */
#define ADCDCRIC_H_DCTRIG10_Msk              0x00000400   /*!< Reset trigger comp10 */
#define ADCDCRIC_H_DCTRIG11_Msk              0x00000800   /*!< Reset trigger comp11 */
#define ADCDCRIC_H_DCTRIG12_Msk              0x00001000   /*!< Reset trigger comp12 */
#define ADCDCRIC_H_DCTRIG13_Msk              0x00002000   /*!< Reset trigger comp13 */
#define ADCDCRIC_H_DCTRIG14_Msk              0x00004000   /*!< Reset trigger comp14 */
#define ADCDCRIC_H_DCTRIG15_Msk              0x00008000   /*!< Reset trigger comp15 */
#define ADCDCRIC_H_DCTRIG16_Msk              0x00010000   /*!< Reset trigger comp16 */
#define ADCDCRIC_H_DCTRIG17_Msk              0x00020000   /*!< Reset trigger comp17 */
#define ADCDCRIC_H_DCTRIG18_Msk              0x00040000   /*!< Reset trigger comp18 */
#define ADCDCRIC_H_DCTRIG19_Msk              0x00080000   /*!< Reset trigger comp19 */
#define ADCDCRIC_H_DCTRIG20_Msk              0x00100000   /*!< Reset trigger comp20 */
#define ADCDCRIC_H_DCTRIG21_Msk              0x00200000   /*!< Reset trigger comp21 */
#define ADCDCRIC_H_DCTRIG22_Msk              0x00400000   /*!< Reset trigger comp22 */
#define ADCDCRIC_H_DCTRIG23_Msk              0x00800000   /*!< Reset trigger comp23 */

/*-- ADCPP: Register ADC settings --------------------------------------------*/

typedef struct {
    uint32_t MSR                               :4;          /*!< Performance ADC (meas/sec) */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t TYPE                              :2;          /*!< Type of architecture ADC */
    uint32_t RSL                               :5;          /*!< Resolution of the ADC */
    uint32_t TS                                :1;          /*!< Available tempsensor in ADC */
    uint32_t OM                                :8;          /*!< Mode ADC */
    uint32_t CH                                :6;          /*!< Number of input channels ADC */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t ENA                               :1;          /*!< Enable ADC */
} _ADCPP_bits;

/* Bit field positions: */
#define ADCPP_MSR_Pos                        0            /*!< Performance ADC (meas/sec) */
#define ADCPP_TYPE_Pos                       8            /*!< Type of architecture ADC */
#define ADCPP_RSL_Pos                        10           /*!< Resolution of the ADC */
#define ADCPP_TS_Pos                         15           /*!< Available tempsensor in ADC */
#define ADCPP_OM_Pos                         16           /*!< Mode ADC */
#define ADCPP_CH_Pos                         24           /*!< Number of input channels ADC */
#define ADCPP_ENA_Pos                        31           /*!< Enable ADC */

/* Bit field masks: */
#define ADCPP_MSR_Msk                        0x0000000F   /*!< Performance ADC (meas/sec) */
#define ADCPP_TYPE_Msk                       0x00000300   /*!< Type of architecture ADC */
#define ADCPP_RSL_Msk                        0x00007C00   /*!< Resolution of the ADC */
#define ADCPP_TS_Msk                         0x00008000   /*!< Available tempsensor in ADC */
#define ADCPP_OM_Msk                         0x00FF0000   /*!< Mode ADC */
#define ADCPP_CH_Msk                         0x3F000000   /*!< Number of input channels ADC */
#define ADCPP_ENA_Msk                        0x80000000   /*!< Enable ADC */

/*-- ADCPSSI: Register synchronizing sequencers ------------------------------*/

typedef struct {
    uint32_t SS0                               :1;          /*!< Enable run sequencer0 */
    uint32_t SS1                               :1;          /*!< Enable run sequencer1 */
    uint32_t SS2                               :1;          /*!< Enable run sequencer2 */
    uint32_t SS3                               :1;          /*!< Enable run sequencer3 */
    uint32_t SS4                               :1;          /*!< Enable run sequencer4 */
    uint32_t SS5                               :1;          /*!< Enable run sequencer5 */
    uint32_t SS6                               :1;          /*!< Enable run sequencer6 */
    uint32_t SS7                               :1;          /*!< Enable run sequencer7 */
    uint32_t Reserved0                         :23;         /*!< Reserved */
    uint32_t GSYNC                             :1;          /*!< Enable run all secvensors */
} _ADCPSSI_bits;

/* Bit field positions: */
#define ADCPSSI_SS0_Pos                      0            /*!< Enable run sequencer0 */
#define ADCPSSI_SS1_Pos                      1            /*!< Enable run sequencer1 */
#define ADCPSSI_SS2_Pos                      2            /*!< Enable run sequencer2 */
#define ADCPSSI_SS3_Pos                      3            /*!< Enable run sequencer3 */
#define ADCPSSI_SS4_Pos                      4            /*!< Enable run sequencer4 */
#define ADCPSSI_SS5_Pos                      5            /*!< Enable run sequencer5 */
#define ADCPSSI_SS6_Pos                      6            /*!< Enable run sequencer6 */
#define ADCPSSI_SS7_Pos                      7            /*!< Enable run sequencer7 */
#define ADCPSSI_GSYNC_Pos                    31           /*!< Enable run all secvensors */

/* Bit field masks: */
#define ADCPSSI_SS0_Msk                      0x00000001   /*!< Enable run sequencer0 */
#define ADCPSSI_SS1_Msk                      0x00000002   /*!< Enable run sequencer1 */
#define ADCPSSI_SS2_Msk                      0x00000004   /*!< Enable run sequencer2 */
#define ADCPSSI_SS3_Msk                      0x00000008   /*!< Enable run sequencer3 */
#define ADCPSSI_SS4_Msk                      0x00000010   /*!< Enable run sequencer4 */
#define ADCPSSI_SS5_Msk                      0x00000020   /*!< Enable run sequencer5 */
#define ADCPSSI_SS6_Msk                      0x00000040   /*!< Enable run sequencer6 */
#define ADCPSSI_SS7_Msk                      0x00000080   /*!< Enable run sequencer7 */
#define ADCPSSI_GSYNC_Msk                    0x80000000   /*!< Enable run all secvensors */

/*-- Register map for ADC peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Select register triggering events sequencer */
        __IO uint32_t ADCSSMUX;                               /*!< ADCSSMUX    : type used for word access */
        __IO _ADCSSMUX_bits ADCSSMUX_bit;                     /*!< ADCSSMUX_bit: structure used for bit access */
    };
    union {                                                 /*!< Register control */
        __IO uint32_t ADCSSCTL;                               /*!< ADCSSCTL    : type used for word access */
        __IO _ADCSSCTL_bits ADCSSCTL_bit;                     /*!< ADCSSCTL_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Register flags FIFO overflow */
        __I  uint32_t ADCSSFSTAT;                             /*!< ADCSSFSTAT    : type used for word access */
        __I  _ADCSSFSTAT_bits ADCSSFSTAT_bit;                 /*!< ADCSSFSTAT_bit: structure used for bit access */
    };
    union {                                                 /*!< Register flags measurements */
        __IO uint32_t ADCSSOP;                                /*!< ADCSSOP    : type used for word access */
        __IO _ADCSSOP_bits ADCSSOP_bit;                       /*!< ADCSSOP_bit: structure used for bit access */
    };
    union {                                                 /*!< Register selection of comparator */
        __IO uint32_t ADCSSDCP;                               /*!< ADCSSDCP    : type used for word access */
        __IO _ADCSSDCP_bits ADCSSDCP_bit;                     /*!< ADCSSDCP_bit: structure used for bit access */
    };
    union {                                                 /*!< Register restart timer sequencer modules ADC */
        __IO uint32_t ADCSSTMR;                               /*!< ADCSSTMR    : type used for word access */
        __IO _ADCSSTMR_bits ADCSSTMR_bit;                     /*!< ADCSSTMR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register FIFO result of seqensor */
        __I  uint32_t FIFO;                                   /*!< FIFO    : type used for word access */
        __I  _FIFO_bits FIFO_bit;                             /*!< FIFO_bit: structure used for bit access */
    };
} NT_ADSSEQ_TypeDef;

typedef struct {
    union {                                                 /*!< Configuration secvensors register */
        __IO uint32_t ADCACTSS;                               /*!< ADCACTSS    : type used for word access */
        __IO _ADCACTSS_bits ADCACTSS_bit;                     /*!< ADCACTSS_bit: structure used for bit access */
    };
    union {                                                 /*!< Register unmasked interrupt */
        __I  uint32_t ADCRIS;                                 /*!< ADCRIS    : type used for word access */
        __I  _ADCRIS_bits ADCRIS_bit;                         /*!< ADCRIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Register mask interrupt */
        __IO uint32_t ADCIM;                                  /*!< ADCIM    : type used for word access */
        __IO _ADCIM_bits ADCIM_bit;                           /*!< ADCIM_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset interrupt */
        __IO uint32_t ADCISC;                                 /*!< ADCISC    : type used for word access */
        __IO _ADCISC_bits ADCISC_bit;                         /*!< ADCISC_bit: structure used for bit access */
    };
    union {                                                 /*!< Register flags FIFO overflow */
        __IO uint32_t ADCOSTAT;                               /*!< ADCOSTAT    : type used for word access */
        __IO _ADCOSTAT_bits ADCOSTAT_bit;                     /*!< ADCOSTAT_bit: structure used for bit access */
    };
    union {                                                 /*!< Select register triggering events sequencer */
        __IO uint32_t ADCEMUX;                                /*!< ADCEMUX    : type used for word access */
        __IO _ADCEMUX_bits ADCEMUX_bit;                       /*!< ADCEMUX_bit: structure used for bit access */
    };
    union {                                                 /*!< Register FIFO empty */
        __IO uint32_t ADCUSTAT;                               /*!< ADCUSTAT    : type used for word access */
        __IO _ADCUSTAT_bits ADCUSTAT_bit;                     /*!< ADCUSTAT_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Register delay start ADC0, ADC1 */
        __IO uint32_t ADCSPC0;                                /*!< ADCSPC0    : type used for word access */
        __IO _ADCSPC0_bits ADCSPC0_bit;                       /*!< ADCSPC0_bit: structure used for bit access */
    };
    union {                                                 /*!< Register delay start ADC2, ADC3 */
        __IO uint32_t ADCSPC1;                                /*!< ADCSPC1    : type used for word access */
        __IO _ADCSPC1_bits ADCSPC1_bit;                       /*!< ADCSPC1_bit: structure used for bit access */
    };
    union {                                                 /*!< Register delay start ADC4, ADC5 */
        __IO uint32_t ADCSPC2;                                /*!< ADCSPC2    : type used for word access */
        __IO _ADCSPC2_bits ADCSPC2_bit;                       /*!< ADCSPC2_bit: structure used for bit access */
    };
    union {                                                 /*!< Register delay start ADC6, ADC7 */
        __IO uint32_t ADCSPC3;                                /*!< ADCSPC3    : type used for word access */
        __IO _ADCSPC3_bits ADCSPC3_bit;                       /*!< ADCSPC3_bit: structure used for bit access */
    };
    union {                                                 /*!< Register delay start ADC8, ADC9 */
        __IO uint32_t ADCSPC4;                                /*!< ADCSPC4    : type used for word access */
        __IO _ADCSPC4_bits ADCSPC4_bit;                       /*!< ADCSPC4_bit: structure used for bit access */
    };
    union {                                                 /*!< Register delay start ADC10, ADC11 */
        __IO uint32_t ADCSPC5;                                /*!< ADCSPC5    : type used for word access */
        __IO _ADCSPC5_bits ADCSPC5_bit;                       /*!< ADCSPC5_bit: structure used for bit access */
    };
    union {                                                 /*!< Register averagel control */
        __IO uint32_t ADCSAC;                                 /*!< ADCSAC    : type used for word access */
        __IO _ADCSAC_bits ADCSAC_bit;                         /*!< ADCSAC_bit: structure used for bit access */
    };
    union {                                                 /*!< Counter interrupt reset register */
        __IO uint32_t RICNT;                                  /*!< RICNT    : type used for word access */
        __IO _RICNT_bits RICNT_bit;                           /*!< RICNT_bit: structure used for bit access */
    };
    NT_ADSSEQ_TypeDef ADSSEQ[8];
    union {                                                 /*!< Register control comparator */
        __IO uint32_t ADCDCCTL[24];                           /*!< ADCDCCTL    : type used for word access */
        __IO _ADCDCCTL_bits ADCDCCTL_bit[24];                 /*!< ADCDCCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Register range comparator */
        __IO uint32_t ADCDCCMP[24];                           /*!< ADCDCCMP    : type used for word access */
        __IO _ADCDCCMP_bits ADCDCCMP_bit[24];                 /*!< ADCDCCMP_bit: structure used for bit access */
    };
    union {                                                 /*!< Register measurement comparator */
        __I  uint32_t ADCDCVAL[24];                           /*!< ADCDCVAL    : type used for word access */
        __I  _ADCDCVAL_bits ADCDCVAL_bit[24];                 /*!< ADCDCVAL_bit: structure used for bit access */
    };
    uint32_t Reserved1[34];                                 /*!< Reserved */
    union {                                                 /*!< Low register reset comparators */
        __O  uint32_t ADCDCRIC_L;                             /*!< ADCDCRIC_L    : type used for word access */
        __O  _ADCDCRIC_L_bits ADCDCRIC_L_bit;                 /*!< ADCDCRIC_L_bit: structure used for bit access */
    };
    union {                                                 /*!< High register reset comparators */
        __O  uint32_t ADCDCRIC_H;                             /*!< ADCDCRIC_H    : type used for word access */
        __O  _ADCDCRIC_H_bits ADCDCRIC_H_bit;                 /*!< ADCDCRIC_H_bit: structure used for bit access */
    };
    uint32_t Reserved2[4];                                  /*!< Reserved */
    union {                                                 /*!< Register ADC settings */
        __IO uint32_t ADCPP[12];                              /*!< ADCPP    : type used for word access */
        __IO _ADCPP_bits ADCPP_bit[12];                       /*!< ADCPP_bit: structure used for bit access */
    };
    uint32_t Reserved3[50];                                 /*!< Reserved */
    union {                                                 /*!< Register synchronizing sequencers */
        __IO uint32_t ADCPSSI;                                /*!< ADCPSSI    : type used for word access */
        __IO _ADCPSSI_bits ADCPSSI_bit;                       /*!< ADCPSSI_bit: structure used for bit access */
    };
} NT_ADC_TypeDef;

/******************************************************************************/
/*                         GPIO controller regisres                           */
/******************************************************************************/

/*-- DATA: Data Input register -----------------------------------------------*/

typedef struct {
    uint32_t DATA                              :16;         /*!< Data on port */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _DATA_bits;

/* Bit field positions: */
#define DATA_DATA_Pos                        0            /*!< Data on port */

/* Bit field masks: */
#define DATA_DATA_Msk                        0x0000FFFF   /*!< Data on port */

/*-- DATAOUT: Data output register -------------------------------------------*/

typedef struct {
    uint32_t DATAOUT                           :16;         /*!< Data output */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _DATAOUT_bits;

/* Bit field positions: */
#define DATAOUT_DATAOUT_Pos                  0            /*!< Data output */

/* Bit field masks: */
#define DATAOUT_DATAOUT_Msk                  0x0000FFFF   /*!< Data output */

/*-- OUTENSET: Enable output for port register -------------------------------*/

typedef struct {
    uint32_t OUTENSET                          :16;         /*!< Enable output on pin of port */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _OUTENSET_bits;

/* Bit field positions: */
#define OUTENSET_OUTENSET_Pos                0            /*!< Enable output on pin of port */

/* Bit field masks: */
#define OUTENSET_OUTENSET_Msk                0x0000FFFF   /*!< Enable output on pin of port */

/*-- OUTENCLR: Enable output for port ----------------------------------------*/

typedef struct {
    uint32_t OUTENCLR                          :16;         /*!< Enable output pin in 3rd state */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _OUTENCLR_bits;

/* Bit field positions: */
#define OUTENCLR_OUTENCLR_Pos                0            /*!< Enable output pin in 3rd state */

/* Bit field masks: */
#define OUTENCLR_OUTENCLR_Msk                0x0000FFFF   /*!< Enable output pin in 3rd state */

/*-- ALTFUNCSET: Enable alternate function port register ---------------------*/

typedef struct {
    uint32_t ALTFUNCSET                        :16;         /*!< Enable alternate function mode */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _ALTFUNCSET_bits;

/* Bit field positions: */
#define ALTFUNCSET_ALTFUNCSET_Pos            0            /*!< Enable alternate function mode */

/* Bit field masks: */
#define ALTFUNCSET_ALTFUNCSET_Msk            0x0000FFFF   /*!< Enable alternate function mode */

/*-- ALTFUNCCLR: Disable alternate function port register --------------------*/

typedef struct {
    uint32_t ALTFUNCCLR                        :16;         /*!< Disable alternate function mode */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _ALTFUNCCLR_bits;

/* Bit field positions: */
#define ALTFUNCCLR_ALTFUNCCLR_Pos            0            /*!< Disable alternate function mode */

/* Bit field masks: */
#define ALTFUNCCLR_ALTFUNCCLR_Msk            0x0000FFFF   /*!< Disable alternate function mode */

/*-- INTENSET: Enable interrupt on Pin of PORT register ----------------------*/

typedef struct {
    uint32_t INTENSET                          :16;         /*!< Enable interrupt on Pin of PORT */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTENSET_bits;

/* Bit field positions: */
#define INTENSET_INTENSET_Pos                0            /*!< Enable interrupt on Pin of PORT */

/* Bit field masks: */
#define INTENSET_INTENSET_Msk                0x0000FFFF   /*!< Enable interrupt on Pin of PORT */

/*-- INTENCLR: Disable interrupt on Pin of PORT register ---------------------*/

typedef struct {
    uint32_t INTENCLR                          :16;         /*!< Disable interrupt on Pin of PORT */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTENCLR_bits;

/* Bit field positions: */
#define INTENCLR_INTENCLR_Pos                0            /*!< Disable interrupt on Pin of PORT */

/* Bit field masks: */
#define INTENCLR_INTENCLR_Msk                0x0000FFFF   /*!< Disable interrupt on Pin of PORT */

/*-- INTTYPESET: Setup type of interrupt register ----------------------------*/

typedef struct {
    uint32_t INTTYPESET                        :16;         /*!< Setup type of interrupt */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTTYPESET_bits;

/* Bit field positions: */
#define INTTYPESET_INTTYPESET_Pos            0            /*!< Setup type of interrupt */

/* Bit field masks: */
#define INTTYPESET_INTTYPESET_Msk            0x0000FFFF   /*!< Setup type of interrupt */

/*-- INTTYPECLR: Reset type of interrupt register ----------------------------*/

typedef struct {
    uint32_t INTTYPECLR                        :16;         /*!< Reset type of interrupt */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTTYPECLR_bits;

/* Bit field positions: */
#define INTTYPECLR_INTTYPECLR_Pos            0            /*!< Reset type of interrupt */

/* Bit field masks: */
#define INTTYPECLR_INTTYPECLR_Msk            0x0000FFFF   /*!< Reset type of interrupt */

/*-- INTPOLSET: Setup polarity interrupt register ----------------------------*/

typedef struct {
    uint32_t INTPOLSET                         :16;         /*!< Setup polarity interrupt */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTPOLSET_bits;

/* Bit field positions: */
#define INTPOLSET_INTPOLSET_Pos              0            /*!< Setup polarity interrupt */

/* Bit field masks: */
#define INTPOLSET_INTPOLSET_Msk              0x0000FFFF   /*!< Setup polarity interrupt */

/*-- INTPOLCLR: Reset polarity interrupt register ----------------------------*/

typedef struct {
    uint32_t INTPOLCLR                         :16;         /*!< Reset polarity interrupt */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTPOLCLR_bits;

/* Bit field positions: */
#define INTPOLCLR_INTPOLCLR_Pos              0            /*!< Reset polarity interrupt */

/* Bit field masks: */
#define INTPOLCLR_INTPOLCLR_Msk              0x0000FFFF   /*!< Reset polarity interrupt */

/*-- INTSTATUS: State interrupt register Register transfer ports A and B  output open collector */

typedef struct {
    uint32_t INTSTATUS                         :16;         /*!< State interrupt */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _INTSTATUS_bits;

/* Bit field positions: */
#define INTSTATUS_INTSTATUS_Pos              0            /*!< State interrupt */

/* Bit field masks: */
#define INTSTATUS_INTSTATUS_Msk              0x0000FFFF   /*!< State interrupt */

/*-- MASKLOWBYTE: Mask register low byte of port -----------------------------*/

typedef struct {
    uint32_t MASKLB                            :8;          /*!< Mask low byte */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _MASKLOWBYTE_bits;

/* Bit field positions: */
#define MASKLOWBYTE_MASKLB_Pos               0            /*!< Mask low byte */

/* Bit field masks: */
#define MASKLOWBYTE_MASKLB_Msk               0x000000FF   /*!< Mask low byte */

/*-- MASKHIGHBYTE: Mask register High byte of port ---------------------------*/

typedef struct {
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t MASKHB                            :8;          /*!< Mask high byte */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _MASKHIGHBYTE_bits;

/* Bit field positions: */
#define MASKHIGHBYTE_MASKHB_Pos              8            /*!< Mask high byte */

/* Bit field masks: */
#define MASKHIGHBYTE_MASKHB_Msk              0x0000FF00   /*!< Mask high byte */

/*-- Register map for GPIO peripheral ----------------------------------------*/

typedef struct {
    union {                                                 /*!< Data Input register */
        __IO uint32_t DATA;                                   /*!< DATA    : type used for word access */
        __IO _DATA_bits DATA_bit;                             /*!< DATA_bit: structure used for bit access */
    };
    union {                                                 /*!< Data output register */
        __IO uint32_t DATAOUT;                                /*!< DATAOUT    : type used for word access */
        __IO _DATAOUT_bits DATAOUT_bit;                       /*!< DATAOUT_bit: structure used for bit access */
    };
    uint32_t Reserved0[2];                                  /*!< Reserved */
    union {                                                 /*!< Enable output for port register */
        __IO uint32_t OUTENSET;                               /*!< OUTENSET    : type used for word access */
        __IO _OUTENSET_bits OUTENSET_bit;                     /*!< OUTENSET_bit: structure used for bit access */
    };
    union {                                                 /*!< Enable output for port */
        __IO uint32_t OUTENCLR;                               /*!< OUTENCLR    : type used for word access */
        __IO _OUTENCLR_bits OUTENCLR_bit;                     /*!< OUTENCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Enable alternate function port register */
        __IO uint32_t ALTFUNCSET;                             /*!< ALTFUNCSET    : type used for word access */
        __IO _ALTFUNCSET_bits ALTFUNCSET_bit;                 /*!< ALTFUNCSET_bit: structure used for bit access */
    };
    union {                                                 /*!< Disable alternate function port register */
        __IO uint32_t ALTFUNCCLR;                             /*!< ALTFUNCCLR    : type used for word access */
        __IO _ALTFUNCCLR_bits ALTFUNCCLR_bit;                 /*!< ALTFUNCCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Enable interrupt on Pin of PORT register */
        __IO uint32_t INTENSET;                               /*!< INTENSET    : type used for word access */
        __IO _INTENSET_bits INTENSET_bit;                     /*!< INTENSET_bit: structure used for bit access */
    };
    union {                                                 /*!< Disable interrupt on Pin of PORT register */
        __IO uint32_t INTENCLR;                               /*!< INTENCLR    : type used for word access */
        __IO _INTENCLR_bits INTENCLR_bit;                     /*!< INTENCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Setup type of interrupt register */
        __IO uint32_t INTTYPESET;                             /*!< INTTYPESET    : type used for word access */
        __IO _INTTYPESET_bits INTTYPESET_bit;                 /*!< INTTYPESET_bit: structure used for bit access */
    };
    union {                                                 /*!< Reset type of interrupt register */
        __IO uint32_t INTTYPECLR;                             /*!< INTTYPECLR    : type used for word access */
        __IO _INTTYPECLR_bits INTTYPECLR_bit;                 /*!< INTTYPECLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Setup polarity interrupt register */
        __IO uint32_t INTPOLSET;                              /*!< INTPOLSET    : type used for word access */
        __IO _INTPOLSET_bits INTPOLSET_bit;                   /*!< INTPOLSET_bit: structure used for bit access */
    };
    union {                                                 /*!< Reset polarity interrupt register */
        __IO uint32_t INTPOLCLR;                              /*!< INTPOLCLR    : type used for word access */
        __IO _INTPOLCLR_bits INTPOLCLR_bit;                   /*!< INTPOLCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< State interrupt register Register transfer ports A and B  output open collector */
        __IO uint32_t INTSTATUS;                              /*!< INTSTATUS    : type used for word access */
        __IO _INTSTATUS_bits INTSTATUS_bit;                   /*!< INTSTATUS_bit: structure used for bit access */
    };
    uint32_t Reserved1[241];                                /*!< Reserved */
    union {                                                 /*!< Mask register low byte of port */
        __IO uint32_t MASKLOWBYTE[256];                       /*!< MASKLOWBYTE    : type used for word access */
        __IO _MASKLOWBYTE_bits MASKLOWBYTE_bit[256];          /*!< MASKLOWBYTE_bit: structure used for bit access */
    };
    union {                                                 /*!< Mask register High byte of port */
        __IO uint32_t MASKHIGHBYTE[256];                      /*!< MASKHIGHBYTE    : type used for word access */
        __IO _MASKHIGHBYTE_bits MASKHIGHBYTE_bit[256];        /*!< MASKHIGHBYTE_bit: structure used for bit access */
    };
} NT_GPIO_TypeDef;

/******************************************************************************/
/*                          Common block registers                            */
/******************************************************************************/

/*-- GPIODEN0: Enable output PORT A,B register -------------------------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enabled output PORT A */
    uint32_t PORTB                             :16;         /*!< Enabled output PORT B */
} _GPIODEN0_bits;

/* Bit field positions: */
#define GPIODEN0_PORTA_Pos                   0            /*!< Enabled output PORT A */
#define GPIODEN0_PORTB_Pos                   16           /*!< Enabled output PORT B */

/* Bit field masks: */
#define GPIODEN0_PORTA_Msk                   0x0000FFFF   /*!< Enabled output PORT A */
#define GPIODEN0_PORTB_Msk                   0xFFFF0000   /*!< Enabled output PORT B */

/*-- GPIODEN1: Enable output PORT C,D register -------------------------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enabled output PORT C */
    uint32_t PORTD                             :16;         /*!< Enabled output PORT D */
} _GPIODEN1_bits;

/* Bit field positions: */
#define GPIODEN1_PORTC_Pos                   0            /*!< Enabled output PORT C */
#define GPIODEN1_PORTD_Pos                   16           /*!< Enabled output PORT D */

/* Bit field masks: */
#define GPIODEN1_PORTC_Msk                   0x0000FFFF   /*!< Enabled output PORT C */
#define GPIODEN1_PORTD_Msk                   0xFFFF0000   /*!< Enabled output PORT D */

/*-- GPIODEN2: Enable output PORT E,F register -------------------------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enabled output PORT E */
    uint32_t PORTF                             :16;         /*!< Enabled output PORT F */
} _GPIODEN2_bits;

/* Bit field positions: */
#define GPIODEN2_PORTE_Pos                   0            /*!< Enabled output PORT E */
#define GPIODEN2_PORTF_Pos                   16           /*!< Enabled output PORT F */

/* Bit field masks: */
#define GPIODEN2_PORTE_Msk                   0x0000FFFF   /*!< Enabled output PORT E */
#define GPIODEN2_PORTF_Msk                   0xFFFF0000   /*!< Enabled output PORT F */

/*-- GPIODEN3: Enable output PORT G,H register -------------------------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enabled output PORT G */
    uint32_t PORTH                             :16;         /*!< Enabled output PORT H */
} _GPIODEN3_bits;

/* Bit field positions: */
#define GPIODEN3_PORTG_Pos                   0            /*!< Enabled output PORT G */
#define GPIODEN3_PORTH_Pos                   16           /*!< Enabled output PORT H */

/* Bit field masks: */
#define GPIODEN3_PORTG_Msk                   0x0000FFFF   /*!< Enabled output PORT G */
#define GPIODEN3_PORTH_Msk                   0xFFFF0000   /*!< Enabled output PORT H */

/*-- GPIOPCTLA: Alternate function PORTA register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLA_bits;

/* Bit field positions: */
#define GPIOPCTLA_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLA_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLA_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLB: Alternate function PORTB register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLB_bits;

/* Bit field positions: */
#define GPIOPCTLB_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLB_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLB_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLC: Alternate function PORTC register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLC_bits;

/* Bit field positions: */
#define GPIOPCTLC_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLC_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLC_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLD: Alternate function PORTD register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLD_bits;

/* Bit field positions: */
#define GPIOPCTLD_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLD_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLD_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLE: Alternate function PORTE register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLE_bits;

/* Bit field positions: */
#define GPIOPCTLE_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLE_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLE_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLF: Alternate function PORTF register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLF_bits;

/* Bit field positions: */
#define GPIOPCTLF_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLF_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLF_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLG: Alternate function PORTG register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLG_bits;

/* Bit field positions: */
#define GPIOPCTLG_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLG_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLG_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOPCTLH: Alternate function PORTH register ----------------------------*/

typedef struct {
    uint32_t PIN0                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN1                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN2                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN3                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN4                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN5                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN6                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN7                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN8                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN9                              :2;          /*!< Select alternative function on PIN */
    uint32_t PIN10                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN11                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN12                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN13                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN14                             :2;          /*!< Select alternative function on PIN */
    uint32_t PIN15                             :2;          /*!< Select alternative function on PIN */
} _GPIOPCTLH_bits;

/* Bit field positions: */
#define GPIOPCTLH_PIN0_Pos                   0            /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN1_Pos                   2            /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN2_Pos                   4            /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN3_Pos                   6            /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN4_Pos                   8            /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN5_Pos                   10           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN6_Pos                   12           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN7_Pos                   14           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN8_Pos                   16           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN9_Pos                   18           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN10_Pos                  20           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN11_Pos                  22           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN12_Pos                  24           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN13_Pos                  26           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN14_Pos                  28           /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN15_Pos                  30           /*!< Select alternative function on PIN */

/* Bit field masks: */
#define GPIOPCTLH_PIN0_Msk                   0x00000003   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN1_Msk                   0x0000000C   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN2_Msk                   0x00000030   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN3_Msk                   0x000000C0   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN4_Msk                   0x00000300   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN5_Msk                   0x00000C00   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN6_Msk                   0x00003000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN7_Msk                   0x0000C000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN8_Msk                   0x00030000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN9_Msk                   0x000C0000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN10_Msk                  0x00300000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN11_Msk                  0x00C00000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN12_Msk                  0x03000000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN13_Msk                  0x0C000000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN14_Msk                  0x30000000   /*!< Select alternative function on PIN */
#define GPIOPCTLH_PIN15_Msk                  0xC0000000   /*!< Select alternative function on PIN */

/*-- GPIOODCTL0: Control register circuit 'Pull-up' ports A, B ---------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enable Pull-up of each PIN for Port A */
    uint32_t PORTB                             :16;         /*!< Enable Pull-up of each PIN for Port B */
} _GPIOODCTL0_bits;

/* Bit field positions: */
#define GPIOODCTL0_PORTA_Pos                 0            /*!< Enable Pull-up of each PIN for Port A */
#define GPIOODCTL0_PORTB_Pos                 16           /*!< Enable Pull-up of each PIN for Port B */

/* Bit field masks: */
#define GPIOODCTL0_PORTA_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port A */
#define GPIOODCTL0_PORTB_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port B */

/*-- GPIOODCTL1: Control register circuit 'Pull-up' ports C, D ---------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enable Pull-up of each PIN for Port C */
    uint32_t PORTD                             :16;         /*!< Enable Pull-up of each PIN for Port D */
} _GPIOODCTL1_bits;

/* Bit field positions: */
#define GPIOODCTL1_PORTC_Pos                 0            /*!< Enable Pull-up of each PIN for Port C */
#define GPIOODCTL1_PORTD_Pos                 16           /*!< Enable Pull-up of each PIN for Port D */

/* Bit field masks: */
#define GPIOODCTL1_PORTC_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port C */
#define GPIOODCTL1_PORTD_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port D */

/*-- GPIOODCTL2: Control register circuit 'Pull-up' ports E, F ---------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enable Pull-up of each PIN for Port E */
    uint32_t PORTF                             :16;         /*!< Enable Pull-up of each PIN for Port F */
} _GPIOODCTL2_bits;

/* Bit field positions: */
#define GPIOODCTL2_PORTE_Pos                 0            /*!< Enable Pull-up of each PIN for Port E */
#define GPIOODCTL2_PORTF_Pos                 16           /*!< Enable Pull-up of each PIN for Port F */

/* Bit field masks: */
#define GPIOODCTL2_PORTE_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port E */
#define GPIOODCTL2_PORTF_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port F */

/*-- GPIOODCTL3: Control register circuit 'Pull-up' ports G, H ---------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enable Pull-up of each PIN for Port G */
    uint32_t PORTH                             :16;         /*!< Enable Pull-up of each PIN for Port H */
} _GPIOODCTL3_bits;

/* Bit field positions: */
#define GPIOODCTL3_PORTG_Pos                 0            /*!< Enable Pull-up of each PIN for Port G */
#define GPIOODCTL3_PORTH_Pos                 16           /*!< Enable Pull-up of each PIN for Port H */

/* Bit field masks: */
#define GPIOODCTL3_PORTG_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port G */
#define GPIOODCTL3_PORTH_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port H */

/*-- GPIOODSCTL0: Control register output capability ports A,B ---------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port A */
    uint32_t PORTB                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port B */
} _GPIOODSCTL0_bits;

/* Bit field positions: */
#define GPIOODSCTL0_PORTA_Pos                0            /*!< Enable current of each PIN 16mA instead of 8mA for Port A */
#define GPIOODSCTL0_PORTB_Pos                16           /*!< Enable current of each PIN 16mA instead of 8mA for Port B */

/* Bit field masks: */
#define GPIOODSCTL0_PORTA_Msk                0x0000FFFF   /*!< Enable current of each PIN 16mA instead of 8mA for Port A */
#define GPIOODSCTL0_PORTB_Msk                0xFFFF0000   /*!< Enable current of each PIN 16mA instead of 8mA for Port B */

/*-- GPIOODSCTL1: Control register output capability ports C,D ---------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port C */
    uint32_t PORTD                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port D */
} _GPIOODSCTL1_bits;

/* Bit field positions: */
#define GPIOODSCTL1_PORTC_Pos                0            /*!< Enable current of each PIN 16mA instead of 8mA for Port C */
#define GPIOODSCTL1_PORTD_Pos                16           /*!< Enable current of each PIN 16mA instead of 8mA for Port D */

/* Bit field masks: */
#define GPIOODSCTL1_PORTC_Msk                0x0000FFFF   /*!< Enable current of each PIN 16mA instead of 8mA for Port C */
#define GPIOODSCTL1_PORTD_Msk                0xFFFF0000   /*!< Enable current of each PIN 16mA instead of 8mA for Port D */

/*-- GPIOODSCTL2: Control register output capability ports E,F ---------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port E */
    uint32_t PORTF                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port F */
} _GPIOODSCTL2_bits;

/* Bit field positions: */
#define GPIOODSCTL2_PORTE_Pos                0            /*!< Enable current of each PIN 16mA instead of 8mA for Port E */
#define GPIOODSCTL2_PORTF_Pos                16           /*!< Enable current of each PIN 16mA instead of 8mA for Port F */

/* Bit field masks: */
#define GPIOODSCTL2_PORTE_Msk                0x0000FFFF   /*!< Enable current of each PIN 16mA instead of 8mA for Port E */
#define GPIOODSCTL2_PORTF_Msk                0xFFFF0000   /*!< Enable current of each PIN 16mA instead of 8mA for Port F */

/*-- GPIOODSCTL3: Control register output capability ports G,H ---------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port G */
    uint32_t PORTH                             :16;         /*!< Enable current of each PIN 16mA instead of 8mA for Port H */
} _GPIOODSCTL3_bits;

/* Bit field positions: */
#define GPIOODSCTL3_PORTG_Pos                0            /*!< Enable current of each PIN 16mA instead of 8mA for Port G */
#define GPIOODSCTL3_PORTH_Pos                16           /*!< Enable current of each PIN 16mA instead of 8mA for Port H */

/* Bit field masks: */
#define GPIOODSCTL3_PORTG_Msk                0x0000FFFF   /*!< Enable current of each PIN 16mA instead of 8mA for Port G */
#define GPIOODSCTL3_PORTH_Msk                0xFFFF0000   /*!< Enable current of each PIN 16mA instead of 8mA for Port H */

/*-- GPIOPUCTL0: Control register circuit 'Pull-up' ports A, B ---------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enable Pull-up of each PIN for Port A */
    uint32_t PORTB                             :16;         /*!< Enable Pull-up of each PIN for Port B */
} _GPIOPUCTL0_bits;

/* Bit field positions: */
#define GPIOPUCTL0_PORTA_Pos                 0            /*!< Enable Pull-up of each PIN for Port A */
#define GPIOPUCTL0_PORTB_Pos                 16           /*!< Enable Pull-up of each PIN for Port B */

/* Bit field masks: */
#define GPIOPUCTL0_PORTA_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port A */
#define GPIOPUCTL0_PORTB_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port B */

/*-- GPIOPUCTL1: Control register circuit 'Pull-up' ports C, D ---------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enable Pull-up of each PIN for Port C */
    uint32_t PORTD                             :16;         /*!< Enable Pull-up of each PIN for Port D */
} _GPIOPUCTL1_bits;

/* Bit field positions: */
#define GPIOPUCTL1_PORTC_Pos                 0            /*!< Enable Pull-up of each PIN for Port C */
#define GPIOPUCTL1_PORTD_Pos                 16           /*!< Enable Pull-up of each PIN for Port D */

/* Bit field masks: */
#define GPIOPUCTL1_PORTC_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port C */
#define GPIOPUCTL1_PORTD_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port D */

/*-- GPIOPUCTL2: Control register circuit 'Pull-up' ports E, F ---------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enable Pull-up of each PIN for Port E */
    uint32_t PORTF                             :16;         /*!< Enable Pull-up of each PIN for Port F */
} _GPIOPUCTL2_bits;

/* Bit field positions: */
#define GPIOPUCTL2_PORTE_Pos                 0            /*!< Enable Pull-up of each PIN for Port E */
#define GPIOPUCTL2_PORTF_Pos                 16           /*!< Enable Pull-up of each PIN for Port F */

/* Bit field masks: */
#define GPIOPUCTL2_PORTE_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port E */
#define GPIOPUCTL2_PORTF_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port F */

/*-- GPIOPUCTL3: Control register circuit 'Pull-up' ports G, H ---------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enable Pull-up of each PIN for Port G */
    uint32_t PORTH                             :16;         /*!< Enable Pull-up of each PIN for Port H */
} _GPIOPUCTL3_bits;

/* Bit field positions: */
#define GPIOPUCTL3_PORTG_Pos                 0            /*!< Enable Pull-up of each PIN for Port G */
#define GPIOPUCTL3_PORTH_Pos                 16           /*!< Enable Pull-up of each PIN for Port H */

/* Bit field masks: */
#define GPIOPUCTL3_PORTG_Msk                 0x0000FFFF   /*!< Enable Pull-up of each PIN for Port G */
#define GPIOPUCTL3_PORTH_Msk                 0xFFFF0000   /*!< Enable Pull-up of each PIN for Port H */

/*-- PLL_CTRL: PLL control register settings ---------------------------------*/

typedef struct {
    uint32_t REFSEL                            :2;          /*!< Reference source PLL */
    uint32_t Reserved0                         :6;          /*!< Reserved */
    uint32_t PLL_DIV                           :8;          /*!< Devider clk PLL */
    uint32_t Reserved1                         :15;         /*!< Reserved */
    uint32_t PD                                :1;          /*!< Enable mode PowerDown */
} _PLL_CTRL_bits;

/* Bit field positions: */
#define PLL_CTRL_REFSEL_Pos                  0            /*!< Reference source PLL */
#define PLL_CTRL_PLL_DIV_Pos                 8            /*!< Devider clk PLL */
#define PLL_CTRL_PD_Pos                      31           /*!< Enable mode PowerDown */

/* Bit field masks: */
#define PLL_CTRL_REFSEL_Msk                  0x00000003   /*!< Reference source PLL */
#define PLL_CTRL_PLL_DIV_Msk                 0x0000FF00   /*!< Devider clk PLL */
#define PLL_CTRL_PD_Msk                      0x80000000   /*!< Enable mode PowerDown */

/*-- PLL_OD: Select output divider PLL ---------------------------------------*/

typedef struct {
    uint32_t PLL_OD                            :2;          /*!< Output divider */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _PLL_OD_bits;

/* Bit field positions: */
#define PLL_OD_PLL_OD_Pos                    0            /*!< Output divider */

/* Bit field masks: */
#define PLL_OD_PLL_OD_Msk                    0x00000003   /*!< Output divider */

/*-- PLL_NR: Setting the reference divider PLL -------------------------------*/

typedef struct {
    uint32_t R_PLL                             :5;          /*!< Value of the reference divider */
    uint32_t Reserved0                         :27;         /*!< Reserved */
} _PLL_NR_bits;

/* Bit field positions: */
#define PLL_NR_R_PLL_Pos                     0            /*!< Value of the reference divider */

/* Bit field masks: */
#define PLL_NR_R_PLL_Msk                     0x0000001F   /*!< Value of the reference divider */

/*-- PLL_NF: Setting the PLL feedback divider --------------------------------*/

typedef struct {
    uint32_t F_PLL                             :9;          /*!< Value of divider feedback */
    uint32_t Reserved0                         :23;         /*!< Reserved */
} _PLL_NF_bits;

/* Bit field positions: */
#define PLL_NF_F_PLL_Pos                     0            /*!< Value of divider feedback */

/* Bit field masks: */
#define PLL_NF_F_PLL_Msk                     0x000001FF   /*!< Value of divider feedback */

/*-- EXT_MEM_CFG: Setting up an external memory controller -------------------*/

typedef struct {
    uint32_t ReadWS                            :3;
    uint32_t WriteWS                           :3;
    uint32_t RWWS                              :3;
    uint32_t CE_MASK                           :9;          /*!< Pause betwin writing and reading on bus in tristate */
    uint32_t Reserved0                         :13;         /*!< Reserved */
    uint32_t BV                                :1;          /*!< Bit of Bus Width */
} _EXT_MEM_CFG_bits;

/* Bit field positions: */
#define EXT_MEM_CFG_ReadWS_Pos               0
#define EXT_MEM_CFG_WriteWS_Pos              3
#define EXT_MEM_CFG_RWWS_Pos                 6
#define EXT_MEM_CFG_CE_MASK_Pos              9            /*!< Pause betwin writing and reading on bus in tristate */
#define EXT_MEM_CFG_BV_Pos                   31           /*!< Bit of Bus Width */

/* Bit field masks: */
#define EXT_MEM_CFG_ReadWS_Msk               0x00000007
#define EXT_MEM_CFG_WriteWS_Msk              0x00000038
#define EXT_MEM_CFG_RWWS_Msk                 0x000001C0
#define EXT_MEM_CFG_CE_MASK_Msk              0x0003FE00   /*!< Pause betwin writing and reading on bus in tristate */
#define EXT_MEM_CFG_BV_Msk                   0x80000000   /*!< Bit of Bus Width */

/*-- ADC_CTRL1: ADC control register 1 ---------------------------------------*/

typedef struct {
    uint32_t CLKEN_ADC0                        :1;          /*!< Enable clk ADC0 */
    uint32_t DIVEN_ADC0                        :1;          /*!< Enable devider clk ADC0 */
    uint32_t DIV_ADC0                          :6;          /*!< Devider clk ADC0 */
    uint32_t CLKEN_ADC1                        :1;          /*!< Enable clk ADC1 */
    uint32_t DIVEN_ADC1                        :1;          /*!< Enable devider clk ADC1 */
    uint32_t DIV_ADC1                          :6;          /*!< Devider clk ADC1 */
    uint32_t CLKEN_ADC2                        :1;          /*!< Enable clk ADC2 */
    uint32_t DIVEN_ADC2                        :1;          /*!< Enable devider clk ADC2 */
    uint32_t DIV_ADC2                          :6;          /*!< Devider clk ADC2 */
    uint32_t CLKEN_ADC3                        :1;          /*!< Enable clk ADC3 */
    uint32_t DIVEN_ADC3                        :1;          /*!< Enable devider clk ADC3 */
    uint32_t DIV_ADC3                          :6;          /*!< Devider clk ADC3 */
} _ADC_CTRL1_bits;

/* Bit field positions: */
#define ADC_CTRL1_CLKEN_ADC0_Pos             0            /*!< Enable clk ADC0 */
#define ADC_CTRL1_DIVEN_ADC0_Pos             1            /*!< Enable devider clk ADC0 */
#define ADC_CTRL1_DIV_ADC0_Pos               2            /*!< Devider clk ADC0 */
#define ADC_CTRL1_CLKEN_ADC1_Pos             8            /*!< Enable clk ADC1 */
#define ADC_CTRL1_DIVEN_ADC1_Pos             9            /*!< Enable devider clk ADC1 */
#define ADC_CTRL1_DIV_ADC1_Pos               10           /*!< Devider clk ADC1 */
#define ADC_CTRL1_CLKEN_ADC2_Pos             16           /*!< Enable clk ADC2 */
#define ADC_CTRL1_DIVEN_ADC2_Pos             17           /*!< Enable devider clk ADC2 */
#define ADC_CTRL1_DIV_ADC2_Pos               18           /*!< Devider clk ADC2 */
#define ADC_CTRL1_CLKEN_ADC3_Pos             24           /*!< Enable clk ADC3 */
#define ADC_CTRL1_DIVEN_ADC3_Pos             25           /*!< Enable devider clk ADC3 */
#define ADC_CTRL1_DIV_ADC3_Pos               26           /*!< Devider clk ADC3 */

/* Bit field masks: */
#define ADC_CTRL1_CLKEN_ADC0_Msk             0x00000001   /*!< Enable clk ADC0 */
#define ADC_CTRL1_DIVEN_ADC0_Msk             0x00000002   /*!< Enable devider clk ADC0 */
#define ADC_CTRL1_DIV_ADC0_Msk               0x000000FC   /*!< Devider clk ADC0 */
#define ADC_CTRL1_CLKEN_ADC1_Msk             0x00000100   /*!< Enable clk ADC1 */
#define ADC_CTRL1_DIVEN_ADC1_Msk             0x00000200   /*!< Enable devider clk ADC1 */
#define ADC_CTRL1_DIV_ADC1_Msk               0x0000FC00   /*!< Devider clk ADC1 */
#define ADC_CTRL1_CLKEN_ADC2_Msk             0x00010000   /*!< Enable clk ADC2 */
#define ADC_CTRL1_DIVEN_ADC2_Msk             0x00020000   /*!< Enable devider clk ADC2 */
#define ADC_CTRL1_DIV_ADC2_Msk               0x00FC0000   /*!< Devider clk ADC2 */
#define ADC_CTRL1_CLKEN_ADC3_Msk             0x01000000   /*!< Enable clk ADC3 */
#define ADC_CTRL1_DIVEN_ADC3_Msk             0x02000000   /*!< Enable devider clk ADC3 */
#define ADC_CTRL1_DIV_ADC3_Msk               0xFC000000   /*!< Devider clk ADC3 */

/*-- ADC_CTRL2: ADC control register 2 ---------------------------------------*/

typedef struct {
    uint32_t CLKEN_ADC4                        :1;          /*!< Enable clk ADC4 */
    uint32_t DIVEN_ADC4                        :1;          /*!< Enable devider clk ADC4 */
    uint32_t DIV_ADC4                          :6;          /*!< Devider clk ADC4 */
    uint32_t CLKEN_ADC5                        :1;          /*!< Enable clk ADC5 */
    uint32_t DIVEN_ADC5                        :1;          /*!< Enable devider clk ADC5 */
    uint32_t DIV_ADC5                          :6;          /*!< Devider clk ADC5 */
    uint32_t CLKEN_ADC6                        :1;          /*!< Enable clk ADC6 */
    uint32_t DIVEN_ADC6                        :1;          /*!< Enable devider clk ADC6 */
    uint32_t DIV_ADC6                          :6;          /*!< Devider clk ADC6 */
    uint32_t CLKEN_ADC7                        :1;          /*!< Enable clk ADC7 */
    uint32_t DIVEN_ADC7                        :1;          /*!< Enable devider clk ADC7 */
    uint32_t DIV_ADC7                          :6;          /*!< Devider clk ADC7 */
} _ADC_CTRL2_bits;

/* Bit field positions: */
#define ADC_CTRL2_CLKEN_ADC4_Pos             0            /*!< Enable clk ADC4 */
#define ADC_CTRL2_DIVEN_ADC4_Pos             1            /*!< Enable devider clk ADC4 */
#define ADC_CTRL2_DIV_ADC4_Pos               2            /*!< Devider clk ADC4 */
#define ADC_CTRL2_CLKEN_ADC5_Pos             8            /*!< Enable clk ADC5 */
#define ADC_CTRL2_DIVEN_ADC5_Pos             9            /*!< Enable devider clk ADC5 */
#define ADC_CTRL2_DIV_ADC5_Pos               10           /*!< Devider clk ADC5 */
#define ADC_CTRL2_CLKEN_ADC6_Pos             16           /*!< Enable clk ADC6 */
#define ADC_CTRL2_DIVEN_ADC6_Pos             17           /*!< Enable devider clk ADC6 */
#define ADC_CTRL2_DIV_ADC6_Pos               18           /*!< Devider clk ADC6 */
#define ADC_CTRL2_CLKEN_ADC7_Pos             24           /*!< Enable clk ADC7 */
#define ADC_CTRL2_DIVEN_ADC7_Pos             25           /*!< Enable devider clk ADC7 */
#define ADC_CTRL2_DIV_ADC7_Pos               26           /*!< Devider clk ADC7 */

/* Bit field masks: */
#define ADC_CTRL2_CLKEN_ADC4_Msk             0x00000001   /*!< Enable clk ADC4 */
#define ADC_CTRL2_DIVEN_ADC4_Msk             0x00000002   /*!< Enable devider clk ADC4 */
#define ADC_CTRL2_DIV_ADC4_Msk               0x000000FC   /*!< Devider clk ADC4 */
#define ADC_CTRL2_CLKEN_ADC5_Msk             0x00000100   /*!< Enable clk ADC5 */
#define ADC_CTRL2_DIVEN_ADC5_Msk             0x00000200   /*!< Enable devider clk ADC5 */
#define ADC_CTRL2_DIV_ADC5_Msk               0x0000FC00   /*!< Devider clk ADC5 */
#define ADC_CTRL2_CLKEN_ADC6_Msk             0x00010000   /*!< Enable clk ADC6 */
#define ADC_CTRL2_DIVEN_ADC6_Msk             0x00020000   /*!< Enable devider clk ADC6 */
#define ADC_CTRL2_DIV_ADC6_Msk               0x00FC0000   /*!< Devider clk ADC6 */
#define ADC_CTRL2_CLKEN_ADC7_Msk             0x01000000   /*!< Enable clk ADC7 */
#define ADC_CTRL2_DIVEN_ADC7_Msk             0x02000000   /*!< Enable devider clk ADC7 */
#define ADC_CTRL2_DIV_ADC7_Msk               0xFC000000   /*!< Devider clk ADC7 */

/*-- PWM_SYNC: Syncronize register PWM blocks --------------------------------*/

typedef struct {
    uint32_t TBCLKSYNC                         :9;          /*!< Enable mode counter PWM0 */
    uint32_t Reserved0                         :23;         /*!< Reserved */
} _PWM_SYNC_bits;

/* Bit field positions: */
#define PWM_SYNC_TBCLKSYNC_Pos               0            /*!< Enable mode counter PWM0 */

/* Bit field masks: */
#define PWM_SYNC_TBCLKSYNC_Msk               0x000001FF   /*!< Enable mode counter PWM0 */

/*-- PWM_CTRL: Register control of synchronization blocks of PWM -------------*/

typedef struct {
    uint32_t SYNCSELECT                        :2;          /*!< Select synchronization of block PWM, 11 - synchronization from PWM1 */
    uint32_t CAPSYNCSEL                        :1;          /*!< Select synchronization of block PWM, 0 - synchronization from CAP3; 1 - synchronization from PWM0. */
    uint32_t SYNCREG                           :1;          /*!< Enable output pulse synchronization SYNCI on input of PWM0 */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _PWM_CTRL_bits;

/* Bit field positions: */
#define PWM_CTRL_SYNCSELECT_Pos              0            /*!< Select synchronization of block PWM, 11 - synchronization from PWM1 */
#define PWM_CTRL_CAPSYNCSEL_Pos              2            /*!< Select synchronization of block PWM, 0 - synchronization from CAP3; 1 - synchronization from PWM0. */
#define PWM_CTRL_SYNCREG_Pos                 3            /*!< Enable output pulse synchronization SYNCI on input of PWM0 */

/* Bit field masks: */
#define PWM_CTRL_SYNCSELECT_Msk              0x00000003   /*!< Select synchronization of block PWM, 11 - synchronization from PWM1 */
#define PWM_CTRL_CAPSYNCSEL_Msk              0x00000004   /*!< Select synchronization of block PWM, 0 - synchronization from CAP3; 1 - synchronization from PWM0. */
#define PWM_CTRL_SYNCREG_Msk                 0x00000008   /*!< Enable output pulse synchronization SYNCI on input of PWM0 */

/*-- SYS_CLK: Setting the system clock controller ----------------------------*/

typedef struct {
    uint32_t SEL_SRC                           :3;          /*!< Select source clk */
    uint32_t Reserved0                         :5;          /*!< Reserved */
    uint32_t CURR_SRC                          :3;          /*!< Indicate chanched source clk */
    uint32_t Reserved1                         :21;         /*!< Reserved */
} _SYS_CLK_bits;

/* Bit field positions: */
#define SYS_CLK_SEL_SRC_Pos                  0            /*!< Select source clk */
#define SYS_CLK_CURR_SRC_Pos                 8            /*!< Indicate chanched source clk */

/* Bit field masks: */
#define SYS_CLK_SEL_SRC_Msk                  0x00000007   /*!< Select source clk */
#define SYS_CLK_CURR_SRC_Msk                 0x00000700   /*!< Indicate chanched source clk */

/*-- APB_CLK: Setting the resolution peripheral clocks -----------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t QEPEN0                            :1;          /*!< Enable clocking QEP0 */
    uint32_t QEPEN1                            :1;          /*!< Enable clocking QEP1 */
    uint32_t Reserved1                         :6;          /*!< Reserved */
    uint32_t CMPEN                             :1;          /*!< Enable clocking analog comparator */
    uint32_t PWMEN0                            :1;          /*!< Enable clocking PWM0 */
    uint32_t PWMEN1                            :1;          /*!< Enable clocking PWM1 */
    uint32_t PWMEN2                            :1;          /*!< Enable clocking PWM2 */
    uint32_t PWMEN3                            :1;          /*!< Enable clocking PWM3 */
    uint32_t PWMEN4                            :1;          /*!< Enable clocking PWM4 */
    uint32_t PWMEN5                            :1;          /*!< Enable clocking PWM5 */
    uint32_t PWMEN6                            :1;          /*!< Enable clocking PWM6 */
    uint32_t PWMEN7                            :1;          /*!< Enable clocking PWM7 */
    uint32_t PWMEN8                            :1;          /*!< Enable clocking PWM8 */
    uint32_t WDEN                              :1;          /*!< Enable clocking WDT */
    uint32_t I2CEN0                            :1;          /*!< Enable clocking I2C0 */
    uint32_t I2CEN1                            :1;          /*!< Enable clocking I2C1 */
    uint32_t Reserved2                         :2;          /*!< Reserved */
    uint32_t ADCEN                             :1;          /*!< Enable clk ADC */
    uint32_t Reserved3                         :7;          /*!< Reserved */
} _APB_CLK_bits;

/* Bit field positions: */
#define APB_CLK_QEPEN0_Pos                   1            /*!< Enable clocking QEP0 */
#define APB_CLK_QEPEN1_Pos                   2            /*!< Enable clocking QEP1 */
#define APB_CLK_CMPEN_Pos                    9            /*!< Enable clocking analog comparator */
#define APB_CLK_PWMEN0_Pos                   10           /*!< Enable clocking PWM0 */
#define APB_CLK_PWMEN1_Pos                   11           /*!< Enable clocking PWM1 */
#define APB_CLK_PWMEN2_Pos                   12           /*!< Enable clocking PWM2 */
#define APB_CLK_PWMEN3_Pos                   13           /*!< Enable clocking PWM3 */
#define APB_CLK_PWMEN4_Pos                   14           /*!< Enable clocking PWM4 */
#define APB_CLK_PWMEN5_Pos                   15           /*!< Enable clocking PWM5 */
#define APB_CLK_PWMEN6_Pos                   16           /*!< Enable clocking PWM6 */
#define APB_CLK_PWMEN7_Pos                   17           /*!< Enable clocking PWM7 */
#define APB_CLK_PWMEN8_Pos                   18           /*!< Enable clocking PWM8 */
#define APB_CLK_WDEN_Pos                     19           /*!< Enable clocking WDT */
#define APB_CLK_I2CEN0_Pos                   20           /*!< Enable clocking I2C0 */
#define APB_CLK_I2CEN1_Pos                   21           /*!< Enable clocking I2C1 */
#define APB_CLK_ADCEN_Pos                    24           /*!< Enable clk ADC */

/* Bit field masks: */
#define APB_CLK_QEPEN0_Msk                   0x00000002   /*!< Enable clocking QEP0 */
#define APB_CLK_QEPEN1_Msk                   0x00000004   /*!< Enable clocking QEP1 */
#define APB_CLK_CMPEN_Msk                    0x00000200   /*!< Enable clocking analog comparator */
#define APB_CLK_PWMEN0_Msk                   0x00000400   /*!< Enable clocking PWM0 */
#define APB_CLK_PWMEN1_Msk                   0x00000800   /*!< Enable clocking PWM1 */
#define APB_CLK_PWMEN2_Msk                   0x00001000   /*!< Enable clocking PWM2 */
#define APB_CLK_PWMEN3_Msk                   0x00002000   /*!< Enable clocking PWM3 */
#define APB_CLK_PWMEN4_Msk                   0x00004000   /*!< Enable clocking PWM4 */
#define APB_CLK_PWMEN5_Msk                   0x00008000   /*!< Enable clocking PWM5 */
#define APB_CLK_PWMEN6_Msk                   0x00010000   /*!< Enable clocking PWM6 */
#define APB_CLK_PWMEN7_Msk                   0x00020000   /*!< Enable clocking PWM7 */
#define APB_CLK_PWMEN8_Msk                   0x00040000   /*!< Enable clocking PWM8 */
#define APB_CLK_WDEN_Msk                     0x00080000   /*!< Enable clocking WDT */
#define APB_CLK_I2CEN0_Msk                   0x00100000   /*!< Enable clocking I2C0 */
#define APB_CLK_I2CEN1_Msk                   0x00200000   /*!< Enable clocking I2C1 */
#define APB_CLK_ADCEN_Msk                    0x01000000   /*!< Enable clk ADC */

/*-- UART_CLK: Setting the clock UART blocks ---------------------------------*/

typedef struct {
    uint32_t CLKEN_UART0                       :1;          /*!< Enable clk UART0 */
    uint32_t DIVEN_UART0                       :1;          /*!< Enable devider clk UART0 */
    uint32_t DIV_UART0                         :6;          /*!< Devider clk UART0 */
    uint32_t CLKEN_UART1                       :1;          /*!< Enable clk UART1 */
    uint32_t DIVEN_UART1                       :1;          /*!< Enable devider clk UART1 */
    uint32_t DIV_UART1                         :6;          /*!< Devider clk UART1 */
    uint32_t CLKEN_UART2                       :1;          /*!< Enable clk UART2 */
    uint32_t DIVEN_UART2                       :1;          /*!< Enable devider clk UART2 */
    uint32_t DIV_UART2                         :6;          /*!< Devider clk UART2 */
    uint32_t CLKEN_UART3                       :1;          /*!< Enable clk UART3 */
    uint32_t DIVEN_UART3                       :1;          /*!< Enable devider clk UART3 */
    uint32_t DIV_UART3                         :6;          /*!< Devider clk UART3 */
} _UART_CLK_bits;

/* Bit field positions: */
#define UART_CLK_CLKEN_UART0_Pos             0            /*!< Enable clk UART0 */
#define UART_CLK_DIVEN_UART0_Pos             1            /*!< Enable devider clk UART0 */
#define UART_CLK_DIV_UART0_Pos               2            /*!< Devider clk UART0 */
#define UART_CLK_CLKEN_UART1_Pos             8            /*!< Enable clk UART1 */
#define UART_CLK_DIVEN_UART1_Pos             9            /*!< Enable devider clk UART1 */
#define UART_CLK_DIV_UART1_Pos               10           /*!< Devider clk UART1 */
#define UART_CLK_CLKEN_UART2_Pos             16           /*!< Enable clk UART2 */
#define UART_CLK_DIVEN_UART2_Pos             17           /*!< Enable devider clk UART2 */
#define UART_CLK_DIV_UART2_Pos               18           /*!< Devider clk UART2 */
#define UART_CLK_CLKEN_UART3_Pos             24           /*!< Enable clk UART3 */
#define UART_CLK_DIVEN_UART3_Pos             25           /*!< Enable devider clk UART3 */
#define UART_CLK_DIV_UART3_Pos               26           /*!< Devider clk UART3 */

/* Bit field masks: */
#define UART_CLK_CLKEN_UART0_Msk             0x00000001   /*!< Enable clk UART0 */
#define UART_CLK_DIVEN_UART0_Msk             0x00000002   /*!< Enable devider clk UART0 */
#define UART_CLK_DIV_UART0_Msk               0x000000FC   /*!< Devider clk UART0 */
#define UART_CLK_CLKEN_UART1_Msk             0x00000100   /*!< Enable clk UART1 */
#define UART_CLK_DIVEN_UART1_Msk             0x00000200   /*!< Enable devider clk UART1 */
#define UART_CLK_DIV_UART1_Msk               0x0000FC00   /*!< Devider clk UART1 */
#define UART_CLK_CLKEN_UART2_Msk             0x00010000   /*!< Enable clk UART2 */
#define UART_CLK_DIVEN_UART2_Msk             0x00020000   /*!< Enable devider clk UART2 */
#define UART_CLK_DIV_UART2_Msk               0x00FC0000   /*!< Devider clk UART2 */
#define UART_CLK_CLKEN_UART3_Msk             0x01000000   /*!< Enable clk UART3 */
#define UART_CLK_DIVEN_UART3_Msk             0x02000000   /*!< Enable devider clk UART3 */
#define UART_CLK_DIV_UART3_Msk               0xFC000000   /*!< Devider clk UART3 */

/*-- SPI_CLK: Setting the clock blocks SPI -----------------------------------*/

typedef struct {
    uint32_t CLKEN_SPI0                        :1;          /*!< Enable clk SPI0 */
    uint32_t DIVEN_SPI0                        :1;          /*!< Enable devider clk SPI0 */
    uint32_t DIV_SPI0                          :6;          /*!< Devider clk SPI0 */
    uint32_t CLKEN_SPI1                        :1;          /*!< Enable clk SPI1 */
    uint32_t DIVEN_SPI1                        :1;          /*!< Enable devider clk SPI1 */
    uint32_t DIV_SPI1                          :6;          /*!< Devider clk SPI1 */
    uint32_t CLKEN_SPI2                        :1;          /*!< Enable clk SPI2 */
    uint32_t DIVEN_SPI2                        :1;          /*!< Enable devider clk SPI2 */
    uint32_t DIV_SPI2                          :6;          /*!< Devider clk SPI2 */
    uint32_t CLKEN_SPI3                        :1;          /*!< Enable clk SPI3 */
    uint32_t DIVEN_SPI3                        :1;          /*!< Enable devider clk SPI3 */
    uint32_t DIV_SPI3                          :6;          /*!< Devider clk SPI3 */
} _SPI_CLK_bits;

/* Bit field positions: */
#define SPI_CLK_CLKEN_SPI0_Pos               0            /*!< Enable clk SPI0 */
#define SPI_CLK_DIVEN_SPI0_Pos               1            /*!< Enable devider clk SPI0 */
#define SPI_CLK_DIV_SPI0_Pos                 2            /*!< Devider clk SPI0 */
#define SPI_CLK_CLKEN_SPI1_Pos               8            /*!< Enable clk SPI1 */
#define SPI_CLK_DIVEN_SPI1_Pos               9            /*!< Enable devider clk SPI1 */
#define SPI_CLK_DIV_SPI1_Pos                 10           /*!< Devider clk SPI1 */
#define SPI_CLK_CLKEN_SPI2_Pos               16           /*!< Enable clk SPI2 */
#define SPI_CLK_DIVEN_SPI2_Pos               17           /*!< Enable devider clk SPI2 */
#define SPI_CLK_DIV_SPI2_Pos                 18           /*!< Devider clk SPI2 */
#define SPI_CLK_CLKEN_SPI3_Pos               24           /*!< Enable clk SPI3 */
#define SPI_CLK_DIVEN_SPI3_Pos               25           /*!< Enable devider clk SPI3 */
#define SPI_CLK_DIV_SPI3_Pos                 26           /*!< Devider clk SPI3 */

/* Bit field masks: */
#define SPI_CLK_CLKEN_SPI0_Msk               0x00000001   /*!< Enable clk SPI0 */
#define SPI_CLK_DIVEN_SPI0_Msk               0x00000002   /*!< Enable devider clk SPI0 */
#define SPI_CLK_DIV_SPI0_Msk                 0x000000FC   /*!< Devider clk SPI0 */
#define SPI_CLK_CLKEN_SPI1_Msk               0x00000100   /*!< Enable clk SPI1 */
#define SPI_CLK_DIVEN_SPI1_Msk               0x00000200   /*!< Enable devider clk SPI1 */
#define SPI_CLK_DIV_SPI1_Msk                 0x0000FC00   /*!< Devider clk SPI1 */
#define SPI_CLK_CLKEN_SPI2_Msk               0x00010000   /*!< Enable clk SPI2 */
#define SPI_CLK_DIVEN_SPI2_Msk               0x00020000   /*!< Enable devider clk SPI2 */
#define SPI_CLK_DIV_SPI2_Msk                 0x00FC0000   /*!< Devider clk SPI2 */
#define SPI_CLK_CLKEN_SPI3_Msk               0x01000000   /*!< Enable clk SPI3 */
#define SPI_CLK_DIVEN_SPI3_Msk               0x02000000   /*!< Enable devider clk SPI3 */
#define SPI_CLK_DIV_SPI3_Msk                 0xFC000000   /*!< Devider clk SPI3 */

/*-- PER_RST1: Register reset block periphery1 -------------------------------*/

typedef struct {
    uint32_t WDRST                             :1;          /*!< Reset WatchDog */
    uint32_t I2CRST0                           :1;          /*!< Reset I2C0 */
    uint32_t I2CRST1                           :1;          /*!< Reset I2C1 */
    uint32_t USBPHYRST                         :1;          /*!< Reset USB_PHY */
    uint32_t TIMERRST0                         :1;          /*!< Reset TIMER0 */
    uint32_t TIMERRST1                         :1;          /*!< Reset TIMER1 */
    uint32_t TIMERRST2                         :1;          /*!< Reset TIMER2 */
    uint32_t UARTRST0                          :1;          /*!< Reset UART0 */
    uint32_t UARTRST1                          :1;          /*!< Reset UART1 */
    uint32_t UARTRST2                          :1;          /*!< Reset UART2 */
    uint32_t UARTRST3                          :1;          /*!< Reset UART3 */
    uint32_t SPIRST0                           :1;          /*!< Reset SPI0 */
    uint32_t SPIRST1                           :1;          /*!< Reset SPI1 */
    uint32_t SPIRST2                           :1;          /*!< Reset SPI2 */
    uint32_t SPIRST3                           :1;          /*!< Reset SPI3 */
    uint32_t ETHRST                            :1;          /*!< Reset Ethernet */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _PER_RST1_bits;

/* Bit field positions: */
#define PER_RST1_WDRST_Pos                   0            /*!< Reset WatchDog */
#define PER_RST1_I2CRST0_Pos                 1            /*!< Reset I2C0 */
#define PER_RST1_I2CRST1_Pos                 2            /*!< Reset I2C1 */
#define PER_RST1_USBPHYRST_Pos               3            /*!< Reset USB_PHY */
#define PER_RST1_TIMERRST0_Pos               4            /*!< Reset TIMER0 */
#define PER_RST1_TIMERRST1_Pos               5            /*!< Reset TIMER1 */
#define PER_RST1_TIMERRST2_Pos               6            /*!< Reset TIMER2 */
#define PER_RST1_UARTRST0_Pos                7            /*!< Reset UART0 */
#define PER_RST1_UARTRST1_Pos                8            /*!< Reset UART1 */
#define PER_RST1_UARTRST2_Pos                9            /*!< Reset UART2 */
#define PER_RST1_UARTRST3_Pos                10           /*!< Reset UART3 */
#define PER_RST1_SPIRST0_Pos                 11           /*!< Reset SPI0 */
#define PER_RST1_SPIRST1_Pos                 12           /*!< Reset SPI1 */
#define PER_RST1_SPIRST2_Pos                 13           /*!< Reset SPI2 */
#define PER_RST1_SPIRST3_Pos                 14           /*!< Reset SPI3 */
#define PER_RST1_ETHRST_Pos                  15           /*!< Reset Ethernet */

/* Bit field masks: */
#define PER_RST1_WDRST_Msk                   0x00000001   /*!< Reset WatchDog */
#define PER_RST1_I2CRST0_Msk                 0x00000002   /*!< Reset I2C0 */
#define PER_RST1_I2CRST1_Msk                 0x00000004   /*!< Reset I2C1 */
#define PER_RST1_USBPHYRST_Msk               0x00000008   /*!< Reset USB_PHY */
#define PER_RST1_TIMERRST0_Msk               0x00000010   /*!< Reset TIMER0 */
#define PER_RST1_TIMERRST1_Msk               0x00000020   /*!< Reset TIMER1 */
#define PER_RST1_TIMERRST2_Msk               0x00000040   /*!< Reset TIMER2 */
#define PER_RST1_UARTRST0_Msk                0x00000080   /*!< Reset UART0 */
#define PER_RST1_UARTRST1_Msk                0x00000100   /*!< Reset UART1 */
#define PER_RST1_UARTRST2_Msk                0x00000200   /*!< Reset UART2 */
#define PER_RST1_UARTRST3_Msk                0x00000400   /*!< Reset UART3 */
#define PER_RST1_SPIRST0_Msk                 0x00000800   /*!< Reset SPI0 */
#define PER_RST1_SPIRST1_Msk                 0x00001000   /*!< Reset SPI1 */
#define PER_RST1_SPIRST2_Msk                 0x00002000   /*!< Reset SPI2 */
#define PER_RST1_SPIRST3_Msk                 0x00004000   /*!< Reset SPI3 */
#define PER_RST1_ETHRST_Msk                  0x00008000   /*!< Reset Ethernet */

/*-- PER_RST2: Register reset block periphery2 -------------------------------*/

typedef struct {
    uint32_t QEPRST0                           :1;          /*!< Reset QEPR0 */
    uint32_t QEPRST1                           :1;          /*!< Reset QEPR0 */
    uint32_t PWMRST0                           :1;          /*!< Reset module PWM0 */
    uint32_t PWMRST1                           :1;          /*!< Reset module PWM1 */
    uint32_t PWMRST2                           :1;          /*!< Reset module PWM2 */
    uint32_t PWMRST3                           :1;          /*!< Reset module PWM3 */
    uint32_t PWMRST4                           :1;          /*!< Reset module PWM4 */
    uint32_t PWMRST5                           :1;          /*!< Reset module PWM5 */
    uint32_t PWMRST6                           :1;          /*!< Reset module PWM6 */
    uint32_t PWMRST7                           :1;          /*!< Reset module PWM7 */
    uint32_t PWMRST8                           :1;          /*!< Reset module PWM8 */
    uint32_t CAPRST0                           :1;          /*!< Reset module CAP0 */
    uint32_t CAPRST1                           :1;          /*!< Reset module CAP1 */
    uint32_t CAPRST2                           :1;          /*!< Reset module CAP2 */
    uint32_t CAPRST3                           :1;          /*!< Reset module CAP3 */
    uint32_t CAPRST4                           :1;          /*!< Reset module CAP4 */
    uint32_t CAPRST5                           :1;          /*!< Reset module CAP5 */
    uint32_t ECMPRST                           :1;          /*!< Reset of analog comparator */
    uint32_t Reserved0                         :14;         /*!< Reserved */
} _PER_RST2_bits;

/* Bit field positions: */
#define PER_RST2_QEPRST0_Pos                 0            /*!< Reset QEPR0 */
#define PER_RST2_QEPRST1_Pos                 1            /*!< Reset QEPR0 */
#define PER_RST2_PWMRST0_Pos                 2            /*!< Reset module PWM0 */
#define PER_RST2_PWMRST1_Pos                 3            /*!< Reset module PWM1 */
#define PER_RST2_PWMRST2_Pos                 4            /*!< Reset module PWM2 */
#define PER_RST2_PWMRST3_Pos                 5            /*!< Reset module PWM3 */
#define PER_RST2_PWMRST4_Pos                 6            /*!< Reset module PWM4 */
#define PER_RST2_PWMRST5_Pos                 7            /*!< Reset module PWM5 */
#define PER_RST2_PWMRST6_Pos                 8            /*!< Reset module PWM6 */
#define PER_RST2_PWMRST7_Pos                 9            /*!< Reset module PWM7 */
#define PER_RST2_PWMRST8_Pos                 10           /*!< Reset module PWM8 */
#define PER_RST2_CAPRST0_Pos                 11           /*!< Reset module CAP0 */
#define PER_RST2_CAPRST1_Pos                 12           /*!< Reset module CAP1 */
#define PER_RST2_CAPRST2_Pos                 13           /*!< Reset module CAP2 */
#define PER_RST2_CAPRST3_Pos                 14           /*!< Reset module CAP3 */
#define PER_RST2_CAPRST4_Pos                 15           /*!< Reset module CAP4 */
#define PER_RST2_CAPRST5_Pos                 16           /*!< Reset module CAP5 */
#define PER_RST2_ECMPRST_Pos                 17           /*!< Reset of analog comparator */

/* Bit field masks: */
#define PER_RST2_QEPRST0_Msk                 0x00000001   /*!< Reset QEPR0 */
#define PER_RST2_QEPRST1_Msk                 0x00000002   /*!< Reset QEPR0 */
#define PER_RST2_PWMRST0_Msk                 0x00000004   /*!< Reset module PWM0 */
#define PER_RST2_PWMRST1_Msk                 0x00000008   /*!< Reset module PWM1 */
#define PER_RST2_PWMRST2_Msk                 0x00000010   /*!< Reset module PWM2 */
#define PER_RST2_PWMRST3_Msk                 0x00000020   /*!< Reset module PWM3 */
#define PER_RST2_PWMRST4_Msk                 0x00000040   /*!< Reset module PWM4 */
#define PER_RST2_PWMRST5_Msk                 0x00000080   /*!< Reset module PWM5 */
#define PER_RST2_PWMRST6_Msk                 0x00000100   /*!< Reset module PWM6 */
#define PER_RST2_PWMRST7_Msk                 0x00000200   /*!< Reset module PWM7 */
#define PER_RST2_PWMRST8_Msk                 0x00000400   /*!< Reset module PWM8 */
#define PER_RST2_CAPRST0_Msk                 0x00000800   /*!< Reset module CAP0 */
#define PER_RST2_CAPRST1_Msk                 0x00001000   /*!< Reset module CAP1 */
#define PER_RST2_CAPRST2_Msk                 0x00002000   /*!< Reset module CAP2 */
#define PER_RST2_CAPRST3_Msk                 0x00004000   /*!< Reset module CAP3 */
#define PER_RST2_CAPRST4_Msk                 0x00008000   /*!< Reset module CAP4 */
#define PER_RST2_CAPRST5_Msk                 0x00010000   /*!< Reset module CAP5 */
#define PER_RST2_ECMPRST_Msk                 0x00020000   /*!< Reset of analog comparator */

/*-- GPIOSE0: Control register resynchronization input ports A, B ------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enable resynchronization  of each input PIN for Port A */
    uint32_t PORTB                             :16;         /*!< Enable resynchronization  of each input PIN for Port B */
} _GPIOSE0_bits;

/* Bit field positions: */
#define GPIOSE0_PORTA_Pos                    0            /*!< Enable resynchronization  of each input PIN for Port A */
#define GPIOSE0_PORTB_Pos                    16           /*!< Enable resynchronization  of each input PIN for Port B */

/* Bit field masks: */
#define GPIOSE0_PORTA_Msk                    0x0000FFFF   /*!< Enable resynchronization  of each input PIN for Port A */
#define GPIOSE0_PORTB_Msk                    0xFFFF0000   /*!< Enable resynchronization  of each input PIN for Port B */

/*-- GPIOSE1: Control register resynchronization input ports C, D ------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enable resynchronization  of each input PIN for Port C */
    uint32_t PORTD                             :16;         /*!< Enable resynchronization  of each input PIN for Port D */
} _GPIOSE1_bits;

/* Bit field positions: */
#define GPIOSE1_PORTC_Pos                    0            /*!< Enable resynchronization  of each input PIN for Port C */
#define GPIOSE1_PORTD_Pos                    16           /*!< Enable resynchronization  of each input PIN for Port D */

/* Bit field masks: */
#define GPIOSE1_PORTC_Msk                    0x0000FFFF   /*!< Enable resynchronization  of each input PIN for Port C */
#define GPIOSE1_PORTD_Msk                    0xFFFF0000   /*!< Enable resynchronization  of each input PIN for Port D */

/*-- GPIOSE2: Control register resynchronization input ports E, F ------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enable resynchronization  of each input PIN for Port E */
    uint32_t PORTF                             :16;         /*!< Enable resynchronization  of each input PIN for Port F */
} _GPIOSE2_bits;

/* Bit field positions: */
#define GPIOSE2_PORTE_Pos                    0            /*!< Enable resynchronization  of each input PIN for Port E */
#define GPIOSE2_PORTF_Pos                    16           /*!< Enable resynchronization  of each input PIN for Port F */

/* Bit field masks: */
#define GPIOSE2_PORTE_Msk                    0x0000FFFF   /*!< Enable resynchronization  of each input PIN for Port E */
#define GPIOSE2_PORTF_Msk                    0xFFFF0000   /*!< Enable resynchronization  of each input PIN for Port F */

/*-- GPIOSE3: Control register resynchronization input ports G, H ------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enable resynchronization  of each input PIN for Port G */
    uint32_t PORTH                             :16;         /*!< Enable resynchronization  of each input PIN for Port H */
} _GPIOSE3_bits;

/* Bit field positions: */
#define GPIOSE3_PORTG_Pos                    0            /*!< Enable resynchronization  of each input PIN for Port G */
#define GPIOSE3_PORTH_Pos                    16           /*!< Enable resynchronization  of each input PIN for Port H */

/* Bit field masks: */
#define GPIOSE3_PORTG_Msk                    0x0000FFFF   /*!< Enable resynchronization  of each input PIN for Port G */
#define GPIOSE3_PORTH_Msk                    0xFFFF0000   /*!< Enable resynchronization  of each input PIN for Port H */

/*-- GPIOQE0: Register filter settings input ports A, B ----------------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enable filter  of each input PIN for Port A */
    uint32_t PORTB                             :16;         /*!< Enable filter  of each input PIN for Port B */
} _GPIOQE0_bits;

/* Bit field positions: */
#define GPIOQE0_PORTA_Pos                    0            /*!< Enable filter  of each input PIN for Port A */
#define GPIOQE0_PORTB_Pos                    16           /*!< Enable filter  of each input PIN for Port B */

/* Bit field masks: */
#define GPIOQE0_PORTA_Msk                    0x0000FFFF   /*!< Enable filter  of each input PIN for Port A */
#define GPIOQE0_PORTB_Msk                    0xFFFF0000   /*!< Enable filter  of each input PIN for Port B */

/*-- GPIOQE1: Register filter settings input ports C, D ----------------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enable filter  of each input PIN for Port C */
    uint32_t PORTD                             :16;         /*!< Enable filter  of each input PIN for Port D */
} _GPIOQE1_bits;

/* Bit field positions: */
#define GPIOQE1_PORTC_Pos                    0            /*!< Enable filter  of each input PIN for Port C */
#define GPIOQE1_PORTD_Pos                    16           /*!< Enable filter  of each input PIN for Port D */

/* Bit field masks: */
#define GPIOQE1_PORTC_Msk                    0x0000FFFF   /*!< Enable filter  of each input PIN for Port C */
#define GPIOQE1_PORTD_Msk                    0xFFFF0000   /*!< Enable filter  of each input PIN for Port D */

/*-- GPIOQE2: Register filter settings input ports E, F ----------------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enable filter  of each input PIN for Port E */
    uint32_t PORTF                             :16;         /*!< Enable filter  of each input PIN for Port F */
} _GPIOQE2_bits;

/* Bit field positions: */
#define GPIOQE2_PORTE_Pos                    0            /*!< Enable filter  of each input PIN for Port E */
#define GPIOQE2_PORTF_Pos                    16           /*!< Enable filter  of each input PIN for Port F */

/* Bit field masks: */
#define GPIOQE2_PORTE_Msk                    0x0000FFFF   /*!< Enable filter  of each input PIN for Port E */
#define GPIOQE2_PORTF_Msk                    0xFFFF0000   /*!< Enable filter  of each input PIN for Port F */

/*-- GPIOQE3: Register filter settings input ports G, H ----------------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enable filter  of each input PIN for Port G */
    uint32_t PORTH                             :16;         /*!< Enable filter  of each input PIN for Port H */
} _GPIOQE3_bits;

/* Bit field positions: */
#define GPIOQE3_PORTG_Pos                    0            /*!< Enable filter  of each input PIN for Port G */
#define GPIOQE3_PORTH_Pos                    16           /*!< Enable filter  of each input PIN for Port H */

/* Bit field masks: */
#define GPIOQE3_PORTG_Msk                    0x0000FFFF   /*!< Enable filter  of each input PIN for Port G */
#define GPIOQE3_PORTH_Msk                    0xFFFF0000   /*!< Enable filter  of each input PIN for Port H */

/*-- GPIOQM0: Register filter settings input ports A, B ----------------------*/

typedef struct {
    uint32_t PORTA                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port B */
    uint32_t PORTB                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port A */
} _GPIOQM0_bits;

/* Bit field positions: */
#define GPIOQM0_PORTA_Pos                    0            /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port B */
#define GPIOQM0_PORTB_Pos                    16           /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port A */

/* Bit field masks: */
#define GPIOQM0_PORTA_Msk                    0x0000FFFF   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port B */
#define GPIOQM0_PORTB_Msk                    0xFFFF0000   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port A */

/*-- GPIOQM1: Register filter settings input ports C, D ----------------------*/

typedef struct {
    uint32_t PORTC                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port C */
    uint32_t PORTD                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port D */
} _GPIOQM1_bits;

/* Bit field positions: */
#define GPIOQM1_PORTC_Pos                    0            /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port C */
#define GPIOQM1_PORTD_Pos                    16           /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port D */

/* Bit field masks: */
#define GPIOQM1_PORTC_Msk                    0x0000FFFF   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port C */
#define GPIOQM1_PORTD_Msk                    0xFFFF0000   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port D */

/*-- GPIOQM2: Register filter settings input ports E, F ----------------------*/

typedef struct {
    uint32_t PORTE                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port E */
    uint32_t PORTF                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port F */
} _GPIOQM2_bits;

/* Bit field positions: */
#define GPIOQM2_PORTE_Pos                    0            /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port E */
#define GPIOQM2_PORTF_Pos                    16           /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port F */

/* Bit field masks: */
#define GPIOQM2_PORTE_Msk                    0x0000FFFF   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port E */
#define GPIOQM2_PORTF_Msk                    0xFFFF0000   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port F */

/*-- GPIOQM3: Register filter settings input ports G, H ----------------------*/

typedef struct {
    uint32_t PORTG                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port G */
    uint32_t PORTH                             :16;         /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port H */
} _GPIOQM3_bits;

/* Bit field positions: */
#define GPIOQM3_PORTG_Pos                    0            /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port G */
#define GPIOQM3_PORTH_Pos                    16           /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port H */

/* Bit field masks: */
#define GPIOQM3_PORTG_Msk                    0x0000FFFF   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port G */
#define GPIOQM3_PORTH_Msk                    0xFFFF0000   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port H */

/*-- GPIOQPAD: Register filter settings input ports A, B, C, D ---------------*/

typedef struct {
    uint32_t SPRDA                             :8;
    uint32_t SPRDB                             :8;          /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port B */
    uint32_t SPRDC                             :8;
    uint32_t SPRDD                             :8;          /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port A */
} _GPIOQPAD_bits;

/* Bit field positions: */
#define GPIOQPAD_SPRDA_Pos                   0
#define GPIOQPAD_SPRDB_Pos                   8            /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port B */
#define GPIOQPAD_SPRDC_Pos                   16
#define GPIOQPAD_SPRDD_Pos                   24           /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port A */

/* Bit field masks: */
#define GPIOQPAD_SPRDA_Msk                   0x000000FF
#define GPIOQPAD_SPRDB_Msk                   0x0000FF00   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port B */
#define GPIOQPAD_SPRDC_Msk                   0x00FF0000
#define GPIOQPAD_SPRDD_Msk                   0xFF000000   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port A */

/*-- GPIOQPEH: Register filter settings input ports E, F, G, H ---------------*/

typedef struct {
    uint32_t SPRDE                             :8;
    uint32_t SPRDF                             :8;          /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port C */
    uint32_t SPRDG                             :8;
    uint32_t SPRDH                             :8;          /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port D */
} _GPIOQPEH_bits;

/* Bit field positions: */
#define GPIOQPEH_SPRDE_Pos                   0
#define GPIOQPEH_SPRDF_Pos                   8            /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port C */
#define GPIOQPEH_SPRDG_Pos                   16
#define GPIOQPEH_SPRDH_Pos                   24           /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port D */

/* Bit field masks: */
#define GPIOQPEH_SPRDE_Msk                   0x000000FF
#define GPIOQPEH_SPRDF_Msk                   0x0000FF00   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port C */
#define GPIOQPEH_SPRDG_Msk                   0x00FF0000
#define GPIOQPEH_SPRDH_Msk                   0xFF000000   /*!< Enable filtered of each PIN on 6 clk instead of 3 clk for Port D */

/*-- USB_CTRL: Customize the USB PHY -----------------------------------------*/

typedef struct {
    uint32_t FSEL                              :1;          /*!< Frequency selection reference signal USBPHY (0- 12MHz; 1- 24MHz) */
    uint32_t CLKSEL                            :1;          /*!< Select of reference source USBPHY */
    uint32_t CLKEN                             :1;          /*!< Enable clk signal USBPHY */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _USB_CTRL_bits;

/* Bit field positions: */
#define USB_CTRL_FSEL_Pos                    0            /*!< Frequency selection reference signal USBPHY (0- 12MHz; 1- 24MHz) */
#define USB_CTRL_CLKSEL_Pos                  1            /*!< Select of reference source USBPHY */
#define USB_CTRL_CLKEN_Pos                   2            /*!< Enable clk signal USBPHY */

/* Bit field masks: */
#define USB_CTRL_FSEL_Msk                    0x00000001   /*!< Frequency selection reference signal USBPHY (0- 12MHz; 1- 24MHz) */
#define USB_CTRL_CLKSEL_Msk                  0x00000002   /*!< Select of reference source USBPHY */
#define USB_CTRL_CLKEN_Msk                   0x00000004   /*!< Enable clk signal USBPHY */

/*-- UART_SPI_CLK_SEL: Select source clk UART and SSP register ---------------*/

typedef struct {
    uint32_t SEL_UART0                         :2;          /*!< Select source clk UART0 */
    uint32_t SEL_UART1                         :2;          /*!< Select source clk UART1 */
    uint32_t SEL_UART2                         :2;          /*!< Select source clk UART2 */
    uint32_t SEL_UART3                         :2;          /*!< Select source clk UART3 */
    uint32_t SEL_SPI0                          :2;          /*!< Select source clk SPI0 */
    uint32_t SEL_SPI1                          :2;          /*!< Select source clk SPI1 */
    uint32_t SEL_SPI2                          :2;          /*!< Select source clk SPI2 */
    uint32_t SEL_SPI3                          :2;          /*!< Select source clk SPI3 */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _UART_SPI_CLK_SEL_bits;

/* Bit field positions: */
#define UART_SPI_CLK_SEL_SEL_UART0_Pos       0            /*!< Select source clk UART0 */
#define UART_SPI_CLK_SEL_SEL_UART1_Pos       2            /*!< Select source clk UART1 */
#define UART_SPI_CLK_SEL_SEL_UART2_Pos       4            /*!< Select source clk UART2 */
#define UART_SPI_CLK_SEL_SEL_UART3_Pos       6            /*!< Select source clk UART3 */
#define UART_SPI_CLK_SEL_SEL_SPI0_Pos        8            /*!< Select source clk SPI0 */
#define UART_SPI_CLK_SEL_SEL_SPI1_Pos        10           /*!< Select source clk SPI1 */
#define UART_SPI_CLK_SEL_SEL_SPI2_Pos        12           /*!< Select source clk SPI2 */
#define UART_SPI_CLK_SEL_SEL_SPI3_Pos        14           /*!< Select source clk SPI3 */

/* Bit field masks: */
#define UART_SPI_CLK_SEL_SEL_UART0_Msk       0x00000003   /*!< Select source clk UART0 */
#define UART_SPI_CLK_SEL_SEL_UART1_Msk       0x0000000C   /*!< Select source clk UART1 */
#define UART_SPI_CLK_SEL_SEL_UART2_Msk       0x00000030   /*!< Select source clk UART2 */
#define UART_SPI_CLK_SEL_SEL_UART3_Msk       0x000000C0   /*!< Select source clk UART3 */
#define UART_SPI_CLK_SEL_SEL_SPI0_Msk        0x00000300   /*!< Select source clk SPI0 */
#define UART_SPI_CLK_SEL_SEL_SPI1_Msk        0x00000C00   /*!< Select source clk SPI1 */
#define UART_SPI_CLK_SEL_SEL_SPI2_Msk        0x00003000   /*!< Select source clk SPI2 */
#define UART_SPI_CLK_SEL_SEL_SPI3_Msk        0x0000C000   /*!< Select source clk SPI3 */

/*-- ADC_CTRL3: ADC control register 2 ---------------------------------------*/

typedef struct {
    uint32_t CLKEN_ADC8                        :1;          /*!< Enable clk ADC8 */
    uint32_t DIVEN_ADC8                        :1;          /*!< Enable devider clk ADC8 */
    uint32_t DIV_ADC8                          :6;          /*!< Devider clk ADC8 */
    uint32_t CLKEN_ADC9                        :1;          /*!< Enable clk ADC9 */
    uint32_t DIVEN_ADC9                        :1;          /*!< Enable devider clk ADC9 */
    uint32_t DIV_ADC9                          :6;          /*!< Devider clk ADC9 */
    uint32_t CLKEN_ADC10                       :1;          /*!< Enable clk ADC10 */
    uint32_t DIVEN_ADC10                       :1;          /*!< Enable devider clk ADC10 */
    uint32_t DIV_ADC10                         :6;          /*!< Devider clk ADC10 */
    uint32_t CLKEN_ADC11                       :1;          /*!< Enable clk ADC11 */
    uint32_t DIVEN_ADC11                       :1;          /*!< Enable devider clk ADC11 */
    uint32_t DIV_ADC11                         :6;          /*!< Devider clk ADC11 */
} _ADC_CTRL3_bits;

/* Bit field positions: */
#define ADC_CTRL3_CLKEN_ADC8_Pos             0            /*!< Enable clk ADC8 */
#define ADC_CTRL3_DIVEN_ADC8_Pos             1            /*!< Enable devider clk ADC8 */
#define ADC_CTRL3_DIV_ADC8_Pos               2            /*!< Devider clk ADC8 */
#define ADC_CTRL3_CLKEN_ADC9_Pos             8            /*!< Enable clk ADC9 */
#define ADC_CTRL3_DIVEN_ADC9_Pos             9            /*!< Enable devider clk ADC9 */
#define ADC_CTRL3_DIV_ADC9_Pos               10           /*!< Devider clk ADC9 */
#define ADC_CTRL3_CLKEN_ADC10_Pos            16           /*!< Enable clk ADC10 */
#define ADC_CTRL3_DIVEN_ADC10_Pos            17           /*!< Enable devider clk ADC10 */
#define ADC_CTRL3_DIV_ADC10_Pos              18           /*!< Devider clk ADC10 */
#define ADC_CTRL3_CLKEN_ADC11_Pos            24           /*!< Enable clk ADC11 */
#define ADC_CTRL3_DIVEN_ADC11_Pos            25           /*!< Enable devider clk ADC11 */
#define ADC_CTRL3_DIV_ADC11_Pos              26           /*!< Devider clk ADC11 */

/* Bit field masks: */
#define ADC_CTRL3_CLKEN_ADC8_Msk             0x00000001   /*!< Enable clk ADC8 */
#define ADC_CTRL3_DIVEN_ADC8_Msk             0x00000002   /*!< Enable devider clk ADC8 */
#define ADC_CTRL3_DIV_ADC8_Msk               0x000000FC   /*!< Devider clk ADC8 */
#define ADC_CTRL3_CLKEN_ADC9_Msk             0x00000100   /*!< Enable clk ADC9 */
#define ADC_CTRL3_DIVEN_ADC9_Msk             0x00000200   /*!< Enable devider clk ADC9 */
#define ADC_CTRL3_DIV_ADC9_Msk               0x0000FC00   /*!< Devider clk ADC9 */
#define ADC_CTRL3_CLKEN_ADC10_Msk            0x00010000   /*!< Enable clk ADC10 */
#define ADC_CTRL3_DIVEN_ADC10_Msk            0x00020000   /*!< Enable devider clk ADC10 */
#define ADC_CTRL3_DIV_ADC10_Msk              0x00FC0000   /*!< Devider clk ADC10 */
#define ADC_CTRL3_CLKEN_ADC11_Msk            0x01000000   /*!< Enable clk ADC11 */
#define ADC_CTRL3_DIVEN_ADC11_Msk            0x02000000   /*!< Enable devider clk ADC11 */
#define ADC_CTRL3_DIV_ADC11_Msk              0xFC000000   /*!< Devider clk ADC11 */

/*-- FLASH_FULL_ERASE: Full erase flash (user and boot) register -------------*/

typedef struct {
    uint32_t ERASE_FLASH                       :1;
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _FLASH_FULL_ERASE_bits;

/* Bit field positions: */
#define FLASH_FULL_ERASE_ERASE_FLASH_Pos     0

/* Bit field masks: */
#define FLASH_FULL_ERASE_ERASE_FLASH_Msk     0x00000001

/*-- Register map for COMMON_REG peripheral ----------------------------------*/

typedef struct {
    union {                                                 /*!< Enable output PORT A,B register */
        __IO uint32_t GPIODEN0;                               /*!< GPIODEN0    : type used for word access */
        __IO _GPIODEN0_bits GPIODEN0_bit;                     /*!< GPIODEN0_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIODENA;                             /*!< Enable output PORT A register */
            __IO uint16_t GPIODENB;                             /*!< Enable output PORT B register */
        };
    };
    union {                                                 /*!< Enable output PORT C,D register */
        __IO uint32_t GPIODEN1;                               /*!< GPIODEN1    : type used for word access */
        __IO _GPIODEN1_bits GPIODEN1_bit;                     /*!< GPIODEN1_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIODENC;                             /*!< Enable output PORT C register */
            __IO uint16_t GPIODEND;                             /*!< Enable output PORT D register */
        };
    };
    union {                                                 /*!< Enable output PORT E,F register */
        __IO uint32_t GPIODEN2;                               /*!< GPIODEN2    : type used for word access */
        __IO _GPIODEN2_bits GPIODEN2_bit;                     /*!< GPIODEN2_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIODENE;                             /*!< Enable output PORT E register */
            __IO uint16_t GPIODENF;                             /*!< Enable output PORT F register */
        };
    };
    union {                                                 /*!< Enable output PORT G,H register */
        __IO uint32_t GPIODEN3;                               /*!< GPIODEN3    : type used for word access */
        __IO _GPIODEN3_bits GPIODEN3_bit;                     /*!< GPIODEN3_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIODENG;                             /*!< Enable output PORT G register */
            __IO uint16_t GPIODENH;                             /*!< Enable output PORT H register */
        };
    };
    uint32_t Reserved0[2];                                  /*!< Reserved */
    union {                                                 /*!< Alternate function PORTA register */
        __IO uint32_t GPIOPCTLA;                              /*!< GPIOPCTLA    : type used for word access */
        __IO _GPIOPCTLA_bits GPIOPCTLA_bit;                   /*!< GPIOPCTLA_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTB register */
        __IO uint32_t GPIOPCTLB;                              /*!< GPIOPCTLB    : type used for word access */
        __IO _GPIOPCTLB_bits GPIOPCTLB_bit;                   /*!< GPIOPCTLB_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTC register */
        __IO uint32_t GPIOPCTLC;                              /*!< GPIOPCTLC    : type used for word access */
        __IO _GPIOPCTLC_bits GPIOPCTLC_bit;                   /*!< GPIOPCTLC_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTD register */
        __IO uint32_t GPIOPCTLD;                              /*!< GPIOPCTLD    : type used for word access */
        __IO _GPIOPCTLD_bits GPIOPCTLD_bit;                   /*!< GPIOPCTLD_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTE register */
        __IO uint32_t GPIOPCTLE;                              /*!< GPIOPCTLE    : type used for word access */
        __IO _GPIOPCTLE_bits GPIOPCTLE_bit;                   /*!< GPIOPCTLE_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTF register */
        __IO uint32_t GPIOPCTLF;                              /*!< GPIOPCTLF    : type used for word access */
        __IO _GPIOPCTLF_bits GPIOPCTLF_bit;                   /*!< GPIOPCTLF_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTG register */
        __IO uint32_t GPIOPCTLG;                              /*!< GPIOPCTLG    : type used for word access */
        __IO _GPIOPCTLG_bits GPIOPCTLG_bit;                   /*!< GPIOPCTLG_bit: structure used for bit access */
    };
    union {                                                 /*!< Alternate function PORTH register */
        __IO uint32_t GPIOPCTLH;                              /*!< GPIOPCTLH    : type used for word access */
        __IO _GPIOPCTLH_bits GPIOPCTLH_bit;                   /*!< GPIOPCTLH_bit: structure used for bit access */
    };
    uint32_t Reserved1[4];                                  /*!< Reserved */
    union {                                                 /*!< Control register circuit 'Pull-up' ports A, B */
        __IO uint32_t GPIOODCTL0;                             /*!< GPIOODCTL0    : type used for word access */
        __IO _GPIOODCTL0_bits GPIOODCTL0_bit;                 /*!< GPIOODCTL0_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODCTLA;                           /*!< Control register circuit 'Pull-up' Port A */
            __IO uint16_t GPIOODCTLB;                           /*!< Control register circuit 'Pull-up' Port B */
        };
    };
    union {                                                 /*!< Control register circuit 'Pull-up' ports C, D */
        __IO uint32_t GPIOODCTL1;                             /*!< GPIOODCTL1    : type used for word access */
        __IO _GPIOODCTL1_bits GPIOODCTL1_bit;                 /*!< GPIOODCTL1_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODCTLC;                           /*!< Control register circuit 'Pull-up' Port C */
            __IO uint16_t GPIOODCTLD;                           /*!< Control register circuit 'Pull-up' Port D */
        };
    };
    union {                                                 /*!< Control register circuit 'Pull-up' ports E, F */
        __IO uint32_t GPIOODCTL2;                             /*!< GPIOODCTL2    : type used for word access */
        __IO _GPIOODCTL2_bits GPIOODCTL2_bit;                 /*!< GPIOODCTL2_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODCTLE;                           /*!< Control register circuit 'Pull-up' Port E */
            __IO uint16_t GPIOODCTLF;                           /*!< Control register circuit 'Pull-up' Port F */
        };
    };
    union {                                                 /*!< Control register circuit 'Pull-up' ports G, H */
        __IO uint32_t GPIOODCTL3;                             /*!< GPIOODCTL3    : type used for word access */
        __IO _GPIOODCTL3_bits GPIOODCTL3_bit;                 /*!< GPIOODCTL3_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODCTLG;                           /*!< Control register circuit 'Pull-up' Port G */
            __IO uint16_t GPIOODCTLH;                           /*!< Control register circuit 'Pull-up' Ports H */
        };
    };
    uint32_t Reserved2[2];                                  /*!< Reserved */
    union {                                                 /*!< Control register output capability ports A,B */
        __IO uint32_t GPIOODSCTL0;                            /*!< GPIOODSCTL0    : type used for word access */
        __IO _GPIOODSCTL0_bits GPIOODSCTL0_bit;               /*!< GPIOODSCTL0_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODSCTLA;                          /*!< Control register output capability Port A */
            __IO uint16_t GPIOODSCTLB;                          /*!< Control register output capability Port B */
        };
    };
    union {                                                 /*!< Control register output capability ports C,D */
        __IO uint32_t GPIOODSCTL1;                            /*!< GPIOODSCTL1    : type used for word access */
        __IO _GPIOODSCTL1_bits GPIOODSCTL1_bit;               /*!< GPIOODSCTL1_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODSCTLC;                          /*!< Control register output capability Port C */
            __IO uint16_t GPIOODSCTLD;                          /*!< Control register output capability Port D */
        };
    };
    union {                                                 /*!< Control register output capability ports E,F */
        __IO uint32_t GPIOODSCTL2;                            /*!< GPIOODSCTL2    : type used for word access */
        __IO _GPIOODSCTL2_bits GPIOODSCTL2_bit;               /*!< GPIOODSCTL2_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODSCTLE;                          /*!< Control register output capability Port E */
            __IO uint16_t GPIOODSCTLF;                          /*!< Control register output capability Port F */
        };
    };
    union {                                                 /*!< Control register output capability ports G,H */
        __IO uint32_t GPIOODSCTL3;                            /*!< GPIOODSCTL3    : type used for word access */
        __IO _GPIOODSCTL3_bits GPIOODSCTL3_bit;               /*!< GPIOODSCTL3_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOODSCTLG;                          /*!< Control register output capability Port G */
            __IO uint16_t GPIOODSCTLH;                          /*!< Control register output capability Port H */
        };
    };
    uint32_t Reserved3[2];                                  /*!< Reserved */
    union {                                                 /*!< Control register circuit 'Pull-up' ports A, B */
        __IO uint32_t GPIOPUCTL0;                             /*!< GPIOPUCTL0    : type used for word access */
        __IO _GPIOPUCTL0_bits GPIOPUCTL0_bit;                 /*!< GPIOPUCTL0_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOPUCTLA;                           /*!< Control register circuit 'Pull-up' Port A */
            __IO uint16_t GPIOPUCTLB;                           /*!< Control register circuit 'Pull-up' Port B */
        };
    };
    union {                                                 /*!< Control register circuit 'Pull-up' ports C, D */
        __IO uint32_t GPIOPUCTL1;                             /*!< GPIOPUCTL1    : type used for word access */
        __IO _GPIOPUCTL1_bits GPIOPUCTL1_bit;                 /*!< GPIOPUCTL1_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOPUCTLC;                           /*!< Control register circuit 'Pull-up' Port C */
            __IO uint16_t GPIOPUCTLD;                           /*!< Control register circuit 'Pull-up' Port D */
        };
    };
    union {                                                 /*!< Control register circuit 'Pull-up' ports E, F */
        __IO uint32_t GPIOPUCTL2;                             /*!< GPIOPUCTL2    : type used for word access */
        __IO _GPIOPUCTL2_bits GPIOPUCTL2_bit;                 /*!< GPIOPUCTL2_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOPUCTLE;                           /*!< Control register circuit 'Pull-up' Port E */
            __IO uint16_t GPIOPUCTLF;                           /*!< Control register circuit 'Pull-up' Port F */
        };
    };
    union {                                                 /*!< Control register circuit 'Pull-up' ports G, H */
        __IO uint32_t GPIOPUCTL3;                             /*!< GPIOPUCTL3    : type used for word access */
        __IO _GPIOPUCTL3_bits GPIOPUCTL3_bit;                 /*!< GPIOPUCTL3_bit: structure used for bit access */
        struct {
            __IO uint16_t GPIOPUCTLG;                           /*!< Control register circuit 'Pull-up' Port G */
            __IO uint16_t GPIOPUCTLH;                           /*!< Control register circuit 'Pull-up' Port H */
        };
    };
    uint32_t Reserved4[3];                                  /*!< Reserved */
    union {                                                 /*!< PLL control register settings */
        __IO uint32_t PLL_CTRL;                               /*!< PLL_CTRL    : type used for word access */
        __IO _PLL_CTRL_bits PLL_CTRL_bit;                     /*!< PLL_CTRL_bit: structure used for bit access */
    };
    union {                                                 /*!< Select output divider PLL */
        __IO uint32_t PLL_OD;                                 /*!< PLL_OD    : type used for word access */
        __IO _PLL_OD_bits PLL_OD_bit;                         /*!< PLL_OD_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting the reference divider PLL */
        __IO uint32_t PLL_NR;                                 /*!< PLL_NR    : type used for word access */
        __IO _PLL_NR_bits PLL_NR_bit;                         /*!< PLL_NR_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting the PLL feedback divider */
        __IO uint32_t PLL_NF;                                 /*!< PLL_NF    : type used for word access */
        __IO _PLL_NF_bits PLL_NF_bit;                         /*!< PLL_NF_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting up an external memory controller */
        __IO uint32_t EXT_MEM_CFG;                            /*!< EXT_MEM_CFG    : type used for word access */
        __IO _EXT_MEM_CFG_bits EXT_MEM_CFG_bit;               /*!< EXT_MEM_CFG_bit: structure used for bit access */
    };
    union {                                                 /*!< ADC control register 1 */
        __IO uint32_t ADC_CTRL1;                              /*!< ADC_CTRL1    : type used for word access */
        __IO _ADC_CTRL1_bits ADC_CTRL1_bit;                   /*!< ADC_CTRL1_bit: structure used for bit access */
    };
    union {                                                 /*!< ADC control register 2 */
        __IO uint32_t ADC_CTRL2;                              /*!< ADC_CTRL2    : type used for word access */
        __IO _ADC_CTRL2_bits ADC_CTRL2_bit;                   /*!< ADC_CTRL2_bit: structure used for bit access */
    };
    union {                                                 /*!< Syncronize register PWM blocks */
        __IO uint32_t PWM_SYNC;                               /*!< PWM_SYNC    : type used for word access */
        __IO _PWM_SYNC_bits PWM_SYNC_bit;                     /*!< PWM_SYNC_bit: structure used for bit access */
    };
    union {                                                 /*!< Register control of synchronization blocks of PWM */
        __IO uint32_t PWM_CTRL;                               /*!< PWM_CTRL    : type used for word access */
        __IO _PWM_CTRL_bits PWM_CTRL_bit;                     /*!< PWM_CTRL_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting the system clock controller */
        __IO uint32_t SYS_CLK;                                /*!< SYS_CLK    : type used for word access */
        __IO _SYS_CLK_bits SYS_CLK_bit;                       /*!< SYS_CLK_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting the resolution peripheral clocks */
        __IO uint32_t APB_CLK;                                /*!< APB_CLK    : type used for word access */
        __IO _APB_CLK_bits APB_CLK_bit;                       /*!< APB_CLK_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting the clock UART blocks */
        __IO uint32_t UART_CLK;                               /*!< UART_CLK    : type used for word access */
        __IO _UART_CLK_bits UART_CLK_bit;                     /*!< UART_CLK_bit: structure used for bit access */
    };
    union {                                                 /*!< Setting the clock blocks SPI */
        __IO uint32_t SPI_CLK;                                /*!< SPI_CLK    : type used for word access */
        __IO _SPI_CLK_bits SPI_CLK_bit;                       /*!< SPI_CLK_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset block periphery1 */
        __IO uint32_t PER_RST1;                               /*!< PER_RST1    : type used for word access */
        __IO _PER_RST1_bits PER_RST1_bit;                     /*!< PER_RST1_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset block periphery2 */
        __IO uint32_t PER_RST2;                               /*!< PER_RST2    : type used for word access */
        __IO _PER_RST2_bits PER_RST2_bit;                     /*!< PER_RST2_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register resynchronization input ports A, B */
        __IO uint32_t GPIOSE0;                                /*!< GPIOSE0    : type used for word access */
        __IO _GPIOSE0_bits GPIOSE0_bit;                       /*!< GPIOSE0_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register resynchronization input ports C, D */
        __IO uint32_t GPIOSE1;                                /*!< GPIOSE1    : type used for word access */
        __IO _GPIOSE1_bits GPIOSE1_bit;                       /*!< GPIOSE1_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register resynchronization input ports E, F */
        __IO uint32_t GPIOSE2;                                /*!< GPIOSE2    : type used for word access */
        __IO _GPIOSE2_bits GPIOSE2_bit;                       /*!< GPIOSE2_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register resynchronization input ports G, H */
        __IO uint32_t GPIOSE3;                                /*!< GPIOSE3    : type used for word access */
        __IO _GPIOSE3_bits GPIOSE3_bit;                       /*!< GPIOSE3_bit: structure used for bit access */
    };
    uint32_t Reserved5[4];                                  /*!< Reserved */
    union {                                                 /*!< Register filter settings input ports A, B */
        __IO uint32_t GPIOQE0;                                /*!< GPIOQE0    : type used for word access */
        __IO _GPIOQE0_bits GPIOQE0_bit;                       /*!< GPIOQE0_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports C, D */
        __IO uint32_t GPIOQE1;                                /*!< GPIOQE1    : type used for word access */
        __IO _GPIOQE1_bits GPIOQE1_bit;                       /*!< GPIOQE1_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports E, F */
        __IO uint32_t GPIOQE2;                                /*!< GPIOQE2    : type used for word access */
        __IO _GPIOQE2_bits GPIOQE2_bit;                       /*!< GPIOQE2_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports G, H */
        __IO uint32_t GPIOQE3;                                /*!< GPIOQE3    : type used for word access */
        __IO _GPIOQE3_bits GPIOQE3_bit;                       /*!< GPIOQE3_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports A, B */
        __IO uint32_t GPIOQM0;                                /*!< GPIOQM0    : type used for word access */
        __IO _GPIOQM0_bits GPIOQM0_bit;                       /*!< GPIOQM0_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports C, D */
        __IO uint32_t GPIOQM1;                                /*!< GPIOQM1    : type used for word access */
        __IO _GPIOQM1_bits GPIOQM1_bit;                       /*!< GPIOQM1_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports E, F */
        __IO uint32_t GPIOQM2;                                /*!< GPIOQM2    : type used for word access */
        __IO _GPIOQM2_bits GPIOQM2_bit;                       /*!< GPIOQM2_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports G, H */
        __IO uint32_t GPIOQM3;                                /*!< GPIOQM3    : type used for word access */
        __IO _GPIOQM3_bits GPIOQM3_bit;                       /*!< GPIOQM3_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports A, B, C, D */
        __IO uint32_t GPIOQPAD;                               /*!< GPIOQPAD    : type used for word access */
        __IO _GPIOQPAD_bits GPIOQPAD_bit;                     /*!< GPIOQPAD_bit: structure used for bit access */
    };
    union {                                                 /*!< Register filter settings input ports E, F, G, H */
        __IO uint32_t GPIOQPEH;                               /*!< GPIOQPEH    : type used for word access */
        __IO _GPIOQPEH_bits GPIOQPEH_bit;                     /*!< GPIOQPEH_bit: structure used for bit access */
    };
    uint32_t Reserved6[6];                                  /*!< Reserved */
    union {                                                 /*!< Customize the USB PHY */
        __IO uint32_t USB_CTRL;                               /*!< USB_CTRL    : type used for word access */
        __IO _USB_CTRL_bits USB_CTRL_bit;                     /*!< USB_CTRL_bit: structure used for bit access */
    };
    uint32_t Reserved7;                                     /*!< Reserved */
    union {                                                 /*!< Select source clk UART and SSP register */
        __IO uint32_t UART_SPI_CLK_SEL;                       /*!< UART_SPI_CLK_SEL    : type used for word access */
        __IO _UART_SPI_CLK_SEL_bits UART_SPI_CLK_SEL_bit;     /*!< UART_SPI_CLK_SEL_bit: structure used for bit access */
    };
    union {                                                 /*!< ADC control register 2 */
        __IO uint32_t ADC_CTRL3;                              /*!< ADC_CTRL3    : type used for word access */
        __IO _ADC_CTRL3_bits ADC_CTRL3_bit;                   /*!< ADC_CTRL3_bit: structure used for bit access */
    };
    uint32_t Reserved8[9];                                  /*!< Reserved */
    union {                                                 /*!< Full erase flash (user and boot) register */
        __IO uint32_t FLASH_FULL_ERASE;                       /*!< FLASH_FULL_ERASE    : type used for word access */
        __IO _FLASH_FULL_ERASE_bits FLASH_FULL_ERASE_bit;     /*!< FLASH_FULL_ERASE_bit: structure used for bit access */
    };
} NT_COMMON_REG_TypeDef;

/******************************************************************************/
/*                         CAN controller registers                           */
/******************************************************************************/

/*-- CLC: Frequency control register -----------------------------------------*/

typedef struct {
    uint32_t DISR                              :1;          /*!< OFF module CAN */
    uint32_t DISS                              :1;          /*!< State CAN */
    uint32_t SPEN                              :1;          /*!< Activate suspend mode for system debugging */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SBWE                              :1;          /*!< Enable write in FSOE and SPEN for system debugging */
    uint32_t FSOE                              :1;          /*!< activation quickly turn off the CAN for system debugging */
    uint32_t Reserved1                         :26;         /*!< Reserved */
} _CLC_bits;

/* Bit field positions: */
#define CLC_DISR_Pos                         0            /*!< OFF module CAN */
#define CLC_DISS_Pos                         1            /*!< State CAN */
#define CLC_SPEN_Pos                         2            /*!< Activate suspend mode for system debugging */
#define CLC_SBWE_Pos                         4            /*!< Enable write in FSOE and SPEN for system debugging */
#define CLC_FSOE_Pos                         5            /*!< activation quickly turn off the CAN for system debugging */

/* Bit field masks: */
#define CLC_DISR_Msk                         0x00000001   /*!< OFF module CAN */
#define CLC_DISS_Msk                         0x00000002   /*!< State CAN */
#define CLC_SPEN_Msk                         0x00000004   /*!< Activate suspend mode for system debugging */
#define CLC_SBWE_Msk                         0x00000010   /*!< Enable write in FSOE and SPEN for system debugging */
#define CLC_FSOE_Msk                         0x00000020   /*!< activation quickly turn off the CAN for system debugging */

/*-- ID: Identity register ---------------------------------------------------*/

typedef struct {
    uint32_t MOD_REV                           :8;          /*!< Number of modifications of the CAN */
    uint32_t MOD_TYPE                          :8;          /*!< Digit capacity CAN */
    uint32_t MOD_NUMBER                        :16;         /*!< Identification number CAN */
} _ID_bits;

/* Bit field positions: */
#define ID_MOD_REV_Pos                       0            /*!< Number of modifications of the CAN */
#define ID_MOD_TYPE_Pos                      8            /*!< Digit capacity CAN */
#define ID_MOD_NUMBER_Pos                    16           /*!< Identification number CAN */

/* Bit field masks: */
#define ID_MOD_REV_Msk                       0x000000FF   /*!< Number of modifications of the CAN */
#define ID_MOD_TYPE_Msk                      0x0000FF00   /*!< Digit capacity CAN */
#define ID_MOD_NUMBER_Msk                    0xFFFF0000   /*!< Identification number CAN */

/*-- FDR: Register divider ---------------------------------------------------*/

typedef struct {
    uint32_t STEP                              :10;         /*!< Step devider */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SM                                :1;          /*!< Select the transition mode Suspend */
    uint32_t SC                                :2;          /*!< Configuration of the frequency divider in mode Suspend */
    uint32_t DM                                :2;          /*!< Mode setting of the frequency divider */
    uint32_t RESULT                            :10;         /*!< Count frequency divider */
    uint32_t Reserved1                         :2;          /*!< Reserved */
    uint32_t SUSACK                            :1;          /*!< Indicate mode Suspend */
    uint32_t SUSREQ                            :1;          /*!< Activate Suspend mode */
    uint32_t ENHW                              :1;          /*!< Control bit synchronization */
    uint32_t DISCLK                            :1;          /*!< Disable bit internal clock */
} _FDR_bits;

/* Bit field positions: */
#define FDR_STEP_Pos                         0            /*!< Step devider */
#define FDR_SM_Pos                           11           /*!< Select the transition mode Suspend */
#define FDR_SC_Pos                           12           /*!< Configuration of the frequency divider in mode Suspend */
#define FDR_DM_Pos                           14           /*!< Mode setting of the frequency divider */
#define FDR_RESULT_Pos                       16           /*!< Count frequency divider */
#define FDR_SUSACK_Pos                       28           /*!< Indicate mode Suspend */
#define FDR_SUSREQ_Pos                       29           /*!< Activate Suspend mode */
#define FDR_ENHW_Pos                         30           /*!< Control bit synchronization */
#define FDR_DISCLK_Pos                       31           /*!< Disable bit internal clock */

/* Bit field masks: */
#define FDR_STEP_Msk                         0x000003FF   /*!< Step devider */
#define FDR_SM_Msk                           0x00000800   /*!< Select the transition mode Suspend */
#define FDR_SC_Msk                           0x00003000   /*!< Configuration of the frequency divider in mode Suspend */
#define FDR_DM_Msk                           0x0000C000   /*!< Mode setting of the frequency divider */
#define FDR_RESULT_Msk                       0x03FF0000   /*!< Count frequency divider */
#define FDR_SUSACK_Msk                       0x10000000   /*!< Indicate mode Suspend */
#define FDR_SUSREQ_Msk                       0x20000000   /*!< Activate Suspend mode */
#define FDR_ENHW_Msk                         0x40000000   /*!< Control bit synchronization */
#define FDR_DISCLK_Msk                       0x80000000   /*!< Disable bit internal clock */

/*-- LIST: Register list -----------------------------------------------------*/

typedef struct {
    uint32_t BEGIN                             :8;          /*!< Number of the first message object */
    uint32_t END                               :8;          /*!< Number of the last message object */
    uint32_t SIZE                              :8;          /*!< List size */
    uint32_t EMPTY                             :1;          /*!< Indicate empty list */
    uint32_t Reserved0                         :7;          /*!< Reserved */
} _LIST_bits;

/* Bit field positions: */
#define LIST_BEGIN_Pos                       0            /*!< Number of the first message object */
#define LIST_END_Pos                         8            /*!< Number of the last message object */
#define LIST_SIZE_Pos                        16           /*!< List size */
#define LIST_EMPTY_Pos                       24           /*!< Indicate empty list */

/* Bit field masks: */
#define LIST_BEGIN_Msk                       0x000000FF   /*!< Number of the first message object */
#define LIST_END_Msk                         0x0000FF00   /*!< Number of the last message object */
#define LIST_SIZE_Msk                        0x00FF0000   /*!< List size */
#define LIST_EMPTY_Msk                       0x01000000   /*!< Indicate empty list */

/*-- MSID: Register messages index -------------------------------------------*/

typedef struct {
    uint32_t INDEX                             :8;          /*!< Number field waiting bit */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _MSID_bits;

/* Bit field positions: */
#define MSID_INDEX_Pos                       0            /*!< Number field waiting bit */

/* Bit field masks: */
#define MSID_INDEX_Msk                       0x000000FF   /*!< Number field waiting bit */

/*-- PANCTR: Register command panel ------------------------------------------*/

typedef struct {
    uint32_t PANCMD                            :8;          /*!< Command panel */
    uint32_t BUSY                              :1;          /*!< Busy flag panels arguments (waiting to be written at the end of the command) */
    uint32_t RBUSY                             :1;          /*!< Busy flag panels arguments (running the command list, the result of which will be recorded in PANAR1 and PANAR2) */
    uint32_t Reserved0                         :6;          /*!< Reserved */
    uint32_t PANAR1                            :8;          /*!< Panel argument 8 */
    uint32_t PANAR2                            :8;          /*!< Panel argument 9 */
} _PANCTR_bits;

/* Bit field positions: */
#define PANCTR_PANCMD_Pos                    0            /*!< Command panel */
#define PANCTR_BUSY_Pos                      8            /*!< Busy flag panels arguments (waiting to be written at the end of the command) */
#define PANCTR_RBUSY_Pos                     9            /*!< Busy flag panels arguments (running the command list, the result of which will be recorded in PANAR1 and PANAR2) */
#define PANCTR_PANAR1_Pos                    16           /*!< Panel argument 8 */
#define PANCTR_PANAR2_Pos                    24           /*!< Panel argument 9 */

/* Bit field masks: */
#define PANCTR_PANCMD_Msk                    0x000000FF   /*!< Command panel */
#define PANCTR_BUSY_Msk                      0x00000100   /*!< Busy flag panels arguments (waiting to be written at the end of the command) */
#define PANCTR_RBUSY_Msk                     0x00000200   /*!< Busy flag panels arguments (running the command list, the result of which will be recorded in PANAR1 and PANAR2) */
#define PANCTR_PANAR1_Msk                    0x00FF0000   /*!< Panel argument 8 */
#define PANCTR_PANAR2_Msk                    0xFF000000   /*!< Panel argument 9 */

/*-- MCR_REG -----------------------------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :12;         /*!< Reserved */
    uint32_t MPSEL                             :4;          /*!< Field task position after waiting message bit transmit / receive messages */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _MCR_REG_bits;

/* Bit field positions: */
#define MCR_REG_MPSEL_Pos                    12           /*!< Field task position after waiting message bit transmit / receive messages */

/* Bit field masks: */
#define MCR_REG_MPSEL_Msk                    0x0000F000   /*!< Field task position after waiting message bit transmit / receive messages */

/*-- MITR: Interrupt register ------------------------------------------------*/

typedef struct {
    uint32_t IT                                :16;         /*!< Field  generate interrupt */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _MITR_bits;

/* Bit field positions: */
#define MITR_IT_Pos                          0            /*!< Field  generate interrupt */

/* Bit field masks: */
#define MITR_IT_Msk                          0x0000FFFF   /*!< Field  generate interrupt */

/*-- NCR: Register control node ----------------------------------------------*/

typedef struct {
    uint32_t INIT                              :1;          /*!< Node initialization */
    uint32_t TRIE                              :1;          /*!< Interrupt enable bit of the assembly at the end of the transmission / reception */
    uint32_t LECIE                             :1;          /*!< Interrupt enable bit of the assembly when it detects the last error code */
    uint32_t ALIE                              :1;          /*!< Enable interrupt ALERT from node */
    uint32_t CANDIS                            :1;          /*!< Off node */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CCE                               :1;          /*!< Permission node configuration changes */
    uint32_t CALM                              :1;          /*!< Activate the node analysis */
    uint32_t SUSEN                             :1;          /*!< Enable mode suspension of the node */
    uint32_t Reserved1                         :23;         /*!< Reserved */
} _NCR_bits;

/* Bit field positions: */
#define NCR_INIT_Pos                         0            /*!< Node initialization */
#define NCR_TRIE_Pos                         1            /*!< Interrupt enable bit of the assembly at the end of the transmission / reception */
#define NCR_LECIE_Pos                        2            /*!< Interrupt enable bit of the assembly when it detects the last error code */
#define NCR_ALIE_Pos                         3            /*!< Enable interrupt ALERT from node */
#define NCR_CANDIS_Pos                       4            /*!< Off node */
#define NCR_CCE_Pos                          6            /*!< Permission node configuration changes */
#define NCR_CALM_Pos                         7            /*!< Activate the node analysis */
#define NCR_SUSEN_Pos                        8            /*!< Enable mode suspension of the node */

/* Bit field masks: */
#define NCR_INIT_Msk                         0x00000001   /*!< Node initialization */
#define NCR_TRIE_Msk                         0x00000002   /*!< Interrupt enable bit of the assembly at the end of the transmission / reception */
#define NCR_LECIE_Msk                        0x00000004   /*!< Interrupt enable bit of the assembly when it detects the last error code */
#define NCR_ALIE_Msk                         0x00000008   /*!< Enable interrupt ALERT from node */
#define NCR_CANDIS_Msk                       0x00000010   /*!< Off node */
#define NCR_CCE_Msk                          0x00000040   /*!< Permission node configuration changes */
#define NCR_CALM_Msk                         0x00000080   /*!< Activate the node analysis */
#define NCR_SUSEN_Msk                        0x00000100   /*!< Enable mode suspension of the node */

/*-- NSR: Register state node ------------------------------------------------*/

typedef struct {
    uint32_t LEC                               :3;          /*!< Last error code */
    uint32_t TXOK                              :1;          /*!< Flag successful message transmission */
    uint32_t RXOK                              :1;          /*!< Flag successful reception of messages */
    uint32_t ALERT                             :1;          /*!< Warning flag ALERT */
    uint32_t EWRN                              :1;          /*!< Flag critical errors */
    uint32_t BOFF                              :1;          /*!< Status flag 'is disconnected from the bus' */
    uint32_t LLE                               :1;          /*!< Error flag list */
    uint32_t LOE                               :1;          /*!< Error Flag Room list */
    uint32_t SUSACK                            :1;          /*!< Indicator cluster node suspend mode */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _NSR_bits;

/* Bit field positions: */
#define NSR_LEC_Pos                          0            /*!< Last error code */
#define NSR_TXOK_Pos                         3            /*!< Flag successful message transmission */
#define NSR_RXOK_Pos                         4            /*!< Flag successful reception of messages */
#define NSR_ALERT_Pos                        5            /*!< Warning flag ALERT */
#define NSR_EWRN_Pos                         6            /*!< Flag critical errors */
#define NSR_BOFF_Pos                         7            /*!< Status flag 'is disconnected from the bus' */
#define NSR_LLE_Pos                          8            /*!< Error flag list */
#define NSR_LOE_Pos                          9            /*!< Error Flag Room list */
#define NSR_SUSACK_Pos                       10           /*!< Indicator cluster node suspend mode */

/* Bit field masks: */
#define NSR_LEC_Msk                          0x00000007   /*!< Last error code */
#define NSR_TXOK_Msk                         0x00000008   /*!< Flag successful message transmission */
#define NSR_RXOK_Msk                         0x00000010   /*!< Flag successful reception of messages */
#define NSR_ALERT_Msk                        0x00000020   /*!< Warning flag ALERT */
#define NSR_EWRN_Msk                         0x00000040   /*!< Flag critical errors */
#define NSR_BOFF_Msk                         0x00000080   /*!< Status flag 'is disconnected from the bus' */
#define NSR_LLE_Msk                          0x00000100   /*!< Error flag list */
#define NSR_LOE_Msk                          0x00000200   /*!< Error Flag Room list */
#define NSR_SUSACK_Msk                       0x00000400   /*!< Indicator cluster node suspend mode */

/*-- NIPR: Interrupt pointer register node -----------------------------------*/

typedef struct {
    uint32_t ALINP                             :4;
    uint32_t LECINP                            :4;
    uint32_t TRINP                             :4;
    uint32_t CFCINP                            :4;
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _NIPR_bits;

/* Bit field positions: */
#define NIPR_ALINP_Pos                       0
#define NIPR_LECINP_Pos                      4
#define NIPR_TRINP_Pos                       8
#define NIPR_CFCINP_Pos                      12

/* Bit field masks: */
#define NIPR_ALINP_Msk                       0x0000000F
#define NIPR_LECINP_Msk                      0x000000F0
#define NIPR_TRINP_Msk                       0x00000F00
#define NIPR_CFCINP_Msk                      0x0000F000

/*-- NPCR: Port control register node ----------------------------------------*/

typedef struct {
    uint32_t RXSEL                             :3;          /*!< Selection field output of the microcontroller to receive messages */
    uint32_t Reserved0                         :5;          /*!< Reserved */
    uint32_t LBM                               :1;          /*!< Enable mode Loop-Back */
    uint32_t Reserved1                         :23;         /*!< Reserved */
} _NPCR_bits;

/* Bit field positions: */
#define NPCR_RXSEL_Pos                       0            /*!< Selection field output of the microcontroller to receive messages */
#define NPCR_LBM_Pos                         8            /*!< Enable mode Loop-Back */

/* Bit field masks: */
#define NPCR_RXSEL_Msk                       0x00000007   /*!< Selection field output of the microcontroller to receive messages */
#define NPCR_LBM_Msk                         0x00000100   /*!< Enable mode Loop-Back */

/*-- NBTR: Timing register bits  ---------------------------------------------*/

typedef struct {
    uint32_t BRP                               :6;          /*!< Prescaler rate */
    uint32_t SJW                               :2;          /*!< Transition width resynchronization */
    uint32_t TSEG1                             :4;          /*!< Parameter 1 */
    uint32_t TSEG2                             :3;          /*!< Parameter 2 */
    uint32_t DIV8                              :1;          /*!< Frequency divider by 8 */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _NBTR_bits;

/* Bit field positions: */
#define NBTR_BRP_Pos                         0            /*!< Prescaler rate */
#define NBTR_SJW_Pos                         6            /*!< Transition width resynchronization */
#define NBTR_TSEG1_Pos                       8            /*!< Parameter 1 */
#define NBTR_TSEG2_Pos                       12           /*!< Parameter 2 */
#define NBTR_DIV8_Pos                        15           /*!< Frequency divider by 8 */

/* Bit field masks: */
#define NBTR_BRP_Msk                         0x0000003F   /*!< Prescaler rate */
#define NBTR_SJW_Msk                         0x000000C0   /*!< Transition width resynchronization */
#define NBTR_TSEG1_Msk                       0x00000F00   /*!< Parameter 1 */
#define NBTR_TSEG2_Msk                       0x00007000   /*!< Parameter 2 */
#define NBTR_DIV8_Msk                        0x00008000   /*!< Frequency divider by 8 */

/*-- NECNT: Counter error register node --------------------------------------*/

typedef struct {
    uint32_t REC                               :8;          /*!< Receive Error Counter field messages */
    uint32_t TEC                               :8;          /*!< Counter field messaging error */
    uint32_t EWRNLVL                           :8;          /*!< Error limit at which a flag is set in the register EWRN NSR */
    uint32_t LETD                              :1;          /*!< Flag last transmission errors */
    uint32_t LEINC                             :1;          /*!< Indicator increment at the last error */
    uint32_t Reserved0                         :6;          /*!< Reserved */
} _NECNT_bits;

/* Bit field positions: */
#define NECNT_REC_Pos                        0            /*!< Receive Error Counter field messages */
#define NECNT_TEC_Pos                        8            /*!< Counter field messaging error */
#define NECNT_EWRNLVL_Pos                    16           /*!< Error limit at which a flag is set in the register EWRN NSR */
#define NECNT_LETD_Pos                       24           /*!< Flag last transmission errors */
#define NECNT_LEINC_Pos                      25           /*!< Indicator increment at the last error */

/* Bit field masks: */
#define NECNT_REC_Msk                        0x000000FF   /*!< Receive Error Counter field messages */
#define NECNT_TEC_Msk                        0x0000FF00   /*!< Counter field messaging error */
#define NECNT_EWRNLVL_Msk                    0x00FF0000   /*!< Error limit at which a flag is set in the register EWRN NSR */
#define NECNT_LETD_Msk                       0x01000000   /*!< Flag last transmission errors */
#define NECNT_LEINC_Msk                      0x02000000   /*!< Indicator increment at the last error */

/*-- NFCR: Register message counter node -------------------------------------*/

typedef struct {
    uint32_t CFC                               :16;         /*!< Field of the message counter */
    uint32_t CFSEL                             :3;          /*!< Field parameter setting mode selected message counter */
    uint32_t CFMOD                             :2;          /*!< Field task mode message counter */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CFCIE                             :1;          /*!< Interrupt enable bit of the message counter */
    uint32_t CFCOV                             :1;          /*!< Counter overflow flag messages */
    uint32_t Reserved1                         :8;          /*!< Reserved */
} _NFCR_bits;

/* Bit field positions: */
#define NFCR_CFC_Pos                         0            /*!< Field of the message counter */
#define NFCR_CFSEL_Pos                       16           /*!< Field parameter setting mode selected message counter */
#define NFCR_CFMOD_Pos                       19           /*!< Field task mode message counter */
#define NFCR_CFCIE_Pos                       22           /*!< Interrupt enable bit of the message counter */
#define NFCR_CFCOV_Pos                       23           /*!< Counter overflow flag messages */

/* Bit field masks: */
#define NFCR_CFC_Msk                         0x0000FFFF   /*!< Field of the message counter */
#define NFCR_CFSEL_Msk                       0x00070000   /*!< Field parameter setting mode selected message counter */
#define NFCR_CFMOD_Msk                       0x00180000   /*!< Field task mode message counter */
#define NFCR_CFCIE_Msk                       0x00400000   /*!< Interrupt enable bit of the message counter */
#define NFCR_CFCOV_Msk                       0x00800000   /*!< Counter overflow flag messages */

/*-- MOFCR: Register control the operation of the message object  ------------*/

typedef struct {
    uint32_t MMC                               :4;
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t GDFS                              :1;
    uint32_t IDC                               :1;
    uint32_t DLCC                              :1;
    uint32_t DATC                              :1;
    uint32_t Reserved1                         :4;          /*!< Reserved */
    uint32_t RXIE                              :1;          /*!< Interrupt enable after taking the messages */
    uint32_t TXIE                              :1;          /*!< Interrupt enable at the end of the message */
    uint32_t OVIE                              :1;          /*!< Interrupt enable FIFO to fill the message object  */
    uint32_t Reserved2                         :1;          /*!< Reserved */
    uint32_t FRREN                             :1;          /*!< Enable remote request */
    uint32_t RMM                               :1;          /*!< Enable remote monitoring of the communication object */
    uint32_t SDT                               :1;          /*!< Bit single of the message object  participation in shipment */
    uint32_t STT                               :1;          /*!< Bit single data transfer */
    uint32_t DLC                               :4;          /*!< Data length code */
    uint32_t Reserved3                         :4;          /*!< Reserved */
} _MOFCR_bits;

/* Bit field positions: */
#define MOFCR_MMC_Pos                        0
#define MOFCR_GDFS_Pos                       8
#define MOFCR_IDC_Pos                        9
#define MOFCR_DLCC_Pos                       10
#define MOFCR_DATC_Pos                       11
#define MOFCR_RXIE_Pos                       16           /*!< Interrupt enable after taking the messages */
#define MOFCR_TXIE_Pos                       17           /*!< Interrupt enable at the end of the message */
#define MOFCR_OVIE_Pos                       18           /*!< Interrupt enable FIFO to fill the message object  */
#define MOFCR_FRREN_Pos                      20           /*!< Enable remote request */
#define MOFCR_RMM_Pos                        21           /*!< Enable remote monitoring of the communication object */
#define MOFCR_SDT_Pos                        22           /*!< Bit single of the message object  participation in shipment */
#define MOFCR_STT_Pos                        23           /*!< Bit single data transfer */
#define MOFCR_DLC_Pos                        24           /*!< Data length code */

/* Bit field masks: */
#define MOFCR_MMC_Msk                        0x0000000F
#define MOFCR_GDFS_Msk                       0x00000100
#define MOFCR_IDC_Msk                        0x00000200
#define MOFCR_DLCC_Msk                       0x00000400
#define MOFCR_DATC_Msk                       0x00000800
#define MOFCR_RXIE_Msk                       0x00010000   /*!< Interrupt enable after taking the messages */
#define MOFCR_TXIE_Msk                       0x00020000   /*!< Interrupt enable at the end of the message */
#define MOFCR_OVIE_Msk                       0x00040000   /*!< Interrupt enable FIFO to fill the message object  */
#define MOFCR_FRREN_Msk                      0x00100000   /*!< Enable remote request */
#define MOFCR_RMM_Msk                        0x00200000   /*!< Enable remote monitoring of the communication object */
#define MOFCR_SDT_Msk                        0x00400000   /*!< Bit single of the message object  participation in shipment */
#define MOFCR_STT_Msk                        0x00800000   /*!< Bit single data transfer */
#define MOFCR_DLC_Msk                        0x0F000000   /*!< Data length code */

/*-- MOFGPR: Pointer register FIFO / gateway message object  -----------------*/

typedef struct {
    uint32_t BOT                               :8;          /*!< FIFO pointer to the lower element */
    uint32_t TOP                               :8;          /*!< FIFO pointer to the top element */
    uint32_t CUR                               :8;          /*!< A pointer to the current object within the FIFO or gateway */
    uint32_t SEL                               :8;          /*!< Object pointer message */
} _MOFGPR_bits;

/* Bit field positions: */
#define MOFGPR_BOT_Pos                       0            /*!< FIFO pointer to the lower element */
#define MOFGPR_TOP_Pos                       8            /*!< FIFO pointer to the top element */
#define MOFGPR_CUR_Pos                       16           /*!< A pointer to the current object within the FIFO or gateway */
#define MOFGPR_SEL_Pos                       24           /*!< Object pointer message */

/* Bit field masks: */
#define MOFGPR_BOT_Msk                       0x000000FF   /*!< FIFO pointer to the lower element */
#define MOFGPR_TOP_Msk                       0x0000FF00   /*!< FIFO pointer to the top element */
#define MOFGPR_CUR_Msk                       0x00FF0000   /*!< A pointer to the current object within the FIFO or gateway */
#define MOFGPR_SEL_Msk                       0xFF000000   /*!< Object pointer message */

/*-- MOIPR: Pointer register interrupt message object  -----------------------*/

typedef struct {
    uint32_t RXINP                             :4;          /*!< Pointer interrupt line to interrupt after receiving */
    uint32_t TXINP                             :4;          /*!< Pointer interrupt line to interrupt after transfer */
    uint32_t MPN                               :8;          /*!< Number message waiting bit */
    uint32_t CFCVAL                            :16;         /*!< Number of frames */
} _MOIPR_bits;

/* Bit field positions: */
#define MOIPR_RXINP_Pos                      0            /*!< Pointer interrupt line to interrupt after receiving */
#define MOIPR_TXINP_Pos                      4            /*!< Pointer interrupt line to interrupt after transfer */
#define MOIPR_MPN_Pos                        8            /*!< Number message waiting bit */
#define MOIPR_CFCVAL_Pos                     16           /*!< Number of frames */

/* Bit field masks: */
#define MOIPR_RXINP_Msk                      0x0000000F   /*!< Pointer interrupt line to interrupt after receiving */
#define MOIPR_TXINP_Msk                      0x000000F0   /*!< Pointer interrupt line to interrupt after transfer */
#define MOIPR_MPN_Msk                        0x0000FF00   /*!< Number message waiting bit */
#define MOIPR_CFCVAL_Msk                     0xFFFF0000   /*!< Number of frames */

/*-- MOAMR: Mask register message object  ------------------------------------*/

typedef struct {
    uint32_t AM                                :29;         /*!< Mask ID */
    uint32_t MIDE                              :1;          /*!< Mask bit IDE message */
    uint32_t Reserved0                         :2;          /*!< Reserved */
} _MOAMR_bits;

/* Bit field positions: */
#define MOAMR_AM_Pos                         0            /*!< Mask ID */
#define MOAMR_MIDE_Pos                       29           /*!< Mask bit IDE message */

/* Bit field masks: */
#define MOAMR_AM_Msk                         0x1FFFFFFF   /*!< Mask ID */
#define MOAMR_MIDE_Msk                       0x20000000   /*!< Mask bit IDE message */

/*-- MODATAL: Low data registers of the message object  ----------------------*/

typedef struct {
    uint32_t DB0                               :8;          /*!< Zero byte data */
    uint32_t DB1                               :8;          /*!< The first data byte */
    uint32_t DB2                               :8;          /*!< Second data byte */
    uint32_t DB3                               :8;          /*!< The third data byte */
} _MODATAL_bits;

/* Bit field positions: */
#define MODATAL_DB0_Pos                      0            /*!< Zero byte data */
#define MODATAL_DB1_Pos                      8            /*!< The first data byte */
#define MODATAL_DB2_Pos                      16           /*!< Second data byte */
#define MODATAL_DB3_Pos                      24           /*!< The third data byte */

/* Bit field masks: */
#define MODATAL_DB0_Msk                      0x000000FF   /*!< Zero byte data */
#define MODATAL_DB1_Msk                      0x0000FF00   /*!< The first data byte */
#define MODATAL_DB2_Msk                      0x00FF0000   /*!< Second data byte */
#define MODATAL_DB3_Msk                      0xFF000000   /*!< The third data byte */

/*-- MODATAH: High data registers of the message object  ---------------------*/

typedef struct {
    uint32_t DB4                               :8;          /*!< The fourth data byte */
    uint32_t DB5                               :8;          /*!< Fifth byte data */
    uint32_t DB6                               :8;          /*!< Sixth byte data */
    uint32_t DB7                               :8;          /*!< Seventh byte of data */
} _MODATAH_bits;

/* Bit field positions: */
#define MODATAH_DB4_Pos                      0            /*!< The fourth data byte */
#define MODATAH_DB5_Pos                      8            /*!< Fifth byte data */
#define MODATAH_DB6_Pos                      16           /*!< Sixth byte data */
#define MODATAH_DB7_Pos                      24           /*!< Seventh byte of data */

/* Bit field masks: */
#define MODATAH_DB4_Msk                      0x000000FF   /*!< The fourth data byte */
#define MODATAH_DB5_Msk                      0x0000FF00   /*!< Fifth byte data */
#define MODATAH_DB6_Msk                      0x00FF0000   /*!< Sixth byte data */
#define MODATAH_DB7_Msk                      0xFF000000   /*!< Seventh byte of data */

/*-- MOAR: Register arbitration message object  ------------------------------*/

typedef struct {
    uint32_t ID                                :29;         /*!< Object ID message  */
    uint32_t IDE                               :1;          /*!< Bit extension identifier of the message object  */
    uint32_t PRI                               :2;          /*!< Priority class */
} _MOAR_bits;

/* Bit field positions: */
#define MOAR_ID_Pos                          0            /*!< Object ID message  */
#define MOAR_IDE_Pos                         29           /*!< Bit extension identifier of the message object  */
#define MOAR_PRI_Pos                         30           /*!< Priority class */

/* Bit field masks: */
#define MOAR_ID_Msk                          0x1FFFFFFF   /*!< Object ID message  */
#define MOAR_IDE_Msk                         0x20000000   /*!< Bit extension identifier of the message object  */
#define MOAR_PRI_Msk                         0xC0000000   /*!< Priority class */

/*-- MOCTR: Control register Message object  ---------------------------------*/

typedef struct {
    uint32_t RESRXPND                          :1;          /*!< Reset bit RXPND */
    uint32_t RESTXPND                          :1;          /*!< Reset bit TXPND */
    uint32_t RESRXUPD                          :1;          /*!< Reset bit RXUPD */
    uint32_t RESNEWDAT                         :1;          /*!< Reset bit NEWDAT */
    uint32_t RESMSGLST                         :1;          /*!< Reset bit MSGLST */
    uint32_t RESMSGVAL                         :1;          /*!< Reset bit MSGVAL */
    uint32_t RESRTSEL                          :1;          /*!< Reset bit RTSEL */
    uint32_t RESRXEN                           :1;          /*!< Reset bit RXEN */
    uint32_t RESTXRQ                           :1;          /*!< Reset bit TXRQ */
    uint32_t RESTXEN0                          :1;          /*!< Reset bit TXEN0 */
    uint32_t RESTXEN1                          :1;          /*!< Reset bit TXEN1 */
    uint32_t RESDIR                            :1;          /*!< Reset bit DIR */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t SETRXPND                          :1;          /*!< Set bit RXPND */
    uint32_t SETTXPND                          :1;          /*!< Set bit TXPND */
    uint32_t SETRXUPD                          :1;          /*!< Set bit RXUPD */
    uint32_t SETNEWDAT                         :1;          /*!< Set bit NEWDAT */
    uint32_t SETMSGLST                         :1;          /*!< Set bit MSGLST */
    uint32_t SETMSGVAL                         :1;          /*!< Set bit MSGVAL */
    uint32_t SETRTSEL                          :1;          /*!< Set bit RTSEL */
    uint32_t SETRXEN                           :1;          /*!< Set bit RXEN */
    uint32_t SETTXRQ                           :1;          /*!< Set bit TXRQ */
    uint32_t SETTXEN0                          :1;          /*!< Set bit TXEN0 */
    uint32_t SETTXEN1                          :1;          /*!< Set bit TXEN1 */
    uint32_t SETDIR                            :1;          /*!< Set bit DIR */
    uint32_t Reserved1                         :4;          /*!< Reserved */
} _MOCTR_bits;

/* Bit field positions: */
#define MOCTR_RESRXPND_Pos                   0            /*!< Reset bit RXPND */
#define MOCTR_RESTXPND_Pos                   1            /*!< Reset bit TXPND */
#define MOCTR_RESRXUPD_Pos                   2            /*!< Reset bit RXUPD */
#define MOCTR_RESNEWDAT_Pos                  3            /*!< Reset bit NEWDAT */
#define MOCTR_RESMSGLST_Pos                  4            /*!< Reset bit MSGLST */
#define MOCTR_RESMSGVAL_Pos                  5            /*!< Reset bit MSGVAL */
#define MOCTR_RESRTSEL_Pos                   6            /*!< Reset bit RTSEL */
#define MOCTR_RESRXEN_Pos                    7            /*!< Reset bit RXEN */
#define MOCTR_RESTXRQ_Pos                    8            /*!< Reset bit TXRQ */
#define MOCTR_RESTXEN0_Pos                   9            /*!< Reset bit TXEN0 */
#define MOCTR_RESTXEN1_Pos                   10           /*!< Reset bit TXEN1 */
#define MOCTR_RESDIR_Pos                     11           /*!< Reset bit DIR */
#define MOCTR_SETRXPND_Pos                   16           /*!< Set bit RXPND */
#define MOCTR_SETTXPND_Pos                   17           /*!< Set bit TXPND */
#define MOCTR_SETRXUPD_Pos                   18           /*!< Set bit RXUPD */
#define MOCTR_SETNEWDAT_Pos                  19           /*!< Set bit NEWDAT */
#define MOCTR_SETMSGLST_Pos                  20           /*!< Set bit MSGLST */
#define MOCTR_SETMSGVAL_Pos                  21           /*!< Set bit MSGVAL */
#define MOCTR_SETRTSEL_Pos                   22           /*!< Set bit RTSEL */
#define MOCTR_SETRXEN_Pos                    23           /*!< Set bit RXEN */
#define MOCTR_SETTXRQ_Pos                    24           /*!< Set bit TXRQ */
#define MOCTR_SETTXEN0_Pos                   25           /*!< Set bit TXEN0 */
#define MOCTR_SETTXEN1_Pos                   26           /*!< Set bit TXEN1 */
#define MOCTR_SETDIR_Pos                     27           /*!< Set bit DIR */

/* Bit field masks: */
#define MOCTR_RESRXPND_Msk                   0x00000001   /*!< Reset bit RXPND */
#define MOCTR_RESTXPND_Msk                   0x00000002   /*!< Reset bit TXPND */
#define MOCTR_RESRXUPD_Msk                   0x00000004   /*!< Reset bit RXUPD */
#define MOCTR_RESNEWDAT_Msk                  0x00000008   /*!< Reset bit NEWDAT */
#define MOCTR_RESMSGLST_Msk                  0x00000010   /*!< Reset bit MSGLST */
#define MOCTR_RESMSGVAL_Msk                  0x00000020   /*!< Reset bit MSGVAL */
#define MOCTR_RESRTSEL_Msk                   0x00000040   /*!< Reset bit RTSEL */
#define MOCTR_RESRXEN_Msk                    0x00000080   /*!< Reset bit RXEN */
#define MOCTR_RESTXRQ_Msk                    0x00000100   /*!< Reset bit TXRQ */
#define MOCTR_RESTXEN0_Msk                   0x00000200   /*!< Reset bit TXEN0 */
#define MOCTR_RESTXEN1_Msk                   0x00000400   /*!< Reset bit TXEN1 */
#define MOCTR_RESDIR_Msk                     0x00000800   /*!< Reset bit DIR */
#define MOCTR_SETRXPND_Msk                   0x00010000   /*!< Set bit RXPND */
#define MOCTR_SETTXPND_Msk                   0x00020000   /*!< Set bit TXPND */
#define MOCTR_SETRXUPD_Msk                   0x00040000   /*!< Set bit RXUPD */
#define MOCTR_SETNEWDAT_Msk                  0x00080000   /*!< Set bit NEWDAT */
#define MOCTR_SETMSGLST_Msk                  0x00100000   /*!< Set bit MSGLST */
#define MOCTR_SETMSGVAL_Msk                  0x00200000   /*!< Set bit MSGVAL */
#define MOCTR_SETRTSEL_Msk                   0x00400000   /*!< Set bit RTSEL */
#define MOCTR_SETRXEN_Msk                    0x00800000   /*!< Set bit RXEN */
#define MOCTR_SETTXRQ_Msk                    0x01000000   /*!< Set bit TXRQ */
#define MOCTR_SETTXEN0_Msk                   0x02000000   /*!< Set bit TXEN0 */
#define MOCTR_SETTXEN1_Msk                   0x04000000   /*!< Set bit TXEN1 */
#define MOCTR_SETDIR_Msk                     0x08000000   /*!< Set bit DIR */

/*-- MOSTAT: Status register of the message object  --------------------------*/

typedef struct {
    uint32_t RXPND                             :1;          /*!< Indicator deadline */
    uint32_t TXPND                             :1;          /*!< Indicator end of transmission */
    uint32_t RXUPD                             :1;          /*!< Indicator changes */
    uint32_t NEWDAT                            :1;          /*!< New data indicator */
    uint32_t MSGLST                            :1;          /*!< Bit message loss */
    uint32_t MSGVAL                            :1;          /*!< Activity bit of the message object  */
    uint32_t RTSEL                             :1;          /*!< The indication of transmission / reception */
    uint32_t RXEN                              :1;          /*!< Bits allow reception */
    uint32_t TXRQ                              :1;          /*!< Initiate transmission */
    uint32_t TXEN0                             :1;          /*!< Enable bit transmission frame */
    uint32_t TXEN1                             :1;          /*!< Enable bit transmission frame */
    uint32_t DIR                               :1;          /*!< Bit allocation */
    uint32_t LIST                              :4;          /*!< Number list  the message object  */
    uint32_t PPREV                             :8;          /*!< Pointer to the previous entry */
    uint32_t PNEXT                             :8;          /*!< Pointer to the next item in the list */
} _MOSTAT_bits;

/* Bit field positions: */
#define MOSTAT_RXPND_Pos                     0            /*!< Indicator deadline */
#define MOSTAT_TXPND_Pos                     1            /*!< Indicator end of transmission */
#define MOSTAT_RXUPD_Pos                     2            /*!< Indicator changes */
#define MOSTAT_NEWDAT_Pos                    3            /*!< New data indicator */
#define MOSTAT_MSGLST_Pos                    4            /*!< Bit message loss */
#define MOSTAT_MSGVAL_Pos                    5            /*!< Activity bit of the message object  */
#define MOSTAT_RTSEL_Pos                     6            /*!< The indication of transmission / reception */
#define MOSTAT_RXEN_Pos                      7            /*!< Bits allow reception */
#define MOSTAT_TXRQ_Pos                      8            /*!< Initiate transmission */
#define MOSTAT_TXEN0_Pos                     9            /*!< Enable bit transmission frame */
#define MOSTAT_TXEN1_Pos                     10           /*!< Enable bit transmission frame */
#define MOSTAT_DIR_Pos                       11           /*!< Bit allocation */
#define MOSTAT_LIST_Pos                      12           /*!< Number list  the message object  */
#define MOSTAT_PPREV_Pos                     16           /*!< Pointer to the previous entry */
#define MOSTAT_PNEXT_Pos                     24           /*!< Pointer to the next item in the list */

/* Bit field masks: */
#define MOSTAT_RXPND_Msk                     0x00000001   /*!< Indicator deadline */
#define MOSTAT_TXPND_Msk                     0x00000002   /*!< Indicator end of transmission */
#define MOSTAT_RXUPD_Msk                     0x00000004   /*!< Indicator changes */
#define MOSTAT_NEWDAT_Msk                    0x00000008   /*!< New data indicator */
#define MOSTAT_MSGLST_Msk                    0x00000010   /*!< Bit message loss */
#define MOSTAT_MSGVAL_Msk                    0x00000020   /*!< Activity bit of the message object  */
#define MOSTAT_RTSEL_Msk                     0x00000040   /*!< The indication of transmission / reception */
#define MOSTAT_RXEN_Msk                      0x00000080   /*!< Bits allow reception */
#define MOSTAT_TXRQ_Msk                      0x00000100   /*!< Initiate transmission */
#define MOSTAT_TXEN0_Msk                     0x00000200   /*!< Enable bit transmission frame */
#define MOSTAT_TXEN1_Msk                     0x00000400   /*!< Enable bit transmission frame */
#define MOSTAT_DIR_Msk                       0x00000800   /*!< Bit allocation */
#define MOSTAT_LIST_Msk                      0x0000F000   /*!< Number list  the message object  */
#define MOSTAT_PPREV_Msk                     0x00FF0000   /*!< Pointer to the previous entry */
#define MOSTAT_PNEXT_Msk                     0xFF000000   /*!< Pointer to the next item in the list */

/*-- Register map for CAN peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Register control node */
        __IO uint32_t NCR;                                    /*!< NCR    : type used for word access */
        __IO _NCR_bits NCR_bit;                               /*!< NCR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register state node */
        __IO uint32_t NSR;                                    /*!< NSR    : type used for word access */
        __IO _NSR_bits NSR_bit;                               /*!< NSR_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt pointer register node */
        __IO uint32_t NIPR;                                   /*!< NIPR    : type used for word access */
        __IO _NIPR_bits NIPR_bit;                             /*!< NIPR_bit: structure used for bit access */
    };
    union {                                                 /*!< Port control register node */
        __IO uint32_t NPCR;                                   /*!< NPCR    : type used for word access */
        __IO _NPCR_bits NPCR_bit;                             /*!< NPCR_bit: structure used for bit access */
    };
    union {                                                 /*!< Timing register bits  */
        __IO uint32_t NBTR;                                   /*!< NBTR    : type used for word access */
        __IO _NBTR_bits NBTR_bit;                             /*!< NBTR_bit: structure used for bit access */
    };
    union {                                                 /*!< Counter error register node */
        __IO uint32_t NECNT;                                  /*!< NECNT    : type used for word access */
        __IO _NECNT_bits NECNT_bit;                           /*!< NECNT_bit: structure used for bit access */
    };
    union {                                                 /*!< Register message counter node */
        __IO uint32_t NFCR;                                   /*!< NFCR    : type used for word access */
        __IO _NFCR_bits NFCR_bit;                             /*!< NFCR_bit: structure used for bit access */
    };
    uint32_t Reserved0[58];                                 /*!< Reserved */
} NT_CAN_Node_TypeDef;

typedef struct {
    union {                                                 /*!< Register control the operation of the message object  */
        __IO uint32_t MOFCR;                                  /*!< MOFCR    : type used for word access */
        __IO _MOFCR_bits MOFCR_bit;                           /*!< MOFCR_bit: structure used for bit access */
    };
    union {                                                 /*!< Pointer register FIFO / gateway message object  */
        __IO uint32_t MOFGPR;                                 /*!< MOFGPR    : type used for word access */
        __IO _MOFGPR_bits MOFGPR_bit;                         /*!< MOFGPR_bit: structure used for bit access */
    };
    union {                                                 /*!< Pointer register interrupt message object  */
        __IO uint32_t MOIPR;                                  /*!< MOIPR    : type used for word access */
        __IO _MOIPR_bits MOIPR_bit;                           /*!< MOIPR_bit: structure used for bit access */
    };
    union {                                                 /*!< Mask register message object  */
        __IO uint32_t MOAMR;                                  /*!< MOAMR    : type used for word access */
        __IO _MOAMR_bits MOAMR_bit;                           /*!< MOAMR_bit: structure used for bit access */
    };
    union {                                                 /*!< Low data registers of the message object  */
        __IO uint32_t MODATAL;                                /*!< MODATAL    : type used for word access */
        __IO _MODATAL_bits MODATAL_bit;                       /*!< MODATAL_bit: structure used for bit access */
    };
    union {                                                 /*!< High data registers of the message object  */
        __IO uint32_t MODATAH;                                /*!< MODATAH    : type used for word access */
        __IO _MODATAH_bits MODATAH_bit;                       /*!< MODATAH_bit: structure used for bit access */
    };
    union {                                                 /*!< Register arbitration message object  */
        __IO uint32_t MOAR;                                   /*!< MOAR    : type used for word access */
        __IO _MOAR_bits MOAR_bit;                             /*!< MOAR_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register Message object  */
        __O  uint32_t MOCTR;                                  /*!< MOCTR    : type used for word access */
        __O  _MOCTR_bits MOCTR_bit;                           /*!< MOCTR_bit: structure used for bit access */
        /*!< Status register of the message object  */
        __I  uint32_t MOSTAT;                                 /*!< MOSTAT    : type used for word access */
        __I  _MOSTAT_bits MOSTAT_bit;                         /*!< MOSTAT_bit: structure used for bit access */
    };
} NT_CAN_Msg_TypeDef;

typedef struct {
    union {                                                 /*!< Frequency control register */
        __IO uint32_t CLC;                                    /*!< CLC    : type used for word access */
        __IO _CLC_bits CLC_bit;                               /*!< CLC_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Identity register */
        __IO uint32_t ID;                                     /*!< ID    : type used for word access */
        __IO _ID_bits ID_bit;                                 /*!< ID_bit: structure used for bit access */
    };
    union {                                                 /*!< Register divider */
        __IO uint32_t FDR;                                    /*!< FDR    : type used for word access */
        __IO _FDR_bits FDR_bit;                               /*!< FDR_bit: structure used for bit access */
    };
    uint32_t Reserved1[60];                                 /*!< Reserved */
    union {                                                 /*!< Register list */
        __I  uint32_t LIST[8];                                /*!< LIST    : type used for word access */
        __I  _LIST_bits LIST_bit[8];                          /*!< LIST_bit: structure used for bit access */
    };
    uint32_t Reserved2[8];                                  /*!< Reserved */
    __IO uint32_t MSPND[8];                                 /*!< Register waiting interrupts */
    uint32_t Reserved3[8];                                  /*!< Reserved */
    union {                                                 /*!< Register messages index */
        __I  uint32_t MSID[8];                                /*!< MSID    : type used for word access */
        __I  _MSID_bits MSID_bit[8];                          /*!< MSID_bit: structure used for bit access */
    };
    uint32_t Reserved4[8];                                  /*!< Reserved */
    __IO uint32_t MSIMASK;                                  /*!< Mask register message index */
    union {                                                 /*!< Register command panel */
        __IO uint32_t PANCTR;                                 /*!< PANCTR    : type used for word access */
        __IO _PANCTR_bits PANCTR_bit;                         /*!< PANCTR_bit: structure used for bit access */
    };
    union {                                                 /*!<  */
        __IO uint32_t MCR_REG;                                /*!< MCR_REG    : type used for word access */
        __IO _MCR_REG_bits MCR_REG_bit;                       /*!< MCR_REG_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt register */
        __O  uint32_t MITR;                                   /*!< MITR    : type used for word access */
        __O  _MITR_bits MITR_bit;                             /*!< MITR_bit: structure used for bit access */
    };
    uint32_t Reserved5[12];                                 /*!< Reserved */
    NT_CAN_Node_TypeDef CAN_Node[2];
    uint32_t Reserved6[768];                                /*!< Reserved */
    NT_CAN_Msg_TypeDef CAN_Msg[256];
} NT_CAN_TypeDef;

/******************************************************************************/
/*                      ETHERNET controller registers                         */
/******************************************************************************/

/*-- MAC1: MAC configuration register 1 --------------------------------------*/

typedef struct {
    uint32_t RXENABLE                          :1;          /*!< Frame reception enable bit */
    uint32_t PASSALL                           :1;          /*!< Bit control PASS */
    uint32_t RXPAUSE                           :1;          /*!< Enable receiving a pause as part of Frame */
    uint32_t TXPAUSE                           :1;          /*!< Enable transmission pauses Frame */
    uint32_t LOOPBACK                          :1;          /*!< Bit activate reception of packets transmitted back through MACReceive-interface */
    uint32_t Reserved0                         :3;          /*!< Reserved */
    uint32_t RESETTFUN                         :1;          /*!< Reset bit logic devices packet */
    uint32_t RESETTMCS                         :1;          /*!< Reset bit device MAC layer, responsible for managing addresses in information transmission Reset bit device MAC layer, responsible for managing addresses in information transmission */
    uint32_t RESETRFUN                         :1;          /*!< Reset bit logic devices receive packets */
    uint32_t RESETRMCS                         :1;          /*!< Reset bit device MAC layer, responsible for managing the filtering addresses of packets received */
    uint32_t Reserved1                         :2;          /*!< Reserved */
    uint32_t SIMRESET                          :1;          /*!< Reset bit random number generator transmitting device */
    uint32_t SOFTRESET                         :1;          /*!< Reset bit block MAC Ethernet Controller */
    uint32_t Reserved2                         :16;         /*!< Reserved */
} _MAC1_bits;

/* Bit field positions: */
#define MAC1_RXENABLE_Pos                    0            /*!< Frame reception enable bit */
#define MAC1_PASSALL_Pos                     1            /*!< Bit control PASS */
#define MAC1_RXPAUSE_Pos                     2            /*!< Enable receiving a pause as part of Frame */
#define MAC1_TXPAUSE_Pos                     3            /*!< Enable transmission pauses Frame */
#define MAC1_LOOPBACK_Pos                    4            /*!< Bit activate reception of packets transmitted back through MACReceive-interface */
#define MAC1_RESETTFUN_Pos                   8            /*!< Reset bit logic devices packet */
#define MAC1_RESETTMCS_Pos                   9            /*!< Reset bit device MAC layer, responsible for managing addresses in information transmission Reset bit device MAC layer, responsible for managing addresses in information transmission */
#define MAC1_RESETRFUN_Pos                   10           /*!< Reset bit logic devices receive packets */
#define MAC1_RESETRMCS_Pos                   11           /*!< Reset bit device MAC layer, responsible for managing the filtering addresses of packets received */
#define MAC1_SIMRESET_Pos                    14           /*!< Reset bit random number generator transmitting device */
#define MAC1_SOFTRESET_Pos                   15           /*!< Reset bit block MAC Ethernet Controller */

/* Bit field masks: */
#define MAC1_RXENABLE_Msk                    0x00000001   /*!< Frame reception enable bit */
#define MAC1_PASSALL_Msk                     0x00000002   /*!< Bit control PASS */
#define MAC1_RXPAUSE_Msk                     0x00000004   /*!< Enable receiving a pause as part of Frame */
#define MAC1_TXPAUSE_Msk                     0x00000008   /*!< Enable transmission pauses Frame */
#define MAC1_LOOPBACK_Msk                    0x00000010   /*!< Bit activate reception of packets transmitted back through MACReceive-interface */
#define MAC1_RESETTFUN_Msk                   0x00000100   /*!< Reset bit logic devices packet */
#define MAC1_RESETTMCS_Msk                   0x00000200   /*!< Reset bit device MAC layer, responsible for managing addresses in information transmission Reset bit device MAC layer, responsible for managing addresses in information transmission */
#define MAC1_RESETRFUN_Msk                   0x00000400   /*!< Reset bit logic devices receive packets */
#define MAC1_RESETRMCS_Msk                   0x00000800   /*!< Reset bit device MAC layer, responsible for managing the filtering addresses of packets received */
#define MAC1_SIMRESET_Msk                    0x00004000   /*!< Reset bit random number generator transmitting device */
#define MAC1_SOFTRESET_Msk                   0x00008000   /*!< Reset bit block MAC Ethernet Controller */

/*-- MAC2: MAC configuration register 2 --------------------------------------*/

typedef struct {
    uint32_t FULLDUPLEX                        :1;          /*!< Mode Select bit MAC-run operations */
    uint32_t LENGTHCHECK                       :1;          /*!< Enable bit komparatsii length Frame */
    uint32_t HUGEFRAME                         :1;          /*!< Enable Bit Frame reception and transmission of arbitrary length */
    uint32_t DALAYCRC                          :1;          /*!< Enable bit adding a 4-byte CRC */
    uint32_t CRCENABLE                         :1;          /*!< Enable bit CRC inserter */
    uint32_t PADENABLE                         :1;          /*!< Bit resolution and functioning bits AUTOPAD VLANPAD */
    uint32_t VLANPAD                           :1;          /*!< Enable bit short additions Frame */
    uint32_t AUTOPAD                           :1;          /*!< Bit enable automatic determination of type Frame */
    uint32_t PUREPRE                           :1;          /*!< Bit enable validation preamble */
    uint32_t LONGPRE                           :1;          /*!< Select bit preamble length packets received */
    uint32_t Reserved0                         :2;          /*!< Reserved */
    uint32_t NOBACKOFF                         :1;          /*!< Bit parameter setting retransmission in conflict */
    uint32_t BP_NOBACKOFF                      :1;          /*!< Enable bit retransmission in conflict */
    uint32_t EXCESSDEF                         :1;          /*!< Mode Select bit packet processing */
    uint32_t Reserved1                         :17;         /*!< Reserved */
} _MAC2_bits;

/* Bit field positions: */
#define MAC2_FULLDUPLEX_Pos                  0            /*!< Mode Select bit MAC-run operations */
#define MAC2_LENGTHCHECK_Pos                 1            /*!< Enable bit komparatsii length Frame */
#define MAC2_HUGEFRAME_Pos                   2            /*!< Enable Bit Frame reception and transmission of arbitrary length */
#define MAC2_DALAYCRC_Pos                    3            /*!< Enable bit adding a 4-byte CRC */
#define MAC2_CRCENABLE_Pos                   4            /*!< Enable bit CRC inserter */
#define MAC2_PADENABLE_Pos                   5            /*!< Bit resolution and functioning bits AUTOPAD VLANPAD */
#define MAC2_VLANPAD_Pos                     6            /*!< Enable bit short additions Frame */
#define MAC2_AUTOPAD_Pos                     7            /*!< Bit enable automatic determination of type Frame */
#define MAC2_PUREPRE_Pos                     8            /*!< Bit enable validation preamble */
#define MAC2_LONGPRE_Pos                     9            /*!< Select bit preamble length packets received */
#define MAC2_NOBACKOFF_Pos                   12           /*!< Bit parameter setting retransmission in conflict */
#define MAC2_BP_NOBACKOFF_Pos                13           /*!< Enable bit retransmission in conflict */
#define MAC2_EXCESSDEF_Pos                   14           /*!< Mode Select bit packet processing */

/* Bit field masks: */
#define MAC2_FULLDUPLEX_Msk                  0x00000001   /*!< Mode Select bit MAC-run operations */
#define MAC2_LENGTHCHECK_Msk                 0x00000002   /*!< Enable bit komparatsii length Frame */
#define MAC2_HUGEFRAME_Msk                   0x00000004   /*!< Enable Bit Frame reception and transmission of arbitrary length */
#define MAC2_DALAYCRC_Msk                    0x00000008   /*!< Enable bit adding a 4-byte CRC */
#define MAC2_CRCENABLE_Msk                   0x00000010   /*!< Enable bit CRC inserter */
#define MAC2_PADENABLE_Msk                   0x00000020   /*!< Bit resolution and functioning bits AUTOPAD VLANPAD */
#define MAC2_VLANPAD_Msk                     0x00000040   /*!< Enable bit short additions Frame */
#define MAC2_AUTOPAD_Msk                     0x00000080   /*!< Bit enable automatic determination of type Frame */
#define MAC2_PUREPRE_Msk                     0x00000100   /*!< Bit enable validation preamble */
#define MAC2_LONGPRE_Msk                     0x00000200   /*!< Select bit preamble length packets received */
#define MAC2_NOBACKOFF_Msk                   0x00001000   /*!< Bit parameter setting retransmission in conflict */
#define MAC2_BP_NOBACKOFF_Msk                0x00002000   /*!< Enable bit retransmission in conflict */
#define MAC2_EXCESSDEF_Msk                   0x00004000   /*!< Mode Select bit packet processing */

/*-- IPGT: Register Back-to-Back Inter-Packet-Gap ----------------------------*/

typedef struct {
    uint32_t BTBIPG_TRANS                      :7;          /*!< Field specifying the minimum time between the end of transmission of the last nibble packet before transmission of the next packet */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _IPGT_bits;

/* Bit field positions: */
#define IPGT_BTBIPG_TRANS_Pos                0            /*!< Field specifying the minimum time between the end of transmission of the last nibble packet before transmission of the next packet */

/* Bit field masks: */
#define IPGT_BTBIPG_TRANS_Msk                0x0000007F   /*!< Field specifying the minimum time between the end of transmission of the last nibble packet before transmission of the next packet */

/*-- IPGR: Register Non-Back-to-Back Inter-Packet-Gap ------------------------*/

typedef struct {
    uint32_t NBTBIPG_TRANS_PART2               :7;          /*!< non-back-to-back Inter-Packet-Gap */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t NBTBIPG_TRANS_PART1               :7;          /*!< Option carrierSense */
    uint32_t Reserved1                         :17;         /*!< Reserved */
} _IPGR_bits;

/* Bit field positions: */
#define IPGR_NBTBIPG_TRANS_PART2_Pos         0            /*!< non-back-to-back Inter-Packet-Gap */
#define IPGR_NBTBIPG_TRANS_PART1_Pos         8            /*!< Option carrierSense */

/* Bit field masks: */
#define IPGR_NBTBIPG_TRANS_PART2_Msk         0x0000007F   /*!< non-back-to-back Inter-Packet-Gap */
#define IPGR_NBTBIPG_TRANS_PART1_Msk         0x00007F00   /*!< Option carrierSense */

/*-- CLRT: Register collision window -----------------------------------------*/

typedef struct {
    uint32_t RETRANS_MAX                       :4;
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t COLLISION_WINDOW                  :6;
    uint32_t Reserved1                         :18;         /*!< Reserved */
} _CLRT_bits;

/* Bit field positions: */
#define CLRT_RETRANS_MAX_Pos                 0
#define CLRT_COLLISION_WINDOW_Pos            8

/* Bit field masks: */
#define CLRT_RETRANS_MAX_Msk                 0x0000000F
#define CLRT_COLLISION_WINDOW_Msk            0x00003F00

/*-- MAXF: Register the upper limit size Frame -------------------------------*/

typedef struct {
    uint32_t MAXFRAME_LENGTH                   :16;         /*!< Frame maximum length */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _MAXF_bits;

/* Bit field positions: */
#define MAXF_MAXFRAME_LENGTH_Pos             0            /*!< Frame maximum length */

/* Bit field masks: */
#define MAXF_MAXFRAME_LENGTH_Msk             0x0000FFFF   /*!< Frame maximum length */

/*-- SUPP: Register PHY-support interface ------------------------------------*/

typedef struct {
    uint32_t BITMODE                           :1;          /*!< Activated mode 10BASE-T ENDEC */
    uint32_t ENBLJABBER                        :1;          /*!< Enable bit of protection against incorrect data transmission mode 10T ENDEC */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t RESET10T                          :1;          /*!< Reset bit module, which converts the MII nibble streams into a serial bit stream mode transceiver 10T */
    uint32_t LINKFAIL                          :1;          /*!< Bit resolution modeling */
    uint32_t NOCIPHER                          :1;          /*!< Select encryption */
    uint32_t FORCEQUIET                        :1;          /*!< enable encryption */
    uint32_t RESET100X                         :1;          /*!< Reset bit of the module that contains the logic of the encoder / decoder bit characters 4/5 bits */
    uint32_t SPEED                             :1;          /*!< Bits set the operating speed simplified MII */
    uint32_t Reserved1                         :2;          /*!< Reserved */
    uint32_t RESETRMII                         :1;          /*!< Reset bit simplified logic MII */
    uint32_t PHYMODE                           :1;          /*!< Bit configuration consistent with MI SMII-connected devices */
    uint32_t Reserved2                         :2;          /*!< Reserved */
    uint32_t RESETINT                          :1;          /*!< Reset bit of the physical interface */
    uint32_t Reserved3                         :16;         /*!< Reserved */
} _SUPP_bits;

/* Bit field positions: */
#define SUPP_BITMODE_Pos                     0            /*!< Activated mode 10BASE-T ENDEC */
#define SUPP_ENBLJABBER_Pos                  1            /*!< Enable bit of protection against incorrect data transmission mode 10T ENDEC */
#define SUPP_RESET10T_Pos                    3            /*!< Reset bit module, which converts the MII nibble streams into a serial bit stream mode transceiver 10T */
#define SUPP_LINKFAIL_Pos                    4            /*!< Bit resolution modeling */
#define SUPP_NOCIPHER_Pos                    5            /*!< Select encryption */
#define SUPP_FORCEQUIET_Pos                  6            /*!< enable encryption */
#define SUPP_RESET100X_Pos                   7            /*!< Reset bit of the module that contains the logic of the encoder / decoder bit characters 4/5 bits */
#define SUPP_SPEED_Pos                       8            /*!< Bits set the operating speed simplified MII */
#define SUPP_RESETRMII_Pos                   11           /*!< Reset bit simplified logic MII */
#define SUPP_PHYMODE_Pos                     12           /*!< Bit configuration consistent with MI SMII-connected devices */
#define SUPP_RESETINT_Pos                    15           /*!< Reset bit of the physical interface */

/* Bit field masks: */
#define SUPP_BITMODE_Msk                     0x00000001   /*!< Activated mode 10BASE-T ENDEC */
#define SUPP_ENBLJABBER_Msk                  0x00000002   /*!< Enable bit of protection against incorrect data transmission mode 10T ENDEC */
#define SUPP_RESET10T_Msk                    0x00000008   /*!< Reset bit module, which converts the MII nibble streams into a serial bit stream mode transceiver 10T */
#define SUPP_LINKFAIL_Msk                    0x00000010   /*!< Bit resolution modeling */
#define SUPP_NOCIPHER_Msk                    0x00000020   /*!< Select encryption */
#define SUPP_FORCEQUIET_Msk                  0x00000040   /*!< enable encryption */
#define SUPP_RESET100X_Msk                   0x00000080   /*!< Reset bit of the module that contains the logic of the encoder / decoder bit characters 4/5 bits */
#define SUPP_SPEED_Msk                       0x00000100   /*!< Bits set the operating speed simplified MII */
#define SUPP_RESETRMII_Msk                   0x00000800   /*!< Reset bit simplified logic MII */
#define SUPP_PHYMODE_Msk                     0x00001000   /*!< Bit configuration consistent with MI SMII-connected devices */
#define SUPP_RESETINT_Msk                    0x00008000   /*!< Reset bit of the physical interface */

/*-- MCFG: Configuration control register MII --------------------------------*/

typedef struct {
    uint32_t SCANINC                           :1;          /*!< Reading module addresses all MII PHY */
    uint32_t NOPRE                             :1;          /*!< Control bit preamble */
    uint32_t CLOCK_SELECT                      :3;          /*!< Selection field frequency divider */
    uint32_t Reserved0                         :10;         /*!< Reserved */
    uint32_t RESETMGMT                         :1;          /*!< Reset bit MII management module */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _MCFG_bits;

/* Bit field positions: */
#define MCFG_SCANINC_Pos                     0            /*!< Reading module addresses all MII PHY */
#define MCFG_NOPRE_Pos                       1            /*!< Control bit preamble */
#define MCFG_CLOCK_SELECT_Pos                2            /*!< Selection field frequency divider */
#define MCFG_RESETMGMT_Pos                   15           /*!< Reset bit MII management module */

/* Bit field masks: */
#define MCFG_SCANINC_Msk                     0x00000001   /*!< Reading module addresses all MII PHY */
#define MCFG_NOPRE_Msk                       0x00000002   /*!< Control bit preamble */
#define MCFG_CLOCK_SELECT_Msk                0x0000001C   /*!< Selection field frequency divider */
#define MCFG_RESETMGMT_Msk                   0x00008000   /*!< Reset bit MII management module */

/*-- MCMD: Command register MII ----------------------------------------------*/

typedef struct {
    uint32_t READ                              :1;          /*!< Single execution of read cycles */
    uint32_t SCAN                              :1;          /*!< Continuous performance of read cycles */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _MCMD_bits;

/* Bit field positions: */
#define MCMD_READ_Pos                        0            /*!< Single execution of read cycles */
#define MCMD_SCAN_Pos                        1            /*!< Continuous performance of read cycles */

/* Bit field masks: */
#define MCMD_READ_Msk                        0x00000001   /*!< Single execution of read cycles */
#define MCMD_SCAN_Msk                        0x00000002   /*!< Continuous performance of read cycles */

/*-- MADR: MII address register ----------------------------------------------*/

typedef struct {
    uint32_t REG_ADDRESS                       :5;          /*!< The 5-bit register address PHY-device */
    uint32_t Reserved0                         :3;          /*!< Reserved */
    uint32_t PHY_ADDRESS                       :5;          /*!< The 5-bit address PHY-device */
    uint32_t Reserved1                         :19;         /*!< Reserved */
} _MADR_bits;

/* Bit field positions: */
#define MADR_REG_ADDRESS_Pos                 0            /*!< The 5-bit register address PHY-device */
#define MADR_PHY_ADDRESS_Pos                 8            /*!< The 5-bit address PHY-device */

/* Bit field masks: */
#define MADR_REG_ADDRESS_Msk                 0x0000001F   /*!< The 5-bit register address PHY-device */
#define MADR_PHY_ADDRESS_Msk                 0x00001F00   /*!< The 5-bit address PHY-device */

/*-- MWTD: Register data written in MII --------------------------------------*/

typedef struct {
    uint32_t WRITE_DATA                        :16;         /*!< Field data */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _MWTD_bits;

/* Bit field positions: */
#define MWTD_WRITE_DATA_Pos                  0            /*!< Field data */

/* Bit field masks: */
#define MWTD_WRITE_DATA_Msk                  0x0000FFFF   /*!< Field data */

/*-- MRDD: Register read data from MII ---------------------------------------*/

typedef struct {
    uint32_t READ_DATA                         :16;         /*!< After reading the control module of the MII PHY-device */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _MRDD_bits;

/* Bit field positions: */
#define MRDD_READ_DATA_Pos                   0            /*!< After reading the control module of the MII PHY-device */

/* Bit field masks: */
#define MRDD_READ_DATA_Msk                   0x0000FFFF   /*!< After reading the control module of the MII PHY-device */

/*-- MIND: MII status register flags -----------------------------------------*/

typedef struct {
    uint32_t BUSY                              :1;          /*!< Flag continuing cycle of the read / write control MII */
    uint32_t SCAN                              :1;          /*!< Flag ongoing scan operation (continue reading cycles control MII) */
    uint32_t NOTVALID                          :1;          /*!< Flag unfinished read cycle MII (inaccessibility of data to be read) */
    uint32_t LINKFAIL                          :1;          /*!< Failure flag control MII (PHY device management) */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _MIND_bits;

/* Bit field positions: */
#define MIND_BUSY_Pos                        0            /*!< Flag continuing cycle of the read / write control MII */
#define MIND_SCAN_Pos                        1            /*!< Flag ongoing scan operation (continue reading cycles control MII) */
#define MIND_NOTVALID_Pos                    2            /*!< Flag unfinished read cycle MII (inaccessibility of data to be read) */
#define MIND_LINKFAIL_Pos                    3            /*!< Failure flag control MII (PHY device management) */

/* Bit field masks: */
#define MIND_BUSY_Msk                        0x00000001   /*!< Flag continuing cycle of the read / write control MII */
#define MIND_SCAN_Msk                        0x00000002   /*!< Flag ongoing scan operation (continue reading cycles control MII) */
#define MIND_NOTVALID_Msk                    0x00000004   /*!< Flag unfinished read cycle MII (inaccessibility of data to be read) */
#define MIND_LINKFAIL_Msk                    0x00000008   /*!< Failure flag control MII (PHY device management) */

/*-- SMII: MII controller status register ------------------------------------*/

typedef struct {
    uint32_t SPEED                             :1;          /*!< Speed Indicator */
    uint32_t DUPLEX                            :1;          /*!< Mode indicator */
    uint32_t LINK                              :1;          /*!< Status Indicator LINK */
    uint32_t JABBER                            :1;          /*!< Flag of conditions Jabber */
    uint32_t CLASH                             :1;          /*!< Flag of the selected mode */
    uint32_t Reserved0                         :27;         /*!< Reserved */
} _SMII_bits;

/* Bit field positions: */
#define SMII_SPEED_Pos                       0            /*!< Speed Indicator */
#define SMII_DUPLEX_Pos                      1            /*!< Mode indicator */
#define SMII_LINK_Pos                        2            /*!< Status Indicator LINK */
#define SMII_JABBER_Pos                      3            /*!< Flag of conditions Jabber */
#define SMII_CLASH_Pos                       4            /*!< Flag of the selected mode */

/* Bit field masks: */
#define SMII_SPEED_Msk                       0x00000001   /*!< Speed Indicator */
#define SMII_DUPLEX_Msk                      0x00000002   /*!< Mode indicator */
#define SMII_LINK_Msk                        0x00000004   /*!< Status Indicator LINK */
#define SMII_JABBER_Msk                      0x00000008   /*!< Flag of conditions Jabber */
#define SMII_CLASH_Msk                       0x00000010   /*!< Flag of the selected mode */

/*-- SA0: Station address register 0 -----------------------------------------*/

typedef struct {
    uint32_t STATION_ADDRESS_2B                :8;          /*!< 2nd octet of the station address */
    uint32_t STATION_ADDRESS_1B                :8;          /*!< 1st octet of the station address */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SA0_bits;

/* Bit field positions: */
#define SA0_STATION_ADDRESS_2B_Pos           0            /*!< 2nd octet of the station address */
#define SA0_STATION_ADDRESS_1B_Pos           8            /*!< 1st octet of the station address */

/* Bit field masks: */
#define SA0_STATION_ADDRESS_2B_Msk           0x000000FF   /*!< 2nd octet of the station address */
#define SA0_STATION_ADDRESS_1B_Msk           0x0000FF00   /*!< 1st octet of the station address */

/*-- SA1: Station address register 1 -----------------------------------------*/

typedef struct {
    uint32_t STATION_ADDRESS_4B                :8;          /*!< 4th octet of the station address */
    uint32_t STATION_ADDRESS_3B                :8;          /*!< The third octet of the station address */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SA1_bits;

/* Bit field positions: */
#define SA1_STATION_ADDRESS_4B_Pos           0            /*!< 4th octet of the station address */
#define SA1_STATION_ADDRESS_3B_Pos           8            /*!< The third octet of the station address */

/* Bit field masks: */
#define SA1_STATION_ADDRESS_4B_Msk           0x000000FF   /*!< 4th octet of the station address */
#define SA1_STATION_ADDRESS_3B_Msk           0x0000FF00   /*!< The third octet of the station address */

/*-- SA2: Station address register 2 -----------------------------------------*/

typedef struct {
    uint32_t STATION_ADDRESS_6B                :8;          /*!< 6th octet station */
    uint32_t STATION_ADDRESS_5B                :8;          /*!< 5th octet station */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SA2_bits;

/* Bit field positions: */
#define SA2_STATION_ADDRESS_6B_Pos           0            /*!< 6th octet station */
#define SA2_STATION_ADDRESS_5B_Pos           8            /*!< 5th octet station */

/* Bit field masks: */
#define SA2_STATION_ADDRESS_6B_Msk           0x000000FF   /*!< 6th octet station */
#define SA2_STATION_ADDRESS_5B_Msk           0x0000FF00   /*!< 5th octet station */

/*-- DMATxCtrl: Reception control register -----------------------------------*/

typedef struct {
    uint32_t RXENABLE                          :1;
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _DMATxCtrl_bits;

/* Bit field positions: */
#define DMATxCtrl_RXENABLE_Pos               0

/* Bit field masks: */
#define DMATxCtrl_RXENABLE_Msk               0x00000001

/*-- Register map for ETHERNET peripheral ------------------------------------*/

typedef struct {
    union {                                                 /*!< MAC configuration register 1 */
        __IO uint32_t MAC1;                                   /*!< MAC1    : type used for word access */
        __IO _MAC1_bits MAC1_bit;                             /*!< MAC1_bit: structure used for bit access */
    };
    union {                                                 /*!< MAC configuration register 2 */
        __IO uint32_t MAC2;                                   /*!< MAC2    : type used for word access */
        __IO _MAC2_bits MAC2_bit;                             /*!< MAC2_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Back-to-Back Inter-Packet-Gap */
        __IO uint32_t IPGT;                                   /*!< IPGT    : type used for word access */
        __IO _IPGT_bits IPGT_bit;                             /*!< IPGT_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Non-Back-to-Back Inter-Packet-Gap */
        __IO uint32_t IPGR;                                   /*!< IPGR    : type used for word access */
        __IO _IPGR_bits IPGR_bit;                             /*!< IPGR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register collision window */
        __IO uint32_t CLRT;                                   /*!< CLRT    : type used for word access */
        __IO _CLRT_bits CLRT_bit;                             /*!< CLRT_bit: structure used for bit access */
    };
    union {                                                 /*!< Register the upper limit size Frame */
        __IO uint32_t MAXF;                                   /*!< MAXF    : type used for word access */
        __IO _MAXF_bits MAXF_bit;                             /*!< MAXF_bit: structure used for bit access */
    };
    union {                                                 /*!< Register PHY-support interface */
        __IO uint32_t SUPP;                                   /*!< SUPP    : type used for word access */
        __IO _SUPP_bits SUPP_bit;                             /*!< SUPP_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Configuration control register MII */
        __IO uint32_t MCFG;                                   /*!< MCFG    : type used for word access */
        __IO _MCFG_bits MCFG_bit;                             /*!< MCFG_bit: structure used for bit access */
    };
    union {                                                 /*!< Command register MII */
        __IO uint32_t MCMD;                                   /*!< MCMD    : type used for word access */
        __IO _MCMD_bits MCMD_bit;                             /*!< MCMD_bit: structure used for bit access */
    };
    union {                                                 /*!< MII address register */
        __IO uint32_t MADR;                                   /*!< MADR    : type used for word access */
        __IO _MADR_bits MADR_bit;                             /*!< MADR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register data written in MII */
        __O  uint32_t MWTD;                                   /*!< MWTD    : type used for word access */
        __O  _MWTD_bits MWTD_bit;                             /*!< MWTD_bit: structure used for bit access */
    };
    union {                                                 /*!< Register read data from MII */
        __I  uint32_t MRDD;                                   /*!< MRDD    : type used for word access */
        __I  _MRDD_bits MRDD_bit;                             /*!< MRDD_bit: structure used for bit access */
    };
    union {                                                 /*!< MII status register flags */
        __I  uint32_t MIND;                                   /*!< MIND    : type used for word access */
        __I  _MIND_bits MIND_bit;                             /*!< MIND_bit: structure used for bit access */
    };
    union {                                                 /*!< MII controller status register */
        __I  uint32_t SMII;                                   /*!< SMII    : type used for word access */
        __I  _SMII_bits SMII_bit;                             /*!< SMII_bit: structure used for bit access */
    };
    uint32_t Reserved1;                                     /*!< Reserved */
    union {                                                 /*!< Station address register 0 */
        __IO uint32_t SA0;                                    /*!< SA0    : type used for word access */
        __IO _SA0_bits SA0_bit;                               /*!< SA0_bit: structure used for bit access */
    };
    union {                                                 /*!< Station address register 1 */
        __IO uint32_t SA1;                                    /*!< SA1    : type used for word access */
        __IO _SA1_bits SA1_bit;                               /*!< SA1_bit: structure used for bit access */
    };
    union {                                                 /*!< Station address register 2 */
        __IO uint32_t SA2;                                    /*!< SA2    : type used for word access */
        __IO _SA2_bits SA2_bit;                               /*!< SA2_bit: structure used for bit access */
    };
    uint32_t Reserved2[77];                                 /*!< Reserved */
    union {                                                 /*!< Reception control register */
        __IO uint32_t DMATxCtrl;                              /*!< DMATxCtrl    : type used for word access */
        __IO _DMATxCtrl_bits DMATxCtrl_bit;                   /*!< DMATxCtrl_bit: structure used for bit access */
    };
} NT_ETHERNET_TypeDef;

/******************************************************************************/
/*                      USB Host controller registers                         */
/******************************************************************************/

/*-- VERSION: Host controller USB version register ---------------------------*/

typedef struct {
    uint32_t VERSION                           :8;          /*!< This addressable location holds the version No. of this implementation of the embedded host controller */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _VERSION_bits;

/* Bit field positions: */
#define VERSION_VERSION_Pos                  0            /*!< This addressable location holds the version No. of this implementation of the embedded host controller */

/* Bit field masks: */
#define VERSION_VERSION_Msk                  0x000000FF   /*!< This addressable location holds the version No. of this implementation of the embedded host controller */

/*-- USBCMD_STS_INTR: HC Control register 1 ----------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t OUTSPACEINTEN                     :1;          /*!< Hardware interrupt enable bit */
    uint32_t INDATAREADYINTEN                  :1;          /*!< Enable interrupt InDataReady */
    uint32_t FRAMESOFINTEN                     :1;          /*!< Enable interrupt Frame sof */
    uint32_t MICROFRAMEINTEN                   :1;          /*!< Enable interrupt Microframe soa */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t PORTCHANGINTEN                    :1;          /*!< Enable interrupt Port change detect */
    uint32_t Reserved2                         :3;          /*!< Reserved */
    uint32_t FRAMESOFINT                       :1;          /*!< Interrupt flag Framesof */
    uint32_t MICROFRAMEINT                     :1;          /*!< Interrupt flag Microframesof */
    uint32_t Reserved3                         :1;          /*!< Reserved */
    uint32_t PORTCHANGINT                      :1;          /*!< Indicate the any port has a change bit transmission from 0 to 1 */
    uint32_t Reserved4                         :1;          /*!< Reserved */
    uint32_t HCHALTED                          :1;          /*!< Indicator controller stop */
    uint32_t RUN_STOP                          :1;          /*!< Perfoms data */
    uint32_t HOSTRESET                         :1;          /*!< Initial state of USB-controller */
    uint32_t CONFIGFLAG                        :1;          /*!< Configurate flag */
    uint32_t Reserved5                         :5;          /*!< Reserved */
    uint32_t INT_SPACE                         :8;          /*!< Control Interrupt intervals */
} _USBCMD_STS_INTR_bits;

/* Bit field positions: */
#define USBCMD_STS_INTR_OUTSPACEINTEN_Pos    1            /*!< Hardware interrupt enable bit */
#define USBCMD_STS_INTR_INDATAREADYINTEN_Pos 2            /*!< Enable interrupt InDataReady */
#define USBCMD_STS_INTR_FRAMESOFINTEN_Pos    3            /*!< Enable interrupt Frame sof */
#define USBCMD_STS_INTR_MICROFRAMEINTEN_Pos  4            /*!< Enable interrupt Microframe soa */
#define USBCMD_STS_INTR_PORTCHANGINTEN_Pos   6            /*!< Enable interrupt Port change detect */
#define USBCMD_STS_INTR_FRAMESOFINT_Pos      10           /*!< Interrupt flag Framesof */
#define USBCMD_STS_INTR_MICROFRAMEINT_Pos    11           /*!< Interrupt flag Microframesof */
#define USBCMD_STS_INTR_PORTCHANGINT_Pos     13           /*!< Indicate the any port has a change bit transmission from 0 to 1 */
#define USBCMD_STS_INTR_HCHALTED_Pos         15           /*!< Indicator controller stop */
#define USBCMD_STS_INTR_RUN_STOP_Pos         16           /*!< Perfoms data */
#define USBCMD_STS_INTR_HOSTRESET_Pos        17           /*!< Initial state of USB-controller */
#define USBCMD_STS_INTR_CONFIGFLAG_Pos       18           /*!< Configurate flag */
#define USBCMD_STS_INTR_INT_SPACE_Pos        24           /*!< Control Interrupt intervals */

/* Bit field masks: */
#define USBCMD_STS_INTR_OUTSPACEINTEN_Msk    0x00000002   /*!< Hardware interrupt enable bit */
#define USBCMD_STS_INTR_INDATAREADYINTEN_Msk 0x00000004   /*!< Enable interrupt InDataReady */
#define USBCMD_STS_INTR_FRAMESOFINTEN_Msk    0x00000008   /*!< Enable interrupt Frame sof */
#define USBCMD_STS_INTR_MICROFRAMEINTEN_Msk  0x00000010   /*!< Enable interrupt Microframe soa */
#define USBCMD_STS_INTR_PORTCHANGINTEN_Msk   0x00000040   /*!< Enable interrupt Port change detect */
#define USBCMD_STS_INTR_FRAMESOFINT_Msk      0x00000400   /*!< Interrupt flag Framesof */
#define USBCMD_STS_INTR_MICROFRAMEINT_Msk    0x00000800   /*!< Interrupt flag Microframesof */
#define USBCMD_STS_INTR_PORTCHANGINT_Msk     0x00002000   /*!< Indicate the any port has a change bit transmission from 0 to 1 */
#define USBCMD_STS_INTR_HCHALTED_Msk         0x00008000   /*!< Indicator controller stop */
#define USBCMD_STS_INTR_RUN_STOP_Msk         0x00010000   /*!< Perfoms data */
#define USBCMD_STS_INTR_HOSTRESET_Msk        0x00020000   /*!< Initial state of USB-controller */
#define USBCMD_STS_INTR_CONFIGFLAG_Msk       0x00040000   /*!< Configurate flag */
#define USBCMD_STS_INTR_INT_SPACE_Msk        0xFF000000   /*!< Control Interrupt intervals */

/*-- FRAME_REG: Register version ---------------------------------------------*/

typedef struct {
    uint32_t FRAMEINDEX                        :14;         /*!< Field of the countdown */
    uint32_t Reserved0                         :2;          /*!< Reserved */
    uint32_t FRAMELENGTH                       :6;          /*!< Micro frame length */
    uint32_t Reserved1                         :10;         /*!< Reserved */
} _FRAME_REG_bits;

/* Bit field positions: */
#define FRAME_REG_FRAMEINDEX_Pos             0            /*!< Field of the countdown */
#define FRAME_REG_FRAMELENGTH_Pos            16           /*!< Micro frame length */

/* Bit field masks: */
#define FRAME_REG_FRAMEINDEX_Msk             0x00003FFF   /*!< Field of the countdown */
#define FRAME_REG_FRAMELENGTH_Msk            0x003F0000   /*!< Micro frame length */

/*-- PORT_STS: HC Control register 2 -----------------------------------------*/

typedef struct {
    uint32_t PORTCONNECT                       :1;          /*!< Indicator device connection */
    uint32_t PORTCONCHNG                       :1;          /*!< Indicator status change bit PORTCONNECT */
    uint32_t PORTENABLE                        :1;          /*!< Enable bit port */
    uint32_t PORTEN_DISCHNG                    :1;          /*!< Indicator status change bit PORTENABLE */
    uint32_t PORTRESET                         :1;          /*!< Setting bit starts the reset procedure in accordance with USB2.0 */
    uint32_t LINESTATE                         :2;          /*!< Field reflect the current logic level signals D + and D- */
    uint32_t PORTOWNER0                        :1;          /*!< Bit with bit PORTOWNER1 assignment of the port speed */
    uint32_t SUSPEND                           :1;          /*!< Bit suspension of work */
    uint32_t FORCEPORTRESUME                   :1;          /*!< Flag resume */
    uint32_t XCVRRESET                         :1;          /*!< Reset bit transceiver */
    uint32_t XCVRRESLEVEL                      :1;          /*!< Bit setting active level reset signal transceiver */
    uint32_t XCVRSUSPEND                       :1;
    uint32_t TESTJ                             :1;          /*!< keep in line condition HS J */
    uint32_t TESTK                             :1;          /*!< Enable keep in line condition HS K */
    uint32_t TESTSEO                           :1;          /*!< Enable keep in line condition SEO */
    uint32_t TESTFORCEEN                       :1;          /*!< Enable transmit packets looped */
    uint32_t TESTPKT                           :1;          /*!< Bits select the standard USB */
    uint32_t PORTOWNER1                        :1;          /*!< Indicator low-speed devices */
    uint32_t Reserved0                         :13;         /*!< Reserved */
} _PORT_STS_bits;

/* Bit field positions: */
#define PORT_STS_PORTCONNECT_Pos             0            /*!< Indicator device connection */
#define PORT_STS_PORTCONCHNG_Pos             1            /*!< Indicator status change bit PORTCONNECT */
#define PORT_STS_PORTENABLE_Pos              2            /*!< Enable bit port */
#define PORT_STS_PORTEN_DISCHNG_Pos          3            /*!< Indicator status change bit PORTENABLE */
#define PORT_STS_PORTRESET_Pos               4            /*!< Setting bit starts the reset procedure in accordance with USB2.0 */
#define PORT_STS_LINESTATE_Pos               5            /*!< Field reflect the current logic level signals D + and D- */
#define PORT_STS_PORTOWNER0_Pos              7            /*!< Bit with bit PORTOWNER1 assignment of the port speed */
#define PORT_STS_SUSPEND_Pos                 8            /*!< Bit suspension of work */
#define PORT_STS_FORCEPORTRESUME_Pos         9            /*!< Flag resume */
#define PORT_STS_XCVRRESET_Pos               10           /*!< Reset bit transceiver */
#define PORT_STS_XCVRRESLEVEL_Pos            11           /*!< Bit setting active level reset signal transceiver */
#define PORT_STS_XCVRSUSPEND_Pos             12
#define PORT_STS_TESTJ_Pos                   13           /*!< keep in line condition HS J */
#define PORT_STS_TESTK_Pos                   14           /*!< Enable keep in line condition HS K */
#define PORT_STS_TESTSEO_Pos                 15           /*!< Enable keep in line condition SEO */
#define PORT_STS_TESTFORCEEN_Pos             16           /*!< Enable transmit packets looped */
#define PORT_STS_TESTPKT_Pos                 17           /*!< Bits select the standard USB */
#define PORT_STS_PORTOWNER1_Pos              18           /*!< Indicator low-speed devices */

/* Bit field masks: */
#define PORT_STS_PORTCONNECT_Msk             0x00000001   /*!< Indicator device connection */
#define PORT_STS_PORTCONCHNG_Msk             0x00000002   /*!< Indicator status change bit PORTCONNECT */
#define PORT_STS_PORTENABLE_Msk              0x00000004   /*!< Enable bit port */
#define PORT_STS_PORTEN_DISCHNG_Msk          0x00000008   /*!< Indicator status change bit PORTENABLE */
#define PORT_STS_PORTRESET_Msk               0x00000010   /*!< Setting bit starts the reset procedure in accordance with USB2.0 */
#define PORT_STS_LINESTATE_Msk               0x00000060   /*!< Field reflect the current logic level signals D + and D- */
#define PORT_STS_PORTOWNER0_Msk              0x00000080   /*!< Bit with bit PORTOWNER1 assignment of the port speed */
#define PORT_STS_SUSPEND_Msk                 0x00000100   /*!< Bit suspension of work */
#define PORT_STS_FORCEPORTRESUME_Msk         0x00000200   /*!< Flag resume */
#define PORT_STS_XCVRRESET_Msk               0x00000400   /*!< Reset bit transceiver */
#define PORT_STS_XCVRRESLEVEL_Msk            0x00000800   /*!< Bit setting active level reset signal transceiver */
#define PORT_STS_XCVRSUSPEND_Msk             0x00001000
#define PORT_STS_TESTJ_Msk                   0x00002000   /*!< keep in line condition HS J */
#define PORT_STS_TESTK_Msk                   0x00004000   /*!< Enable keep in line condition HS K */
#define PORT_STS_TESTSEO_Msk                 0x00008000   /*!< Enable keep in line condition SEO */
#define PORT_STS_TESTFORCEEN_Msk             0x00010000   /*!< Enable transmit packets looped */
#define PORT_STS_TESTPKT_Msk                 0x00020000   /*!< Bits select the standard USB */
#define PORT_STS_PORTOWNER1_Msk              0x00040000   /*!< Indicator low-speed devices */

/*-- USB_PKT_FIELDS_A: Transmission Control register A -----------------------*/

typedef struct {
    uint32_t EP_ADDR                           :4;          /*!< Buffer address field that has received a transfer */
    uint32_t PID                               :2;          /*!< Field of tags that should be sent to the downstream */
    uint32_t ENDPOINTTYPE                      :2;          /*!< Buffer type */
    uint32_t DEV_ADDR                          :7;          /*!< Address field that is accessed by the current operation */
    uint32_t IOC                               :1;          /*!< Bits specify the behavior of the host controller when transfer */
    uint32_t PORT_NUMBER                       :7;          /*!< Field router port number to which the device is connected FS / LS */
    uint32_t DATATOGGLE                        :1;          /*!< Identifier field data to be used in the current transmission */
    uint32_t HUB_ADDRESS                       :7;          /*!< The address field of the router to which the transfer of the type faces 'Split' */
    uint32_t ENTRANSFER                        :1;          /*!< Beginning of the current permission bits of data */
} _USB_PKT_FIELDS_A_bits;

/* Bit field positions: */
#define USB_PKT_FIELDS_A_EP_ADDR_Pos         0            /*!< Buffer address field that has received a transfer */
#define USB_PKT_FIELDS_A_PID_Pos             4            /*!< Field of tags that should be sent to the downstream */
#define USB_PKT_FIELDS_A_ENDPOINTTYPE_Pos    6            /*!< Buffer type */
#define USB_PKT_FIELDS_A_DEV_ADDR_Pos        8            /*!< Address field that is accessed by the current operation */
#define USB_PKT_FIELDS_A_IOC_Pos             15           /*!< Bits specify the behavior of the host controller when transfer */
#define USB_PKT_FIELDS_A_PORT_NUMBER_Pos     16           /*!< Field router port number to which the device is connected FS / LS */
#define USB_PKT_FIELDS_A_DATATOGGLE_Pos      23           /*!< Identifier field data to be used in the current transmission */
#define USB_PKT_FIELDS_A_HUB_ADDRESS_Pos     24           /*!< The address field of the router to which the transfer of the type faces 'Split' */
#define USB_PKT_FIELDS_A_ENTRANSFER_Pos      31           /*!< Beginning of the current permission bits of data */

/* Bit field masks: */
#define USB_PKT_FIELDS_A_EP_ADDR_Msk         0x0000000F   /*!< Buffer address field that has received a transfer */
#define USB_PKT_FIELDS_A_PID_Msk             0x00000030   /*!< Field of tags that should be sent to the downstream */
#define USB_PKT_FIELDS_A_ENDPOINTTYPE_Msk    0x000000C0   /*!< Buffer type */
#define USB_PKT_FIELDS_A_DEV_ADDR_Msk        0x00007F00   /*!< Address field that is accessed by the current operation */
#define USB_PKT_FIELDS_A_IOC_Msk             0x00008000   /*!< Bits specify the behavior of the host controller when transfer */
#define USB_PKT_FIELDS_A_PORT_NUMBER_Msk     0x007F0000   /*!< Field router port number to which the device is connected FS / LS */
#define USB_PKT_FIELDS_A_DATATOGGLE_Msk      0x00800000   /*!< Identifier field data to be used in the current transmission */
#define USB_PKT_FIELDS_A_HUB_ADDRESS_Msk     0x7F000000   /*!< The address field of the router to which the transfer of the type faces 'Split' */
#define USB_PKT_FIELDS_A_ENTRANSFER_Msk      0x80000000   /*!< Beginning of the current permission bits of data */

/*-- USB_PKT_FIELDS_B: Transmission Control register B -----------------------*/

typedef struct {
    uint32_t MPS                               :11;         /*!< Maximum packet size in the downstream */
    uint32_t ABORTTRANSFER                     :1;          /*!< Bit the current operation */
    uint32_t XFRLEVEL                          :1;
    uint32_t IGNORSHORTPKT                     :1;          /*!< Enable bit ignore short packets */
    uint32_t EFIELD                            :1;          /*!< Bit transmission control */
    uint32_t SPEED                             :1;          /*!< Indicator the type of device connected to the router and port */
    uint32_t COMPLETESPLIT                     :1;          /*!< Complete bit operations such as Split */
    uint32_t STARTSPLIT                        :1;          /*!< Bit run operations such as Split */
    uint32_t Reserved0                         :2;          /*!< Reserved */
    uint32_t MAX_ERR_CNT                       :4;          /*!< Field the maximum number of consecutive transmission errors */
    uint32_t MAX_NAK_CNT                       :4;          /*!< Maximum number of labels NAK, which is allowed to accept the host. */
    uint32_t SLAVEMODE                         :1;          /*!< Enable slave mode */
    uint32_t Reserved1                         :2;          /*!< Reserved */
    uint32_t OHCIENABLE                        :1;          /*!< Demand indicator */
} _USB_PKT_FIELDS_B_bits;

/* Bit field positions: */
#define USB_PKT_FIELDS_B_MPS_Pos             0            /*!< Maximum packet size in the downstream */
#define USB_PKT_FIELDS_B_ABORTTRANSFER_Pos   11           /*!< Bit the current operation */
#define USB_PKT_FIELDS_B_XFRLEVEL_Pos        12
#define USB_PKT_FIELDS_B_IGNORSHORTPKT_Pos   13           /*!< Enable bit ignore short packets */
#define USB_PKT_FIELDS_B_EFIELD_Pos          14           /*!< Bit transmission control */
#define USB_PKT_FIELDS_B_SPEED_Pos           15           /*!< Indicator the type of device connected to the router and port */
#define USB_PKT_FIELDS_B_COMPLETESPLIT_Pos   16           /*!< Complete bit operations such as Split */
#define USB_PKT_FIELDS_B_STARTSPLIT_Pos      17           /*!< Bit run operations such as Split */
#define USB_PKT_FIELDS_B_MAX_ERR_CNT_Pos     20           /*!< Field the maximum number of consecutive transmission errors */
#define USB_PKT_FIELDS_B_MAX_NAK_CNT_Pos     24           /*!< Maximum number of labels NAK, which is allowed to accept the host. */
#define USB_PKT_FIELDS_B_SLAVEMODE_Pos       28           /*!< Enable slave mode */
#define USB_PKT_FIELDS_B_OHCIENABLE_Pos      31           /*!< Demand indicator */

/* Bit field masks: */
#define USB_PKT_FIELDS_B_MPS_Msk             0x000007FF   /*!< Maximum packet size in the downstream */
#define USB_PKT_FIELDS_B_ABORTTRANSFER_Msk   0x00000800   /*!< Bit the current operation */
#define USB_PKT_FIELDS_B_XFRLEVEL_Msk        0x00001000
#define USB_PKT_FIELDS_B_IGNORSHORTPKT_Msk   0x00002000   /*!< Enable bit ignore short packets */
#define USB_PKT_FIELDS_B_EFIELD_Msk          0x00004000   /*!< Bit transmission control */
#define USB_PKT_FIELDS_B_SPEED_Msk           0x00008000   /*!< Indicator the type of device connected to the router and port */
#define USB_PKT_FIELDS_B_COMPLETESPLIT_Msk   0x00010000   /*!< Complete bit operations such as Split */
#define USB_PKT_FIELDS_B_STARTSPLIT_Msk      0x00020000   /*!< Bit run operations such as Split */
#define USB_PKT_FIELDS_B_MAX_ERR_CNT_Msk     0x00F00000   /*!< Field the maximum number of consecutive transmission errors */
#define USB_PKT_FIELDS_B_MAX_NAK_CNT_Msk     0x0F000000   /*!< Maximum number of labels NAK, which is allowed to accept the host. */
#define USB_PKT_FIELDS_B_SLAVEMODE_Msk       0x10000000   /*!< Enable slave mode */
#define USB_PKT_FIELDS_B_OHCIENABLE_Msk      0x80000000   /*!< Demand indicator */

/*-- TBT: Transmission data register -----------------------------------------*/

typedef struct {
    uint32_t TOTALBTRANS                       :20;         /*!< Total Byte transfer */
    uint32_t Reserved0                         :12;         /*!< Reserved */
} _TBT_bits;

/* Bit field positions: */
#define TBT_TOTALBTRANS_Pos                  0            /*!< Total Byte transfer */

/* Bit field masks: */
#define TBT_TOTALBTRANS_Msk                  0x000FFFFF   /*!< Total Byte transfer */

/*-- USB_STATUS: XFR STATUS register -----------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t UNEXPPID                          :1;          /*!< Receiving flag PID, different from the expected */
    uint32_t SHORTPKT                          :1;          /*!< Flag receiving fewer bits than indicated in the register TOTAL_BYTES_TRANS TBT */
    uint32_t ERRPID                            :1;          /*!< Flag to receive a response to the label ERROR PID Complete Split */
    uint32_t OUTSPACEVAILABLE                  :1;          /*!< Request flag outbound operation with an empty data buffer */
    uint32_t INDATAREADY                       :1;          /*!< Flag successful completion of an inbound operation */
    uint32_t PIDERR                            :1;          /*!< Receiving flag incorrect PID */
    uint32_t CRCERR                            :1;          /*!< CRC error in receiving data */
    uint32_t TOGGLEERR                         :1;          /*!< Receiving flag bit wrong DATATOGGLE */
    uint32_t TIMEOUT                           :1;          /*!< Flag timeout response */
    uint32_t NYET                              :1;          /*!< Receiving flag tags NYET */
    uint32_t NAK                               :1;          /*!< Receiving flag tags NAK */
    uint32_t PAGECROSS                         :1;          /*!< Flag requirements transmission pagecross */
    uint32_t PING                              :1;          /*!< Flag response */
    uint32_t XACTNERR                          :1;
    uint32_t BABBLE                            :1;          /*!< Flag of finding the system in state Packet Babble */
    uint32_t HALTED                            :1;          /*!< Flag of finding the system in state Stall or Packet Babble */
    uint32_t USBINT                            :1;          /*!< Flag of the last operation */
    uint32_t USBERRINT                         :1;          /*!< Error flag that indicates that the last operation was completed due to an erroneous bus state */
    uint32_t Reserved1                         :6;          /*!< Reserved */
} _USB_STATUS_bits;

/* Bit field positions: */
#define USB_STATUS_UNEXPPID_Pos              8            /*!< Receiving flag PID, different from the expected */
#define USB_STATUS_SHORTPKT_Pos              9            /*!< Flag receiving fewer bits than indicated in the register TOTAL_BYTES_TRANS TBT */
#define USB_STATUS_ERRPID_Pos                10           /*!< Flag to receive a response to the label ERROR PID Complete Split */
#define USB_STATUS_OUTSPACEVAILABLE_Pos      11           /*!< Request flag outbound operation with an empty data buffer */
#define USB_STATUS_INDATAREADY_Pos           12           /*!< Flag successful completion of an inbound operation */
#define USB_STATUS_PIDERR_Pos                13           /*!< Receiving flag incorrect PID */
#define USB_STATUS_CRCERR_Pos                14           /*!< CRC error in receiving data */
#define USB_STATUS_TOGGLEERR_Pos             15           /*!< Receiving flag bit wrong DATATOGGLE */
#define USB_STATUS_TIMEOUT_Pos               16           /*!< Flag timeout response */
#define USB_STATUS_NYET_Pos                  17           /*!< Receiving flag tags NYET */
#define USB_STATUS_NAK_Pos                   18           /*!< Receiving flag tags NAK */
#define USB_STATUS_PAGECROSS_Pos             19           /*!< Flag requirements transmission pagecross */
#define USB_STATUS_PING_Pos                  20           /*!< Flag response */
#define USB_STATUS_XACTNERR_Pos              21
#define USB_STATUS_BABBLE_Pos                22           /*!< Flag of finding the system in state Packet Babble */
#define USB_STATUS_HALTED_Pos                23           /*!< Flag of finding the system in state Stall or Packet Babble */
#define USB_STATUS_USBINT_Pos                24           /*!< Flag of the last operation */
#define USB_STATUS_USBERRINT_Pos             25           /*!< Error flag that indicates that the last operation was completed due to an erroneous bus state */

/* Bit field masks: */
#define USB_STATUS_UNEXPPID_Msk              0x00000100   /*!< Receiving flag PID, different from the expected */
#define USB_STATUS_SHORTPKT_Msk              0x00000200   /*!< Flag receiving fewer bits than indicated in the register TOTAL_BYTES_TRANS TBT */
#define USB_STATUS_ERRPID_Msk                0x00000400   /*!< Flag to receive a response to the label ERROR PID Complete Split */
#define USB_STATUS_OUTSPACEVAILABLE_Msk      0x00000800   /*!< Request flag outbound operation with an empty data buffer */
#define USB_STATUS_INDATAREADY_Msk           0x00001000   /*!< Flag successful completion of an inbound operation */
#define USB_STATUS_PIDERR_Msk                0x00002000   /*!< Receiving flag incorrect PID */
#define USB_STATUS_CRCERR_Msk                0x00004000   /*!< CRC error in receiving data */
#define USB_STATUS_TOGGLEERR_Msk             0x00008000   /*!< Receiving flag bit wrong DATATOGGLE */
#define USB_STATUS_TIMEOUT_Msk               0x00010000   /*!< Flag timeout response */
#define USB_STATUS_NYET_Msk                  0x00020000   /*!< Receiving flag tags NYET */
#define USB_STATUS_NAK_Msk                   0x00040000   /*!< Receiving flag tags NAK */
#define USB_STATUS_PAGECROSS_Msk             0x00080000   /*!< Flag requirements transmission pagecross */
#define USB_STATUS_PING_Msk                  0x00100000   /*!< Flag response */
#define USB_STATUS_XACTNERR_Msk              0x00200000
#define USB_STATUS_BABBLE_Msk                0x00400000   /*!< Flag of finding the system in state Packet Babble */
#define USB_STATUS_HALTED_Msk                0x00800000   /*!< Flag of finding the system in state Stall or Packet Babble */
#define USB_STATUS_USBINT_Msk                0x01000000   /*!< Flag of the last operation */
#define USB_STATUS_USBERRINT_Msk             0x02000000   /*!< Error flag that indicates that the last operation was completed due to an erroneous bus state */

/*-- SLAVE_IN_COUNT: Register received data ----------------------------------*/

typedef struct {
    uint32_t BYTECOUNT                         :11;         /*!< Indication of the number of bytes received from the device when prompted interruption 'Data ready' */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _SLAVE_IN_COUNT_bits;

/* Bit field positions: */
#define SLAVE_IN_COUNT_BYTECOUNT_Pos         0            /*!< Indication of the number of bytes received from the device when prompted interruption 'Data ready' */

/* Bit field masks: */
#define SLAVE_IN_COUNT_BYTECOUNT_Msk         0x000007FF   /*!< Indication of the number of bytes received from the device when prompted interruption 'Data ready' */

/*-- Register map for USBHost peripheral -------------------------------------*/

typedef struct {
    union {                                                 /*!< Host controller USB version register */
        __I  uint32_t VERSION;                                /*!< VERSION    : type used for word access */
        __I  _VERSION_bits VERSION_bit;                       /*!< VERSION_bit: structure used for bit access */
    };
    union {                                                 /*!< HC Control register 1 */
        __IO uint32_t USBCMD_STS_INTR;                        /*!< USBCMD_STS_INTR    : type used for word access */
        __IO _USBCMD_STS_INTR_bits USBCMD_STS_INTR_bit;       /*!< USBCMD_STS_INTR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register version */
        __IO uint32_t FRAME_REG;                              /*!< FRAME_REG    : type used for word access */
        __IO _FRAME_REG_bits FRAME_REG_bit;                   /*!< FRAME_REG_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< HC Control register 2 */
        __IO uint32_t PORT_STS;                               /*!< PORT_STS    : type used for word access */
        __IO _PORT_STS_bits PORT_STS_bit;                     /*!< PORT_STS_bit: structure used for bit access */
    };
    union {                                                 /*!< Transmission Control register A */
        __IO uint32_t USB_PKT_FIELDS_A;                       /*!< USB_PKT_FIELDS_A    : type used for word access */
        __IO _USB_PKT_FIELDS_A_bits USB_PKT_FIELDS_A_bit;     /*!< USB_PKT_FIELDS_A_bit: structure used for bit access */
    };
    union {                                                 /*!< Transmission Control register B */
        __IO uint32_t USB_PKT_FIELDS_B;                       /*!< USB_PKT_FIELDS_B    : type used for word access */
        __IO _USB_PKT_FIELDS_B_bits USB_PKT_FIELDS_B_bit;     /*!< USB_PKT_FIELDS_B_bit: structure used for bit access */
    };
    __IO uint32_t BUFF_START_ADDR;                          /*!< Bufer start address register */
    union {                                                 /*!< Transmission data register */
        __IO uint32_t TBT;                                    /*!< TBT    : type used for word access */
        __IO _TBT_bits TBT_bit;                               /*!< TBT_bit: structure used for bit access */
    };
    union {                                                 /*!< XFR STATUS register */
        __I  uint32_t USB_STATUS;                             /*!< USB_STATUS    : type used for word access */
        __I  _USB_STATUS_bits USB_STATUS_bit;                 /*!< USB_STATUS_bit: structure used for bit access */
    };
    uint32_t Reserved1;                                     /*!< Reserved */
    __IO uint32_t Data_Buffer;                              /*!< Data buffer register */
    union {                                                 /*!< Register received data */
        __I  uint32_t SLAVE_IN_COUNT;                         /*!< SLAVE_IN_COUNT    : type used for word access */
        __I  _SLAVE_IN_COUNT_bits SLAVE_IN_COUNT_bit;         /*!< SLAVE_IN_COUNT_bit: structure used for bit access */
    };
} NT_USBHost_TypeDef;

/******************************************************************************/
/*                     USB Device controller registers                        */
/******************************************************************************/

/*-- IRQ_STAT_L: Interrupt status register -----------------------------------*/

typedef struct {
    uint32_t USBBUSINT                         :1;          /*!< Interrupt flag events on the USB bus */
    uint32_t CEP_INT                           :1;          /*!< Interrupt flag control buffer */
    uint32_t EP1_INT                           :1;          /*!< Interrupt flags EndPoint 1 */
    uint32_t EP2_INT                           :1;          /*!< Interrupt flags EndPoint 2 */
    uint32_t EP3_INT                           :1;          /*!< Interrupt flags EndPoint 3 */
    uint32_t EP4_INT                           :1;          /*!< Interrupt flags EndPoint 4 */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _IRQ_STAT_L_bits;

/* Bit field positions: */
#define IRQ_STAT_L_USBBUSINT_Pos             0            /*!< Interrupt flag events on the USB bus */
#define IRQ_STAT_L_CEP_INT_Pos               1            /*!< Interrupt flag control buffer */
#define IRQ_STAT_L_EP1_INT_Pos               2            /*!< Interrupt flags EndPoint 1 */
#define IRQ_STAT_L_EP2_INT_Pos               3            /*!< Interrupt flags EndPoint 2 */
#define IRQ_STAT_L_EP3_INT_Pos               4            /*!< Interrupt flags EndPoint 3 */
#define IRQ_STAT_L_EP4_INT_Pos               5            /*!< Interrupt flags EndPoint 4 */

/* Bit field masks: */
#define IRQ_STAT_L_USBBUSINT_Msk             0x00000001   /*!< Interrupt flag events on the USB bus */
#define IRQ_STAT_L_CEP_INT_Msk               0x00000002   /*!< Interrupt flag control buffer */
#define IRQ_STAT_L_EP1_INT_Msk               0x00000004   /*!< Interrupt flags EndPoint 1 */
#define IRQ_STAT_L_EP2_INT_Msk               0x00000008   /*!< Interrupt flags EndPoint 2 */
#define IRQ_STAT_L_EP3_INT_Msk               0x00000010   /*!< Interrupt flags EndPoint 3 */
#define IRQ_STAT_L_EP4_INT_Msk               0x00000020   /*!< Interrupt flags EndPoint 4 */

/*-- IRQ_ENB_L: Interrupt enable register ------------------------------------*/

typedef struct {
    uint32_t USBBUSINTEN                       :1;          /*!< Enable interrupts from the events on the USB bus */
    uint32_t CEP_INTEN                         :1;          /*!< Interrupt enable for control buffer */
    uint32_t EP1_INTEN                         :1;          /*!< Interrupt enable for EndPoint 1 */
    uint32_t EP2_INTEN                         :1;          /*!< Interrupt enable for EndPoint 2 */
    uint32_t EP3_INTEN                         :1;          /*!< Interrupt enable for EndPoint 3 */
    uint32_t EP4_INTEN                         :1;          /*!< Interrupt enable for EndPoint 4 */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _IRQ_ENB_L_bits;

/* Bit field positions: */
#define IRQ_ENB_L_USBBUSINTEN_Pos            0            /*!< Enable interrupts from the events on the USB bus */
#define IRQ_ENB_L_CEP_INTEN_Pos              1            /*!< Interrupt enable for control buffer */
#define IRQ_ENB_L_EP1_INTEN_Pos              2            /*!< Interrupt enable for EndPoint 1 */
#define IRQ_ENB_L_EP2_INTEN_Pos              3            /*!< Interrupt enable for EndPoint 2 */
#define IRQ_ENB_L_EP3_INTEN_Pos              4            /*!< Interrupt enable for EndPoint 3 */
#define IRQ_ENB_L_EP4_INTEN_Pos              5            /*!< Interrupt enable for EndPoint 4 */

/* Bit field masks: */
#define IRQ_ENB_L_USBBUSINTEN_Msk            0x00000001   /*!< Enable interrupts from the events on the USB bus */
#define IRQ_ENB_L_CEP_INTEN_Msk              0x00000002   /*!< Interrupt enable for control buffer */
#define IRQ_ENB_L_EP1_INTEN_Msk              0x00000004   /*!< Interrupt enable for EndPoint 1 */
#define IRQ_ENB_L_EP2_INTEN_Msk              0x00000008   /*!< Interrupt enable for EndPoint 2 */
#define IRQ_ENB_L_EP3_INTEN_Msk              0x00000010   /*!< Interrupt enable for EndPoint 3 */
#define IRQ_ENB_L_EP4_INTEN_Msk              0x00000020   /*!< Interrupt enable for EndPoint 4 */

/*-- USB_IRQ_STAT: USB Interrupt status register -----------------------------*/

typedef struct {
    uint32_t SOF                               :1;          /*!< Flag SOF packet reception */
    uint32_t RESSTATUS                         :1;          /*!< Completion flag reset the root port */
    uint32_t RESUME                            :1;          /*!< Flag reactivate the device */
    uint32_t SUSPENDREQ                        :1;          /*!< SUSPEND mode request bit */
    uint32_t HIGHSPEEDSETTLE                   :1;          /*!< Completion flag reset and switching devices in high-speed mode */
    uint32_t DMACMPLINT                        :1;          /*!< Completion flag DMA data transfer */
    uint32_t CLKUNSTBLINT                      :1;          /*!< Interrupt flag, signaling an unstable clock signal UTMI and to initialize the device controller registers */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _USB_IRQ_STAT_bits;

/* Bit field positions: */
#define USB_IRQ_STAT_SOF_Pos                 0            /*!< Flag SOF packet reception */
#define USB_IRQ_STAT_RESSTATUS_Pos           1            /*!< Completion flag reset the root port */
#define USB_IRQ_STAT_RESUME_Pos              2            /*!< Flag reactivate the device */
#define USB_IRQ_STAT_SUSPENDREQ_Pos          3            /*!< SUSPEND mode request bit */
#define USB_IRQ_STAT_HIGHSPEEDSETTLE_Pos     4            /*!< Completion flag reset and switching devices in high-speed mode */
#define USB_IRQ_STAT_DMACMPLINT_Pos          5            /*!< Completion flag DMA data transfer */
#define USB_IRQ_STAT_CLKUNSTBLINT_Pos        6            /*!< Interrupt flag, signaling an unstable clock signal UTMI and to initialize the device controller registers */

/* Bit field masks: */
#define USB_IRQ_STAT_SOF_Msk                 0x00000001   /*!< Flag SOF packet reception */
#define USB_IRQ_STAT_RESSTATUS_Msk           0x00000002   /*!< Completion flag reset the root port */
#define USB_IRQ_STAT_RESUME_Msk              0x00000004   /*!< Flag reactivate the device */
#define USB_IRQ_STAT_SUSPENDREQ_Msk          0x00000008   /*!< SUSPEND mode request bit */
#define USB_IRQ_STAT_HIGHSPEEDSETTLE_Msk     0x00000010   /*!< Completion flag reset and switching devices in high-speed mode */
#define USB_IRQ_STAT_DMACMPLINT_Msk          0x00000020   /*!< Completion flag DMA data transfer */
#define USB_IRQ_STAT_CLKUNSTBLINT_Msk        0x00000040   /*!< Interrupt flag, signaling an unstable clock signal UTMI and to initialize the device controller registers */

/*-- USB_IRQ_ENB: USB Interrupt enable register ------------------------------*/

typedef struct {
    uint32_t SOFINTEN                          :1;          /*!< Enable SOF packet reception */
    uint32_t RESSTATUSINTEN                    :1;          /*!< Enable completion reset the root port */
    uint32_t RESUMEINTEN                       :1;          /*!< Enable reactivate the device */
    uint32_t SUSPENDINTEN                      :1;          /*!< Enable SUSPEND mode request bit */
    uint32_t HISPEEDINTEN                      :1;          /*!< Enable completion reset and switching devices in high-speed mode */
    uint32_t DMACMPLINTEN                      :1;          /*!< Enable completion DMA data transfer */
    uint32_t CLKUNSTBLINTEN                    :1;          /*!< Enable interrupt, signaling an unstable clock signal UTMI and to initialize the device controller registers */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _USB_IRQ_ENB_bits;

/* Bit field positions: */
#define USB_IRQ_ENB_SOFINTEN_Pos             0            /*!< Enable SOF packet reception */
#define USB_IRQ_ENB_RESSTATUSINTEN_Pos       1            /*!< Enable completion reset the root port */
#define USB_IRQ_ENB_RESUMEINTEN_Pos          2            /*!< Enable reactivate the device */
#define USB_IRQ_ENB_SUSPENDINTEN_Pos         3            /*!< Enable SUSPEND mode request bit */
#define USB_IRQ_ENB_HISPEEDINTEN_Pos         4            /*!< Enable completion reset and switching devices in high-speed mode */
#define USB_IRQ_ENB_DMACMPLINTEN_Pos         5            /*!< Enable completion DMA data transfer */
#define USB_IRQ_ENB_CLKUNSTBLINTEN_Pos       6            /*!< Enable interrupt, signaling an unstable clock signal UTMI and to initialize the device controller registers */

/* Bit field masks: */
#define USB_IRQ_ENB_SOFINTEN_Msk             0x00000001   /*!< Enable SOF packet reception */
#define USB_IRQ_ENB_RESSTATUSINTEN_Msk       0x00000002   /*!< Enable completion reset the root port */
#define USB_IRQ_ENB_RESUMEINTEN_Msk          0x00000004   /*!< Enable reactivate the device */
#define USB_IRQ_ENB_SUSPENDINTEN_Msk         0x00000008   /*!< Enable SUSPEND mode request bit */
#define USB_IRQ_ENB_HISPEEDINTEN_Msk         0x00000010   /*!< Enable completion reset and switching devices in high-speed mode */
#define USB_IRQ_ENB_DMACMPLINTEN_Msk         0x00000020   /*!< Enable completion DMA data transfer */
#define USB_IRQ_ENB_CLKUNSTBLINTEN_Msk       0x00000040   /*!< Enable interrupt, signaling an unstable clock signal UTMI and to initialize the device controller registers */

/*-- USB_OPER: USB Operations register ---------------------------------------*/

typedef struct {
    uint32_t GEN_RESUME                        :1;          /*!< Bit start recovery work */
    uint32_t HIGHSPEED                         :1;          /*!< Trigger bit protocol 'Chirp' */
    uint32_t CURRENTSPEED                      :1;          /*!< Speed indication device controller 1-High speed; 0 - Full speed */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _USB_OPER_bits;

/* Bit field positions: */
#define USB_OPER_GEN_RESUME_Pos              0            /*!< Bit start recovery work */
#define USB_OPER_HIGHSPEED_Pos               1            /*!< Trigger bit protocol 'Chirp' */
#define USB_OPER_CURRENTSPEED_Pos            2            /*!< Speed indication device controller 1-High speed; 0 - Full speed */

/* Bit field masks: */
#define USB_OPER_GEN_RESUME_Msk              0x00000001   /*!< Bit start recovery work */
#define USB_OPER_HIGHSPEED_Msk               0x00000002   /*!< Trigger bit protocol 'Chirp' */
#define USB_OPER_CURRENTSPEED_Msk            0x00000004   /*!< Speed indication device controller 1-High speed; 0 - Full speed */

/*-- USB_FRAME_CNT: USB Frame counter register -------------------------------*/

typedef struct {
    uint32_t MICRO_FRAME_COUNTER               :3;          /*!< Number field current a chip */
    uint32_t FRAME_COUNTER                     :11;         /*!< Field frame counter since last SOF packet */
    uint32_t Reserved0                         :18;         /*!< Reserved */
} _USB_FRAME_CNT_bits;

/* Bit field positions: */
#define USB_FRAME_CNT_MICRO_FRAME_COUNTER_Pos0            /*!< Number field current a chip */
#define USB_FRAME_CNT_FRAME_COUNTER_Pos      3            /*!< Field frame counter since last SOF packet */

/* Bit field masks: */
#define USB_FRAME_CNT_MICRO_FRAME_COUNTER_Msk0x00000007   /*!< Number field current a chip */
#define USB_FRAME_CNT_FRAME_COUNTER_Msk      0x00003FF8   /*!< Field frame counter since last SOF packet */

/*-- USB_ADDR: USB Address register ------------------------------------------*/

typedef struct {
    uint32_t CURRENT_ADDR                      :6;          /*!< Field of the current address of the device */
    uint32_t USBADDR                           :1;          /*!< Field of the current address of the device */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _USB_ADDR_bits;

/* Bit field positions: */
#define USB_ADDR_CURRENT_ADDR_Pos            0            /*!< Field of the current address of the device */
#define USB_ADDR_USBADDR_Pos                 6            /*!< Field of the current address of the device */

/* Bit field masks: */
#define USB_ADDR_CURRENT_ADDR_Msk            0x0000003F   /*!< Field of the current address of the device */
#define USB_ADDR_USBADDR_Msk                 0x00000040   /*!< Field of the current address of the device */

/*-- CEP_DATA_BUF: Data buffer for transmission register (Control EndPoint) --*/

typedef struct {
    uint32_t DATA_BUF                          :16;         /*!< Data buffer for transmission */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _CEP_DATA_BUF_bits;

/* Bit field positions: */
#define CEP_DATA_BUF_DATA_BUF_Pos            0            /*!< Data buffer for transmission */

/* Bit field masks: */
#define CEP_DATA_BUF_DATA_BUF_Msk            0x0000FFFF   /*!< Data buffer for transmission */

/*-- CEP_CTRL_STAT: Control register and buffer status (Control EndPoint) ----*/

typedef struct {
    uint32_t NAKCLEAR                          :1;          /*!< Receiving flag tags SETIP */
    uint32_t STALL                             :1;          /*!< Enable sending 'Stall' */
    uint32_t ZEROLEN                           :1;          /*!< Enable transmission zero length packet */
    uint32_t CEPFLUSH                          :1;          /*!< Reset buffer */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _CEP_CTRL_STAT_bits;

/* Bit field positions: */
#define CEP_CTRL_STAT_NAKCLEAR_Pos           0            /*!< Receiving flag tags SETIP */
#define CEP_CTRL_STAT_STALL_Pos              1            /*!< Enable sending 'Stall' */
#define CEP_CTRL_STAT_ZEROLEN_Pos            2            /*!< Enable transmission zero length packet */
#define CEP_CTRL_STAT_CEPFLUSH_Pos           3            /*!< Reset buffer */

/* Bit field masks: */
#define CEP_CTRL_STAT_NAKCLEAR_Msk           0x00000001   /*!< Receiving flag tags SETIP */
#define CEP_CTRL_STAT_STALL_Msk              0x00000002   /*!< Enable sending 'Stall' */
#define CEP_CTRL_STAT_ZEROLEN_Msk            0x00000004   /*!< Enable transmission zero length packet */
#define CEP_CTRL_STAT_CEPFLUSH_Msk           0x00000008   /*!< Reset buffer */

/*-- CEP_IRQ_ENB: Interrupt Enable buffer register (Control EndPoint) --------*/

typedef struct {
    uint32_t SETUPTOKENINT                     :1;          /*!< Enable flag deadline tags SETUP from the host */
    uint32_t SETUPPKTINT                       :1;          /*!< Enable flag deadline Setup package from the host */
    uint32_t OUTTOKENINT                       :1;          /*!< Enable reception end flag tags OUT from the host */
    uint32_t INTOKENINT                        :1;          /*!< Enable reception end flag tags IN from the host */
    uint32_t PINGTOKENINT                      :1;          /*!< Enable reception end flag tags PING from host */
    uint32_t DATAPKTTRINT                      :1;          /*!< Enable flag successful sending of the data packet in response to the label to obtain IN ACK confirming tags */
    uint32_t DATAPKTRECINT                     :1;          /*!< Enable flag successful reception of the data packet following the label OUT, in response to which the mark has been sent ACK */
    uint32_t NAKSENTINT                        :1;          /*!< Enable flag closure parcel labels NAK in response to mark IN or OUT */
    uint32_t STALLSENTINT                      :1;          /*!< Enable flag closure parcel labels STALL in response to mark IN or OUT */
    uint32_t USBERRINT                         :1;          /*!< Enable error flag during the operation */
    uint32_t STATCMPLNINT                      :1;          /*!< Enable flag successful completion stage 'Status' operations on the USB bus */
    uint32_t BUFFFULLINT                       :1;          /*!< Enable flag filling control buffer */
    uint32_t BUFFEMPTYINT                      :1;
    uint32_t Reserved0                         :19;         /*!< Reserved */
} _CEP_IRQ_ENB_bits;

/* Bit field positions: */
#define CEP_IRQ_ENB_SETUPTOKENINT_Pos        0            /*!< Enable flag deadline tags SETUP from the host */
#define CEP_IRQ_ENB_SETUPPKTINT_Pos          1            /*!< Enable flag deadline Setup package from the host */
#define CEP_IRQ_ENB_OUTTOKENINT_Pos          2            /*!< Enable reception end flag tags OUT from the host */
#define CEP_IRQ_ENB_INTOKENINT_Pos           3            /*!< Enable reception end flag tags IN from the host */
#define CEP_IRQ_ENB_PINGTOKENINT_Pos         4            /*!< Enable reception end flag tags PING from host */
#define CEP_IRQ_ENB_DATAPKTTRINT_Pos         5            /*!< Enable flag successful sending of the data packet in response to the label to obtain IN ACK confirming tags */
#define CEP_IRQ_ENB_DATAPKTRECINT_Pos        6            /*!< Enable flag successful reception of the data packet following the label OUT, in response to which the mark has been sent ACK */
#define CEP_IRQ_ENB_NAKSENTINT_Pos           7            /*!< Enable flag closure parcel labels NAK in response to mark IN or OUT */
#define CEP_IRQ_ENB_STALLSENTINT_Pos         8            /*!< Enable flag closure parcel labels STALL in response to mark IN or OUT */
#define CEP_IRQ_ENB_USBERRINT_Pos            9            /*!< Enable error flag during the operation */
#define CEP_IRQ_ENB_STATCMPLNINT_Pos         10           /*!< Enable flag successful completion stage 'Status' operations on the USB bus */
#define CEP_IRQ_ENB_BUFFFULLINT_Pos          11           /*!< Enable flag filling control buffer */
#define CEP_IRQ_ENB_BUFFEMPTYINT_Pos         12

/* Bit field masks: */
#define CEP_IRQ_ENB_SETUPTOKENINT_Msk        0x00000001   /*!< Enable flag deadline tags SETUP from the host */
#define CEP_IRQ_ENB_SETUPPKTINT_Msk          0x00000002   /*!< Enable flag deadline Setup package from the host */
#define CEP_IRQ_ENB_OUTTOKENINT_Msk          0x00000004   /*!< Enable reception end flag tags OUT from the host */
#define CEP_IRQ_ENB_INTOKENINT_Msk           0x00000008   /*!< Enable reception end flag tags IN from the host */
#define CEP_IRQ_ENB_PINGTOKENINT_Msk         0x00000010   /*!< Enable reception end flag tags PING from host */
#define CEP_IRQ_ENB_DATAPKTTRINT_Msk         0x00000020   /*!< Enable flag successful sending of the data packet in response to the label to obtain IN ACK confirming tags */
#define CEP_IRQ_ENB_DATAPKTRECINT_Msk        0x00000040   /*!< Enable flag successful reception of the data packet following the label OUT, in response to which the mark has been sent ACK */
#define CEP_IRQ_ENB_NAKSENTINT_Msk           0x00000080   /*!< Enable flag closure parcel labels NAK in response to mark IN or OUT */
#define CEP_IRQ_ENB_STALLSENTINT_Msk         0x00000100   /*!< Enable flag closure parcel labels STALL in response to mark IN or OUT */
#define CEP_IRQ_ENB_USBERRINT_Msk            0x00000200   /*!< Enable error flag during the operation */
#define CEP_IRQ_ENB_STATCMPLNINT_Msk         0x00000400   /*!< Enable flag successful completion stage 'Status' operations on the USB bus */
#define CEP_IRQ_ENB_BUFFFULLINT_Msk          0x00000800   /*!< Enable flag filling control buffer */
#define CEP_IRQ_ENB_BUFFEMPTYINT_Msk         0x00001000

/*-- CEP_IRQ_STAT: Buffer interrupt flag register (Control EndPoint) ---------*/

typedef struct {
    uint32_t SETUPTOKENINT                     :1;          /*!< Flag deadline tags SETUP from the host */
    uint32_t SETUPPKTINT                       :1;          /*!< Flag deadline Setup package from the host */
    uint32_t OUTTOKENINT                       :1;          /*!< Reception end flag tags OUT from the host */
    uint32_t INTOKENINT                        :1;          /*!< Reception end flag tags IN from the host */
    uint32_t PINGTOKENINT                      :1;          /*!< Reception end flag tags PING from host */
    uint32_t DATAPKTTRINT                      :1;          /*!< Flag successful sending of the data packet in response to the label to obtain IN ACK confirming tags */
    uint32_t DATAPKTRECINT                     :1;          /*!< Flag successful reception of the data packet following the label OUT, in response to which the mark has been sent ACK */
    uint32_t NAKSENTINT                        :1;          /*!< Flag closure parcel labels NAK in response to mark IN or OUT */
    uint32_t STALLSENTINT                      :1;          /*!< Flag closure parcel labels STALL in response to mark IN or OUT */
    uint32_t USBERRINT                         :1;          /*!< The error flag during the operation */
    uint32_t STATCMPLNINT                      :1;          /*!< Flag successful completion stage 'Status' operations on the USB bus */
    uint32_t BUFFFULLINT                       :1;          /*!< Flag filling control buffer */
    uint32_t BUFFEMPTYINT                      :4;          /*!< Flag control buffer emptying */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _CEP_IRQ_STAT_bits;

/* Bit field positions: */
#define CEP_IRQ_STAT_SETUPTOKENINT_Pos       0            /*!< Flag deadline tags SETUP from the host */
#define CEP_IRQ_STAT_SETUPPKTINT_Pos         1            /*!< Flag deadline Setup package from the host */
#define CEP_IRQ_STAT_OUTTOKENINT_Pos         2            /*!< Reception end flag tags OUT from the host */
#define CEP_IRQ_STAT_INTOKENINT_Pos          3            /*!< Reception end flag tags IN from the host */
#define CEP_IRQ_STAT_PINGTOKENINT_Pos        4            /*!< Reception end flag tags PING from host */
#define CEP_IRQ_STAT_DATAPKTTRINT_Pos        5            /*!< Flag successful sending of the data packet in response to the label to obtain IN ACK confirming tags */
#define CEP_IRQ_STAT_DATAPKTRECINT_Pos       6            /*!< Flag successful reception of the data packet following the label OUT, in response to which the mark has been sent ACK */
#define CEP_IRQ_STAT_NAKSENTINT_Pos          7            /*!< Flag closure parcel labels NAK in response to mark IN or OUT */
#define CEP_IRQ_STAT_STALLSENTINT_Pos        8            /*!< Flag closure parcel labels STALL in response to mark IN or OUT */
#define CEP_IRQ_STAT_USBERRINT_Pos           9            /*!< The error flag during the operation */
#define CEP_IRQ_STAT_STATCMPLNINT_Pos        10           /*!< Flag successful completion stage 'Status' operations on the USB bus */
#define CEP_IRQ_STAT_BUFFFULLINT_Pos         11           /*!< Flag filling control buffer */
#define CEP_IRQ_STAT_BUFFEMPTYINT_Pos        12           /*!< Flag control buffer emptying */

/* Bit field masks: */
#define CEP_IRQ_STAT_SETUPTOKENINT_Msk       0x00000001   /*!< Flag deadline tags SETUP from the host */
#define CEP_IRQ_STAT_SETUPPKTINT_Msk         0x00000002   /*!< Flag deadline Setup package from the host */
#define CEP_IRQ_STAT_OUTTOKENINT_Msk         0x00000004   /*!< Reception end flag tags OUT from the host */
#define CEP_IRQ_STAT_INTOKENINT_Msk          0x00000008   /*!< Reception end flag tags IN from the host */
#define CEP_IRQ_STAT_PINGTOKENINT_Msk        0x00000010   /*!< Reception end flag tags PING from host */
#define CEP_IRQ_STAT_DATAPKTTRINT_Msk        0x00000020   /*!< Flag successful sending of the data packet in response to the label to obtain IN ACK confirming tags */
#define CEP_IRQ_STAT_DATAPKTRECINT_Msk       0x00000040   /*!< Flag successful reception of the data packet following the label OUT, in response to which the mark has been sent ACK */
#define CEP_IRQ_STAT_NAKSENTINT_Msk          0x00000080   /*!< Flag closure parcel labels NAK in response to mark IN or OUT */
#define CEP_IRQ_STAT_STALLSENTINT_Msk        0x00000100   /*!< Flag closure parcel labels STALL in response to mark IN or OUT */
#define CEP_IRQ_STAT_USBERRINT_Msk           0x00000200   /*!< The error flag during the operation */
#define CEP_IRQ_STAT_STATCMPLNINT_Msk        0x00000400   /*!< Flag successful completion stage 'Status' operations on the USB bus */
#define CEP_IRQ_STAT_BUFFFULLINT_Msk         0x00000800   /*!< Flag filling control buffer */
#define CEP_IRQ_STAT_BUFFEMPTYINT_Msk        0x0000F000   /*!< Flag control buffer emptying */

/*-- IN_TRNSFR_CNT: In transfer data count register --------------------------*/

typedef struct {
    uint32_t DATACOUNT                         :16;         /*!< The number of bytes to be sent in response to a label IN */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _IN_TRNSFR_CNT_bits;

/* Bit field positions: */
#define IN_TRNSFR_CNT_DATACOUNT_Pos          0            /*!< The number of bytes to be sent in response to a label IN */

/* Bit field masks: */
#define IN_TRNSFR_CNT_DATACOUNT_Msk          0x0000FFFF   /*!< The number of bytes to be sent in response to a label IN */

/*-- OUT_TRNSFR_CNT: Out-transfer data count register ------------------------*/

typedef struct {
    uint32_t DATACOUNT                         :16;         /*!< The number of bytes received of data */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _OUT_TRNSFR_CNT_bits;

/* Bit field positions: */
#define OUT_TRNSFR_CNT_DATACOUNT_Pos         0            /*!< The number of bytes received of data */

/* Bit field masks: */
#define OUT_TRNSFR_CNT_DATACOUNT_Msk         0x0000FFFF   /*!< The number of bytes received of data */

/*-- SETUP1_0: Register zero and first byte packet Setup ---------------------*/

typedef struct {
    uint32_t SETUPPKT_0B                       :8;          /*!< destination */
    uint32_t SETUPPKT_1B                       :8;          /*!< The first byte of the packet Setup */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SETUP1_0_bits;

/* Bit field positions: */
#define SETUP1_0_SETUPPKT_0B_Pos             0            /*!< destination */
#define SETUP1_0_SETUPPKT_1B_Pos             8            /*!< The first byte of the packet Setup */

/* Bit field masks: */
#define SETUP1_0_SETUPPKT_0B_Msk             0x000000FF   /*!< destination */
#define SETUP1_0_SETUPPKT_1B_Msk             0x0000FF00   /*!< The first byte of the packet Setup */

/*-- SETUP3_2: Register 2nd and 3rd bytes of the packet Setup ----------------*/

typedef struct {
    uint32_t SETUPPKT_2B                       :8;          /*!< Low byte field wValue */
    uint32_t SETUPPKT_3B                       :8;          /*!< High byte field wValue */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SETUP3_2_bits;

/* Bit field positions: */
#define SETUP3_2_SETUPPKT_2B_Pos             0            /*!< Low byte field wValue */
#define SETUP3_2_SETUPPKT_3B_Pos             8            /*!< High byte field wValue */

/* Bit field masks: */
#define SETUP3_2_SETUPPKT_2B_Msk             0x000000FF   /*!< Low byte field wValue */
#define SETUP3_2_SETUPPKT_3B_Msk             0x0000FF00   /*!< High byte field wValue */

/*-- SETUP5_4: Register 4th and 5th bytes of the packet Setup ----------------*/

typedef struct {
    uint32_t SETUPPKT_4B                       :8;          /*!< Low byte field windex */
    uint32_t SETUPPKT_5B                       :8;          /*!< High byte field windex */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SETUP5_4_bits;

/* Bit field positions: */
#define SETUP5_4_SETUPPKT_4B_Pos             0            /*!< Low byte field windex */
#define SETUP5_4_SETUPPKT_5B_Pos             8            /*!< High byte field windex */

/* Bit field masks: */
#define SETUP5_4_SETUPPKT_4B_Msk             0x000000FF   /*!< Low byte field windex */
#define SETUP5_4_SETUPPKT_5B_Msk             0x0000FF00   /*!< High byte field windex */

/*-- SETUP7_6: Register on the 6th and 7th byte packet Setup -----------------*/

typedef struct {
    uint32_t SETUPPKT_6B                       :8;          /*!< Low byte field wLength */
    uint32_t SETUPPKT_7B                       :8;          /*!< High byte field wLength */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SETUP7_6_bits;

/* Bit field positions: */
#define SETUP7_6_SETUPPKT_6B_Pos             0            /*!< Low byte field wLength */
#define SETUP7_6_SETUPPKT_7B_Pos             8            /*!< High byte field wLength */

/* Bit field masks: */
#define SETUP7_6_SETUPPKT_6B_Msk             0x000000FF   /*!< Low byte field wLength */
#define SETUP7_6_SETUPPKT_7B_Msk             0x0000FF00   /*!< High byte field wLength */

/*-- CEP_START_ADDR: Control EndPoint RAM start Addr register ----------------*/

typedef struct {
    uint32_t STARTADDR                         :16;         /*!< Beginning of the address space */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _CEP_START_ADDR_bits;

/* Bit field positions: */
#define CEP_START_ADDR_STARTADDR_Pos         0            /*!< Beginning of the address space */

/* Bit field masks: */
#define CEP_START_ADDR_STARTADDR_Msk         0x0000FFFF   /*!< Beginning of the address space */

/*-- CEP_END_ADDR: Control EndPoint RAM end Addr register --------------------*/

typedef struct {
    uint32_t ENDADDR                           :16;         /*!< The end of the address space */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _CEP_END_ADDR_bits;

/* Bit field positions: */
#define CEP_END_ADDR_ENDADDR_Pos             0            /*!< The end of the address space */

/* Bit field masks: */
#define CEP_END_ADDR_ENDADDR_Msk             0x0000FFFF   /*!< The end of the address space */

/*-- DMA_CTRL_STS: Register control DMA --------------------------------------*/

typedef struct {
    uint32_t DMA_EP_ADDR                       :4;          /*!< Buffer address accessed by the DMA */
    uint32_t DMARW                             :1;          /*!< Type DMA operations 1-Read, 0-Write */
    uint32_t DMAEN                             :1;          /*!< Enable DMA */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _DMA_CTRL_STS_bits;

/* Bit field positions: */
#define DMA_CTRL_STS_DMA_EP_ADDR_Pos         0            /*!< Buffer address accessed by the DMA */
#define DMA_CTRL_STS_DMARW_Pos               4            /*!< Type DMA operations 1-Read, 0-Write */
#define DMA_CTRL_STS_DMAEN_Pos               5            /*!< Enable DMA */

/* Bit field masks: */
#define DMA_CTRL_STS_DMA_EP_ADDR_Msk         0x0000000F   /*!< Buffer address accessed by the DMA */
#define DMA_CTRL_STS_DMARW_Msk               0x00000010   /*!< Type DMA operations 1-Read, 0-Write */
#define DMA_CTRL_STS_DMAEN_Msk               0x00000020   /*!< Enable DMA */

/*-- DMA_CNT: DMA Count Register ---------------------------------------------*/

typedef struct {
    uint32_t DMA_CNT                           :16;         /*!< The number of words transmitted by DMA */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _DMA_CNT_bits;

/* Bit field positions: */
#define DMA_CNT_DMA_CNT_Pos                  0            /*!< The number of words transmitted by DMA */

/* Bit field masks: */
#define DMA_CNT_DMA_CNT_Msk                  0x0000FFFF   /*!< The number of words transmitted by DMA */

/*-- DATA_BUF: EndPoint Data Register ----------------------------------------*/

typedef struct {
    uint32_t DATA                              :16;         /*!< Data exchange with the buffer */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _DATA_BUF_bits;

/* Bit field positions: */
#define DATA_BUF_DATA_Pos                    0            /*!< Data exchange with the buffer */

/* Bit field masks: */
#define DATA_BUF_DATA_Msk                    0x0000FFFF   /*!< Data exchange with the buffer */

/*-- IRQ_STAT: Interrupt flag register no control buffer ---------------------*/

typedef struct {
    uint32_t BUFFFULLINT                       :1;          /*!< Flag buffer fill */
    uint32_t BUFFEMPTYINT                      :1;          /*!< Buffer empty flag */
    uint32_t SHORTPKTTRINT                     :1;          /*!< Flag size of the last packet */
    uint32_t DATAPKTTRINT                      :1;          /*!< Flag to send a data packet from the buffer to the host */
    uint32_t DATAPKTRECINT                     :1;          /*!< Flag successful reception of a data packet from a host */
    uint32_t OUTTOKENINT                       :1;          /*!< Receiving flag tags OUT from the host */
    uint32_t INTOKENINT                        :1;          /*!< Receiving flag tags IN from the host */
    uint32_t PINGTOKENINT                      :1;          /*!< Receiving flag tags PING from the host */
    uint32_t NACKSENTINT                       :1;          /*!< Flag unsent last packet */
    uint32_t STALLSENTINT                      :1;          /*!< Flag Uncommitted last packet */
    uint32_t NYETSENTINT                       :1;          /*!< Flag lack of free memory to receive the next data packet */
    uint32_t ERRSENTINT                        :1;          /*!< Flag of any error during the operation */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _IRQ_STAT_bits;

/* Bit field positions: */
#define IRQ_STAT_BUFFFULLINT_Pos             0            /*!< Flag buffer fill */
#define IRQ_STAT_BUFFEMPTYINT_Pos            1            /*!< Buffer empty flag */
#define IRQ_STAT_SHORTPKTTRINT_Pos           2            /*!< Flag size of the last packet */
#define IRQ_STAT_DATAPKTTRINT_Pos            3            /*!< Flag to send a data packet from the buffer to the host */
#define IRQ_STAT_DATAPKTRECINT_Pos           4            /*!< Flag successful reception of a data packet from a host */
#define IRQ_STAT_OUTTOKENINT_Pos             5            /*!< Receiving flag tags OUT from the host */
#define IRQ_STAT_INTOKENINT_Pos              6            /*!< Receiving flag tags IN from the host */
#define IRQ_STAT_PINGTOKENINT_Pos            7            /*!< Receiving flag tags PING from the host */
#define IRQ_STAT_NACKSENTINT_Pos             8            /*!< Flag unsent last packet */
#define IRQ_STAT_STALLSENTINT_Pos            9            /*!< Flag Uncommitted last packet */
#define IRQ_STAT_NYETSENTINT_Pos             10           /*!< Flag lack of free memory to receive the next data packet */
#define IRQ_STAT_ERRSENTINT_Pos              11           /*!< Flag of any error during the operation */

/* Bit field masks: */
#define IRQ_STAT_BUFFFULLINT_Msk             0x00000001   /*!< Flag buffer fill */
#define IRQ_STAT_BUFFEMPTYINT_Msk            0x00000002   /*!< Buffer empty flag */
#define IRQ_STAT_SHORTPKTTRINT_Msk           0x00000004   /*!< Flag size of the last packet */
#define IRQ_STAT_DATAPKTTRINT_Msk            0x00000008   /*!< Flag to send a data packet from the buffer to the host */
#define IRQ_STAT_DATAPKTRECINT_Msk           0x00000010   /*!< Flag successful reception of a data packet from a host */
#define IRQ_STAT_OUTTOKENINT_Msk             0x00000020   /*!< Receiving flag tags OUT from the host */
#define IRQ_STAT_INTOKENINT_Msk              0x00000040   /*!< Receiving flag tags IN from the host */
#define IRQ_STAT_PINGTOKENINT_Msk            0x00000080   /*!< Receiving flag tags PING from the host */
#define IRQ_STAT_NACKSENTINT_Msk             0x00000100   /*!< Flag unsent last packet */
#define IRQ_STAT_STALLSENTINT_Msk            0x00000200   /*!< Flag Uncommitted last packet */
#define IRQ_STAT_NYETSENTINT_Msk             0x00000400   /*!< Flag lack of free memory to receive the next data packet */
#define IRQ_STAT_ERRSENTINT_Msk              0x00000800   /*!< Flag of any error during the operation */

/*-- IRQ_ENB: Enable register Interrupt no control buffer --------------------*/

typedef struct {
    uint32_t BUFFFULLINTEN                     :1;          /*!< Enable flag buffer fill */
    uint32_t BUFFEMPTYINTEN                    :1;          /*!< Enable buffer empty flag */
    uint32_t SHORTPKTTRINTEN                   :1;          /*!< Enable flag size of the last packet */
    uint32_t DATAPKTTRINTEN                    :1;          /*!< Enable flag to send a data packet from the buffer to the host */
    uint32_t DATAPKTRECINTEN                   :1;          /*!< Enable flag successful reception of a data packet from a host */
    uint32_t OUTTOKENINTEN                     :1;          /*!< Enable receiving flag tags OUT from the host */
    uint32_t INTOKENINTEN                      :1;          /*!< Enable receiving flag tags IN from the host */
    uint32_t PINGTOKENINTEN                    :1;          /*!< Enable  receiving flag tags PING from the host */
    uint32_t NACKSENTINTEN                     :1;          /*!< Enable flag unsent last packet */
    uint32_t STALLSENTINTEN                    :1;          /*!< Enable flag Uncommitted last packet */
    uint32_t NYETSENTINTEN                     :1;          /*!< Enable flag lack of free memory to receive the next data packet */
    uint32_t ERRSENTINTEN                      :1;          /*!< Enable flag of any error during the operation */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _IRQ_ENB_bits;

/* Bit field positions: */
#define IRQ_ENB_BUFFFULLINTEN_Pos            0            /*!< Enable flag buffer fill */
#define IRQ_ENB_BUFFEMPTYINTEN_Pos           1            /*!< Enable buffer empty flag */
#define IRQ_ENB_SHORTPKTTRINTEN_Pos          2            /*!< Enable flag size of the last packet */
#define IRQ_ENB_DATAPKTTRINTEN_Pos           3            /*!< Enable flag to send a data packet from the buffer to the host */
#define IRQ_ENB_DATAPKTRECINTEN_Pos          4            /*!< Enable flag successful reception of a data packet from a host */
#define IRQ_ENB_OUTTOKENINTEN_Pos            5            /*!< Enable receiving flag tags OUT from the host */
#define IRQ_ENB_INTOKENINTEN_Pos             6            /*!< Enable receiving flag tags IN from the host */
#define IRQ_ENB_PINGTOKENINTEN_Pos           7            /*!< Enable  receiving flag tags PING from the host */
#define IRQ_ENB_NACKSENTINTEN_Pos            8            /*!< Enable flag unsent last packet */
#define IRQ_ENB_STALLSENTINTEN_Pos           9            /*!< Enable flag Uncommitted last packet */
#define IRQ_ENB_NYETSENTINTEN_Pos            10           /*!< Enable flag lack of free memory to receive the next data packet */
#define IRQ_ENB_ERRSENTINTEN_Pos             11           /*!< Enable flag of any error during the operation */

/* Bit field masks: */
#define IRQ_ENB_BUFFFULLINTEN_Msk            0x00000001   /*!< Enable flag buffer fill */
#define IRQ_ENB_BUFFEMPTYINTEN_Msk           0x00000002   /*!< Enable buffer empty flag */
#define IRQ_ENB_SHORTPKTTRINTEN_Msk          0x00000004   /*!< Enable flag size of the last packet */
#define IRQ_ENB_DATAPKTTRINTEN_Msk           0x00000008   /*!< Enable flag to send a data packet from the buffer to the host */
#define IRQ_ENB_DATAPKTRECINTEN_Msk          0x00000010   /*!< Enable flag successful reception of a data packet from a host */
#define IRQ_ENB_OUTTOKENINTEN_Msk            0x00000020   /*!< Enable receiving flag tags OUT from the host */
#define IRQ_ENB_INTOKENINTEN_Msk             0x00000040   /*!< Enable receiving flag tags IN from the host */
#define IRQ_ENB_PINGTOKENINTEN_Msk           0x00000080   /*!< Enable  receiving flag tags PING from the host */
#define IRQ_ENB_NACKSENTINTEN_Msk            0x00000100   /*!< Enable flag unsent last packet */
#define IRQ_ENB_STALLSENTINTEN_Msk           0x00000200   /*!< Enable flag Uncommitted last packet */
#define IRQ_ENB_NYETSENTINTEN_Msk            0x00000400   /*!< Enable flag lack of free memory to receive the next data packet */
#define IRQ_ENB_ERRSENTINTEN_Msk             0x00000800   /*!< Enable flag of any error during the operation */

/*-- AVAIL_CNT: EndPoint Available count register ----------------------------*/

typedef struct {
    uint32_t BUFFBYTENUM                       :12;         /*!< Number of bytes in the buffer */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _AVAIL_CNT_bits;

/* Bit field positions: */
#define AVAIL_CNT_BUFFBYTENUM_Pos            0            /*!< Number of bytes in the buffer */

/* Bit field masks: */
#define AVAIL_CNT_BUFFBYTENUM_Msk            0x00000FFF   /*!< Number of bytes in the buffer */

/*-- RSP_SC: EndPoint Response Set/Clear register ----------------------------*/

typedef struct {
    uint32_t BUFFFLUSH                         :1;          /*!< Reset bit in the buffer and register EP_AVAIL_CNT */
    uint32_t MODE                              :2;          /*!< Field mode of operation of the buffer type ID */
    uint32_t ENDPOINTTOGGL                     :1;          /*!< Control bit by bit DATATOGGLE */
    uint32_t ENDPOINTHALT                      :1;          /*!< Select bit answer to any label from the host */
    uint32_t ZEROLENIN                         :1;          /*!< Select bit answer to mark IN */
    uint32_t PKTEND                            :1;          /*!< Indicator number of bytes */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _RSP_SC_bits;

/* Bit field positions: */
#define RSP_SC_BUFFFLUSH_Pos                 0            /*!< Reset bit in the buffer and register EP_AVAIL_CNT */
#define RSP_SC_MODE_Pos                      1            /*!< Field mode of operation of the buffer type ID */
#define RSP_SC_ENDPOINTTOGGL_Pos             3            /*!< Control bit by bit DATATOGGLE */
#define RSP_SC_ENDPOINTHALT_Pos              4            /*!< Select bit answer to any label from the host */
#define RSP_SC_ZEROLENIN_Pos                 5            /*!< Select bit answer to mark IN */
#define RSP_SC_PKTEND_Pos                    6            /*!< Indicator number of bytes */

/* Bit field masks: */
#define RSP_SC_BUFFFLUSH_Msk                 0x00000001   /*!< Reset bit in the buffer and register EP_AVAIL_CNT */
#define RSP_SC_MODE_Msk                      0x00000006   /*!< Field mode of operation of the buffer type ID */
#define RSP_SC_ENDPOINTTOGGL_Msk             0x00000008   /*!< Control bit by bit DATATOGGLE */
#define RSP_SC_ENDPOINTHALT_Msk              0x00000010   /*!< Select bit answer to any label from the host */
#define RSP_SC_ZEROLENIN_Msk                 0x00000020   /*!< Select bit answer to mark IN */
#define RSP_SC_PKTEND_Msk                    0x00000040   /*!< Indicator number of bytes */

/*-- MPS: EndPoint maximum packet size register ------------------------------*/

typedef struct {
    uint32_t MAXPKTSIZE                        :16;         /*!< Maximum packet size */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _MPS_bits;

/* Bit field positions: */
#define MPS_MAXPKTSIZE_Pos                   0            /*!< Maximum packet size */

/* Bit field masks: */
#define MPS_MAXPKTSIZE_Msk                   0x0000FFFF   /*!< Maximum packet size */

/*-- CNT: EndPoint Transfer count register -----------------------------------*/

typedef struct {
    uint32_t EP_TFR_CNT                        :8;          /*!< Field number of bytes to send to the host mode Manual-Validate */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _CNT_bits;

/* Bit field positions: */
#define CNT_EP_TFR_CNT_Pos                   0            /*!< Field number of bytes to send to the host mode Manual-Validate */

/* Bit field masks: */
#define CNT_EP_TFR_CNT_Msk                   0x000000FF   /*!< Field number of bytes to send to the host mode Manual-Validate */

/*-- EP_CFG: EndPoint configuration register ---------------------------------*/

typedef struct {
    uint32_t EP_VALID                          :1;          /*!< Resolution of buffer */
    uint32_t EP_TYPE                           :2;          /*!< Buffer type */
    uint32_t EP_DIR                            :1;          /*!< Field of type (direction) buffer */
    uint32_t EP_NUM                            :4;          /*!< Number field buffer */
    uint32_t MULT                              :2;          /*!< Field number of operations performed in one micro frame */
    uint32_t Reserved0                         :22;         /*!< Reserved */
} _EP_CFG_bits;

/* Bit field positions: */
#define EP_CFG_EP_VALID_Pos                  0            /*!< Resolution of buffer */
#define EP_CFG_EP_TYPE_Pos                   1            /*!< Buffer type */
#define EP_CFG_EP_DIR_Pos                    3            /*!< Field of type (direction) buffer */
#define EP_CFG_EP_NUM_Pos                    4            /*!< Number field buffer */
#define EP_CFG_MULT_Pos                      8            /*!< Field number of operations performed in one micro frame */

/* Bit field masks: */
#define EP_CFG_EP_VALID_Msk                  0x00000001   /*!< Resolution of buffer */
#define EP_CFG_EP_TYPE_Msk                   0x00000006   /*!< Buffer type */
#define EP_CFG_EP_DIR_Msk                    0x00000008   /*!< Field of type (direction) buffer */
#define EP_CFG_EP_NUM_Msk                    0x000000F0   /*!< Number field buffer */
#define EP_CFG_MULT_Msk                      0x00000300   /*!< Field number of operations performed in one micro frame */

/*-- START_ADDR: EndPoint RAM start addres register --------------------------*/

typedef struct {
    uint32_t STARTADDR                         :16;         /*!< Start address space allocated for the buffer */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _START_ADDR_bits;

/* Bit field positions: */
#define START_ADDR_STARTADDR_Pos             0            /*!< Start address space allocated for the buffer */

/* Bit field masks: */
#define START_ADDR_STARTADDR_Msk             0x0000FFFF   /*!< Start address space allocated for the buffer */

/*-- END_ADDR: EndPoint RAM end addres register ------------------------------*/

typedef struct {
    uint32_t ENDADDR                           :16;         /*!< The end of address space allocated for the buffer */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _END_ADDR_bits;

/* Bit field positions: */
#define END_ADDR_ENDADDR_Pos                 0            /*!< The end of address space allocated for the buffer */

/* Bit field masks: */
#define END_ADDR_ENDADDR_Msk                 0x0000FFFF   /*!< The end of address space allocated for the buffer */

/*-- OTG_IRQ_STAT: USB OTG interrupt flag register ---------------------------*/

typedef struct {
    uint32_t VBUSERR                           :1;          /*!< Enable interrupt a_clr_err */
    uint32_t SPRDETECTED                       :1;          /*!< Enable interrupt srp_detected */
    uint32_t HANDOFF_INTR                      :1;          /*!< Interrupt when the output state Id */
    uint32_t SPR_FAIL                          :1;          /*!< Indication of lack of response from the host mode operation Device */
    uint32_t DEVICE                            :1;          /*!< Set when the kernel is running as a device controller */
    uint32_t HOST                              :1;          /*!< Set when the kernel is running as a host controller */
    uint32_t A_BUSREQ                          :1;          /*!< Request A device control bus */
    uint32_t A_BUSDROP                         :1;          /*!< Set when the device A, you must disconnect bus */
    uint32_t A_HNPEN                           :1;          /*!< Resolution run HNP device A */
    uint32_t B_HNPEN                           :1;          /*!< Resolution run HNP device A */
    uint32_t B_BUSREQ                          :1;          /*!< Request bus control device B */
    uint32_t A_SUSPENDREQ                      :1;          /*!< Request A suspension device */
    uint32_t A_DEVICE                          :1;          /*!< Display device A connections */
    uint32_t B_DEVICE                          :1;          /*!< Display device B connections */
    uint32_t SESSION_FAIL                      :1;          /*!< Bit is device B, A when the device interrupts the signal Vbus. */
    uint32_t SUSPENDEN                         :1;          /*!< Request */
    uint32_t A_DEVCHANGE                       :1;          /*!< Bit is set when there is a change device A. At the same time, the appropriate interrupt enable bit. */
    uint32_t B_DEVCHANGE                       :1;          /*!< Bit is set when you change the display B. Simultaneously, the appropriate interrupt enable bit */
    uint32_t DEVSYNC                           :1;          /*!< When resynchronization device this bit is set and the corresponding interrupt enable bit */
    uint32_t HOSTSYNC                          :1;          /*!< When resynchronization host this bit is set and the corresponding interrupt enable bit */
    uint32_t DISCON                            :1;          /*!< Bit is set when disconnected not in suspend mode */
    uint32_t Reserved0                         :11;         /*!< Reserved */
} _OTG_IRQ_STAT_bits;

/* Bit field positions: */
#define OTG_IRQ_STAT_VBUSERR_Pos             0            /*!< Enable interrupt a_clr_err */
#define OTG_IRQ_STAT_SPRDETECTED_Pos         1            /*!< Enable interrupt srp_detected */
#define OTG_IRQ_STAT_HANDOFF_INTR_Pos        2            /*!< Interrupt when the output state Id */
#define OTG_IRQ_STAT_SPR_FAIL_Pos            3            /*!< Indication of lack of response from the host mode operation Device */
#define OTG_IRQ_STAT_DEVICE_Pos              4            /*!< Set when the kernel is running as a device controller */
#define OTG_IRQ_STAT_HOST_Pos                5            /*!< Set when the kernel is running as a host controller */
#define OTG_IRQ_STAT_A_BUSREQ_Pos            6            /*!< Request A device control bus */
#define OTG_IRQ_STAT_A_BUSDROP_Pos           7            /*!< Set when the device A, you must disconnect bus */
#define OTG_IRQ_STAT_A_HNPEN_Pos             8            /*!< Resolution run HNP device A */
#define OTG_IRQ_STAT_B_HNPEN_Pos             9            /*!< Resolution run HNP device A */
#define OTG_IRQ_STAT_B_BUSREQ_Pos            10           /*!< Request bus control device B */
#define OTG_IRQ_STAT_A_SUSPENDREQ_Pos        11           /*!< Request A suspension device */
#define OTG_IRQ_STAT_A_DEVICE_Pos            12           /*!< Display device A connections */
#define OTG_IRQ_STAT_B_DEVICE_Pos            13           /*!< Display device B connections */
#define OTG_IRQ_STAT_SESSION_FAIL_Pos        14           /*!< Bit is device B, A when the device interrupts the signal Vbus. */
#define OTG_IRQ_STAT_SUSPENDEN_Pos           15           /*!< Request */
#define OTG_IRQ_STAT_A_DEVCHANGE_Pos         16           /*!< Bit is set when there is a change device A. At the same time, the appropriate interrupt enable bit. */
#define OTG_IRQ_STAT_B_DEVCHANGE_Pos         17           /*!< Bit is set when you change the display B. Simultaneously, the appropriate interrupt enable bit */
#define OTG_IRQ_STAT_DEVSYNC_Pos             18           /*!< When resynchronization device this bit is set and the corresponding interrupt enable bit */
#define OTG_IRQ_STAT_HOSTSYNC_Pos            19           /*!< When resynchronization host this bit is set and the corresponding interrupt enable bit */
#define OTG_IRQ_STAT_DISCON_Pos              20           /*!< Bit is set when disconnected not in suspend mode */

/* Bit field masks: */
#define OTG_IRQ_STAT_VBUSERR_Msk             0x00000001   /*!< Enable interrupt a_clr_err */
#define OTG_IRQ_STAT_SPRDETECTED_Msk         0x00000002   /*!< Enable interrupt srp_detected */
#define OTG_IRQ_STAT_HANDOFF_INTR_Msk        0x00000004   /*!< Interrupt when the output state Id */
#define OTG_IRQ_STAT_SPR_FAIL_Msk            0x00000008   /*!< Indication of lack of response from the host mode operation Device */
#define OTG_IRQ_STAT_DEVICE_Msk              0x00000010   /*!< Set when the kernel is running as a device controller */
#define OTG_IRQ_STAT_HOST_Msk                0x00000020   /*!< Set when the kernel is running as a host controller */
#define OTG_IRQ_STAT_A_BUSREQ_Msk            0x00000040   /*!< Request A device control bus */
#define OTG_IRQ_STAT_A_BUSDROP_Msk           0x00000080   /*!< Set when the device A, you must disconnect bus */
#define OTG_IRQ_STAT_A_HNPEN_Msk             0x00000100   /*!< Resolution run HNP device A */
#define OTG_IRQ_STAT_B_HNPEN_Msk             0x00000200   /*!< Resolution run HNP device A */
#define OTG_IRQ_STAT_B_BUSREQ_Msk            0x00000400   /*!< Request bus control device B */
#define OTG_IRQ_STAT_A_SUSPENDREQ_Msk        0x00000800   /*!< Request A suspension device */
#define OTG_IRQ_STAT_A_DEVICE_Msk            0x00001000   /*!< Display device A connections */
#define OTG_IRQ_STAT_B_DEVICE_Msk            0x00002000   /*!< Display device B connections */
#define OTG_IRQ_STAT_SESSION_FAIL_Msk        0x00004000   /*!< Bit is device B, A when the device interrupts the signal Vbus. */
#define OTG_IRQ_STAT_SUSPENDEN_Msk           0x00008000   /*!< Request */
#define OTG_IRQ_STAT_A_DEVCHANGE_Msk         0x00010000   /*!< Bit is set when there is a change device A. At the same time, the appropriate interrupt enable bit. */
#define OTG_IRQ_STAT_B_DEVCHANGE_Msk         0x00020000   /*!< Bit is set when you change the display B. Simultaneously, the appropriate interrupt enable bit */
#define OTG_IRQ_STAT_DEVSYNC_Msk             0x00040000   /*!< When resynchronization device this bit is set and the corresponding interrupt enable bit */
#define OTG_IRQ_STAT_HOSTSYNC_Msk            0x00080000   /*!< When resynchronization host this bit is set and the corresponding interrupt enable bit */
#define OTG_IRQ_STAT_DISCON_Msk              0x00100000   /*!< Bit is set when disconnected not in suspend mode */

/*-- OTG_IRQ_EN: Interrupt Enable USB OTG register ---------------------------*/

typedef struct {
    uint32_t VBUSERR                           :1;          /*!< Enable interrupt a_clr_err */
    uint32_t SPRDETECTED                       :1;          /*!< Enable interrupt srp_detected */
    uint32_t TRANSINTR                         :1;          /*!< Enable interrupt handoff_intr */
    uint32_t SRPFAIL                           :1;          /*!< Enable interrupt srf_fail */
    uint32_t SESSIONFAIL                       :1;          /*!< Enable interrupt session_fail */
    uint32_t A_DEVCHANGE                       :1;          /*!< Enable interrupt a_device_change */
    uint32_t B_DEVCHANGE                       :1;          /*!< Enable interrupt b_device_change */
    uint32_t DEVSYNCEN                         :1;          /*!< Enable interrupt device_sync_change */
    uint32_t HOSTSYNCEN                        :1;          /*!< Enable interrupt host_sync_change */
    uint32_t DISCONEN                          :1;          /*!< Enable interrupt Disconnect */
    uint32_t Reserved0                         :22;         /*!< Reserved */
} _OTG_IRQ_EN_bits;

/* Bit field positions: */
#define OTG_IRQ_EN_VBUSERR_Pos               0            /*!< Enable interrupt a_clr_err */
#define OTG_IRQ_EN_SPRDETECTED_Pos           1            /*!< Enable interrupt srp_detected */
#define OTG_IRQ_EN_TRANSINTR_Pos             2            /*!< Enable interrupt handoff_intr */
#define OTG_IRQ_EN_SRPFAIL_Pos               3            /*!< Enable interrupt srf_fail */
#define OTG_IRQ_EN_SESSIONFAIL_Pos           4            /*!< Enable interrupt session_fail */
#define OTG_IRQ_EN_A_DEVCHANGE_Pos           5            /*!< Enable interrupt a_device_change */
#define OTG_IRQ_EN_B_DEVCHANGE_Pos           6            /*!< Enable interrupt b_device_change */
#define OTG_IRQ_EN_DEVSYNCEN_Pos             7            /*!< Enable interrupt device_sync_change */
#define OTG_IRQ_EN_HOSTSYNCEN_Pos            8            /*!< Enable interrupt host_sync_change */
#define OTG_IRQ_EN_DISCONEN_Pos              9            /*!< Enable interrupt Disconnect */

/* Bit field masks: */
#define OTG_IRQ_EN_VBUSERR_Msk               0x00000001   /*!< Enable interrupt a_clr_err */
#define OTG_IRQ_EN_SPRDETECTED_Msk           0x00000002   /*!< Enable interrupt srp_detected */
#define OTG_IRQ_EN_TRANSINTR_Msk             0x00000004   /*!< Enable interrupt handoff_intr */
#define OTG_IRQ_EN_SRPFAIL_Msk               0x00000008   /*!< Enable interrupt srf_fail */
#define OTG_IRQ_EN_SESSIONFAIL_Msk           0x00000010   /*!< Enable interrupt session_fail */
#define OTG_IRQ_EN_A_DEVCHANGE_Msk           0x00000020   /*!< Enable interrupt a_device_change */
#define OTG_IRQ_EN_B_DEVCHANGE_Msk           0x00000040   /*!< Enable interrupt b_device_change */
#define OTG_IRQ_EN_DEVSYNCEN_Msk             0x00000080   /*!< Enable interrupt device_sync_change */
#define OTG_IRQ_EN_HOSTSYNCEN_Msk            0x00000100   /*!< Enable interrupt host_sync_change */
#define OTG_IRQ_EN_DISCONEN_Msk              0x00000200   /*!< Enable interrupt Disconnect */

/*-- Register map for USBDevice peripheral -----------------------------------*/

typedef struct {
    union {                                                 /*!< EndPoint Data Register */
        __IO uint32_t DATA_BUF;                               /*!< DATA_BUF    : type used for word access */
        __IO _DATA_BUF_bits DATA_BUF_bit;                     /*!< DATA_BUF_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt flag register no control buffer */
        __IO uint32_t IRQ_STAT;                               /*!< IRQ_STAT    : type used for word access */
        __IO _IRQ_STAT_bits IRQ_STAT_bit;                     /*!< IRQ_STAT_bit: structure used for bit access */
    };
    union {                                                 /*!< Enable register Interrupt no control buffer */
        __IO uint32_t IRQ_ENB;                                /*!< IRQ_ENB    : type used for word access */
        __IO _IRQ_ENB_bits IRQ_ENB_bit;                       /*!< IRQ_ENB_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint Available count register */
        __I  uint32_t AVAIL_CNT;                              /*!< AVAIL_CNT    : type used for word access */
        __I  _AVAIL_CNT_bits AVAIL_CNT_bit;                   /*!< AVAIL_CNT_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint Response Set/Clear register */
        __IO uint32_t RSP_SC;                                 /*!< RSP_SC    : type used for word access */
        __IO _RSP_SC_bits RSP_SC_bit;                         /*!< RSP_SC_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint maximum packet size register */
        __IO uint32_t MPS;                                    /*!< MPS    : type used for word access */
        __IO _MPS_bits MPS_bit;                               /*!< MPS_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint Transfer count register */
        __IO uint32_t CNT;                                    /*!< CNT    : type used for word access */
        __IO _CNT_bits CNT_bit;                               /*!< CNT_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint configuration register */
        __IO uint32_t EP_CFG;                                 /*!< EP_CFG    : type used for word access */
        __IO _EP_CFG_bits EP_CFG_bit;                         /*!< EP_CFG_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint RAM start addres register */
        __IO uint32_t START_ADDR;                             /*!< START_ADDR    : type used for word access */
        __IO _START_ADDR_bits START_ADDR_bit;                 /*!< START_ADDR_bit: structure used for bit access */
    };
    union {                                                 /*!< EndPoint RAM end addres register */
        __IO uint32_t END_ADDR;                               /*!< END_ADDR    : type used for word access */
        __IO _END_ADDR_bits END_ADDR_bit;                     /*!< END_ADDR_bit: structure used for bit access */
    };
} NT_USB_EP_TypeDef;

typedef struct {
    union {                                                 /*!< Interrupt status register */
        __IO uint32_t IRQ_STAT_L;                             /*!< IRQ_STAT_L    : type used for word access */
        __IO _IRQ_STAT_L_bits IRQ_STAT_L_bit;                 /*!< IRQ_STAT_L_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Interrupt enable register */
        __IO uint32_t IRQ_ENB_L;                              /*!< IRQ_ENB_L    : type used for word access */
        __IO _IRQ_ENB_L_bits IRQ_ENB_L_bit;                   /*!< IRQ_ENB_L_bit: structure used for bit access */
    };
    uint32_t Reserved1;                                     /*!< Reserved */
    union {                                                 /*!< USB Interrupt status register */
        __IO uint32_t USB_IRQ_STAT;                           /*!< USB_IRQ_STAT    : type used for word access */
        __IO _USB_IRQ_STAT_bits USB_IRQ_STAT_bit;             /*!< USB_IRQ_STAT_bit: structure used for bit access */
    };
    union {                                                 /*!< USB Interrupt enable register */
        __IO uint32_t USB_IRQ_ENB;                            /*!< USB_IRQ_ENB    : type used for word access */
        __IO _USB_IRQ_ENB_bits USB_IRQ_ENB_bit;               /*!< USB_IRQ_ENB_bit: structure used for bit access */
    };
    union {                                                 /*!< USB Operations register */
        __IO uint32_t USB_OPER;                               /*!< USB_OPER    : type used for word access */
        __IO _USB_OPER_bits USB_OPER_bit;                     /*!< USB_OPER_bit: structure used for bit access */
    };
    union {                                                 /*!< USB Frame counter register */
        __I  uint32_t USB_FRAME_CNT;                          /*!< USB_FRAME_CNT    : type used for word access */
        __I  _USB_FRAME_CNT_bits USB_FRAME_CNT_bit;           /*!< USB_FRAME_CNT_bit: structure used for bit access */
    };
    union {                                                 /*!< USB Address register */
        __IO uint32_t USB_ADDR;                               /*!< USB_ADDR    : type used for word access */
        __IO _USB_ADDR_bits USB_ADDR_bit;                     /*!< USB_ADDR_bit: structure used for bit access */
    };
    uint32_t Reserved2;                                     /*!< Reserved */
    union {                                                 /*!< Data buffer for transmission register (Control EndPoint) */
        __IO uint32_t CEP_DATA_BUF;                           /*!< CEP_DATA_BUF    : type used for word access */
        __IO _CEP_DATA_BUF_bits CEP_DATA_BUF_bit;             /*!< CEP_DATA_BUF_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register and buffer status (Control EndPoint) */
        __IO uint32_t CEP_CTRL_STAT;                          /*!< CEP_CTRL_STAT    : type used for word access */
        __IO _CEP_CTRL_STAT_bits CEP_CTRL_STAT_bit;           /*!< CEP_CTRL_STAT_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt Enable buffer register (Control EndPoint) */
        __IO uint32_t CEP_IRQ_ENB;                            /*!< CEP_IRQ_ENB    : type used for word access */
        __IO _CEP_IRQ_ENB_bits CEP_IRQ_ENB_bit;               /*!< CEP_IRQ_ENB_bit: structure used for bit access */
    };
    union {                                                 /*!< Buffer interrupt flag register (Control EndPoint) */
        __IO uint32_t CEP_IRQ_STAT;                           /*!< CEP_IRQ_STAT    : type used for word access */
        __IO _CEP_IRQ_STAT_bits CEP_IRQ_STAT_bit;             /*!< CEP_IRQ_STAT_bit: structure used for bit access */
    };
    union {                                                 /*!< In transfer data count register */
        __IO uint32_t IN_TRNSFR_CNT;                          /*!< IN_TRNSFR_CNT    : type used for word access */
        __IO _IN_TRNSFR_CNT_bits IN_TRNSFR_CNT_bit;           /*!< IN_TRNSFR_CNT_bit: structure used for bit access */
    };
    union {                                                 /*!< Out-transfer data count register */
        __I  uint32_t OUT_TRNSFR_CNT;                         /*!< OUT_TRNSFR_CNT    : type used for word access */
        __I  _OUT_TRNSFR_CNT_bits OUT_TRNSFR_CNT_bit;         /*!< OUT_TRNSFR_CNT_bit: structure used for bit access */
    };
    uint32_t Reserved3;                                     /*!< Reserved */
    union {                                                 /*!< Register zero and first byte packet Setup */
        __I  uint32_t SETUP1_0;                               /*!< SETUP1_0    : type used for word access */
        __I  _SETUP1_0_bits SETUP1_0_bit;                     /*!< SETUP1_0_bit: structure used for bit access */
    };
    union {                                                 /*!< Register 2nd and 3rd bytes of the packet Setup */
        __I  uint32_t SETUP3_2;                               /*!< SETUP3_2    : type used for word access */
        __I  _SETUP3_2_bits SETUP3_2_bit;                     /*!< SETUP3_2_bit: structure used for bit access */
    };
    union {                                                 /*!< Register 4th and 5th bytes of the packet Setup */
        __I  uint32_t SETUP5_4;                               /*!< SETUP5_4    : type used for word access */
        __I  _SETUP5_4_bits SETUP5_4_bit;                     /*!< SETUP5_4_bit: structure used for bit access */
    };
    union {                                                 /*!< Register on the 6th and 7th byte packet Setup */
        __I  uint32_t SETUP7_6;                               /*!< SETUP7_6    : type used for word access */
        __I  _SETUP7_6_bits SETUP7_6_bit;                     /*!< SETUP7_6_bit: structure used for bit access */
    };
    union {                                                 /*!< Control EndPoint RAM start Addr register */
        __IO uint32_t CEP_START_ADDR;                         /*!< CEP_START_ADDR    : type used for word access */
        __IO _CEP_START_ADDR_bits CEP_START_ADDR_bit;         /*!< CEP_START_ADDR_bit: structure used for bit access */
    };
    union {                                                 /*!< Control EndPoint RAM end Addr register */
        __IO uint32_t CEP_END_ADDR;                           /*!< CEP_END_ADDR    : type used for word access */
        __IO _CEP_END_ADDR_bits CEP_END_ADDR_bit;             /*!< CEP_END_ADDR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register control DMA */
        __IO uint32_t DMA_CTRL_STS;                           /*!< DMA_CTRL_STS    : type used for word access */
        __IO _DMA_CTRL_STS_bits DMA_CTRL_STS_bit;             /*!< DMA_CTRL_STS_bit: structure used for bit access */
    };
    union {                                                 /*!< DMA Count Register */
        __IO uint32_t DMA_CNT;                                /*!< DMA_CNT    : type used for word access */
        __IO _DMA_CNT_bits DMA_CNT_bit;                       /*!< DMA_CNT_bit: structure used for bit access */
    };
    NT_USB_EP_TypeDef USB_EP[4];
    uint32_t Reserved4[383];                                /*!< Reserved */
    __IO uint32_t AHB_DMA_ADDR;                             /*!< AHB addr register */
    union {                                                 /*!< USB OTG interrupt flag register */
        __IO uint32_t OTG_IRQ_STAT;                           /*!< OTG_IRQ_STAT    : type used for word access */
        __IO _OTG_IRQ_STAT_bits OTG_IRQ_STAT_bit;             /*!< OTG_IRQ_STAT_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt Enable USB OTG register */
        __IO uint32_t OTG_IRQ_EN;                             /*!< OTG_IRQ_EN    : type used for word access */
        __IO _OTG_IRQ_EN_bits OTG_IRQ_EN_bit;                 /*!< OTG_IRQ_EN_bit: structure used for bit access */
    };
} NT_USBDevice_TypeDef;

/******************************************************************************/
/*                      Watchdog controller registers                         */
/******************************************************************************/

/*-- WDTCTRL: Watchdog Control Register --------------------------------------*/

typedef struct {
    uint32_t INTEN                             :1;          /*!< Enable the interrupt event */
    uint32_t RESEN                             :1;          /*!< Enable watchdog reset output */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _WDTCTRL_bits;

/* Bit field positions: */
#define WDTCTRL_INTEN_Pos                    0            /*!< Enable the interrupt event */
#define WDTCTRL_RESEN_Pos                    1            /*!< Enable watchdog reset output */

/* Bit field masks: */
#define WDTCTRL_INTEN_Msk                    0x00000001   /*!< Enable the interrupt event */
#define WDTCTRL_RESEN_Msk                    0x00000002   /*!< Enable watchdog reset output */

/*-- WDTRIS: Watchdog Raw Interrupt Status Register --------------------------*/

typedef struct {
    uint32_t RAWWDTINT                         :1;          /*!< Raw interrupt status from the counter */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _WDTRIS_bits;

/* Bit field positions: */
#define WDTRIS_RAWWDTINT_Pos                 0            /*!< Raw interrupt status from the counter */

/* Bit field masks: */
#define WDTRIS_RAWWDTINT_Msk                 0x00000001   /*!< Raw interrupt status from the counter */

/*-- WDTMIS: Watchdog Interrupt Status Register ------------------------------*/

typedef struct {
    uint32_t WDTINT                            :1;          /*!< Enabled interrupt status from the counter */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _WDTMIS_bits;

/* Bit field positions: */
#define WDTMIS_WDTINT_Pos                    0            /*!< Enabled interrupt status from the counter */

/* Bit field masks: */
#define WDTMIS_WDTINT_Msk                    0x00000001   /*!< Enabled interrupt status from the counter */

/*-- LOCK: Watchdog Lock Register --------------------------------------------*/

typedef struct {
    uint32_t REG_WR_DIS                        :1;          /*!< Disable write to all registers Watchdog */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _LOCK_bits;

/* Bit field positions: */
#define LOCK_REG_WR_DIS_Pos                  0            /*!< Disable write to all registers Watchdog */

/* Bit field masks: */
#define LOCK_REG_WR_DIS_Msk                  0x00000001   /*!< Disable write to all registers Watchdog */

/*-- Register map for WDT peripheral -----------------------------------------*/

typedef struct {
    __IO uint32_t LOAD;                                     /*!< Watchdog Load Register */
    __I  uint32_t WDTVAL;                                   /*!< Watchdog Value Register */
    union {                                                 /*!< Watchdog Control Register */
        __IO uint32_t WDTCTRL;                                /*!< WDTCTRL    : type used for word access */
        __IO _WDTCTRL_bits WDTCTRL_bit;                       /*!< WDTCTRL_bit: structure used for bit access */
    };
    __O  uint32_t INTCLR;                                   /*!< Watchdog Clear Interrupt Register */
    union {                                                 /*!< Watchdog Raw Interrupt Status Register */
        __I  uint32_t WDTRIS;                                 /*!< WDTRIS    : type used for word access */
        __I  _WDTRIS_bits WDTRIS_bit;                         /*!< WDTRIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Watchdog Interrupt Status Register */
        __I  uint32_t WDTMIS;                                 /*!< WDTMIS    : type used for word access */
        __I  _WDTMIS_bits WDTMIS_bit;                         /*!< WDTMIS_bit: structure used for bit access */
    };
    uint32_t Reserved0[762];                                /*!< Reserved */
    union {                                                 /*!< Watchdog Lock Register */
        __O  uint32_t LOCK;                                   /*!< LOCK    : type used for word access */
        __O  _LOCK_bits LOCK_bit;                             /*!< LOCK_bit: structure used for bit access */
    };
} NT_WDT_TypeDef;

/******************************************************************************/
/*                         I2C controller registers                           */
/******************************************************************************/

/*-- SDA: Data register ------------------------------------------------------*/

typedef struct {
    uint32_t DATA                              :8;          /*!< Data field */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _SDA_bits;

/* Bit field positions: */
#define SDA_DATA_Pos                         0            /*!< Data field */

/* Bit field masks: */
#define SDA_DATA_Msk                         0x000000FF   /*!< Data field */

/*-- ST: Status register -----------------------------------------------------*/

typedef struct {
    uint32_t MODE                              :6;          /*!< Status code */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t INT                               :1;          /*!< Interrupt flag */
    uint32_t Reserved1                         :24;         /*!< Reserved */
} _ST_bits;

/* Bit field positions: */
#define ST_MODE_Pos                          0            /*!< Status code */
#define ST_INT_Pos                           7            /*!< Interrupt flag */

/* Bit field masks: */
#define ST_MODE_Msk                          0x0000003F   /*!< Status code */
#define ST_INT_Msk                           0x00000080   /*!< Interrupt flag */

/*-- CST: Status and control register ----------------------------------------*/

typedef struct {
    uint32_t BB                                :1;          /*!< Flag employment bus */
    uint32_t TOCDIV                            :2;          /*!< Coeff. div */
    uint32_t TOERR                             :1;          /*!< Flag error simple bus */
    uint32_t TSDA                              :1;          /*!< Bit test SDA */
    uint32_t TGSCL                             :1;          /*!< Bit switch SCL */
    uint32_t PECNEXT                           :1;          /*!< Bit control transmit CRC */
    uint32_t PECFAULT                          :1;          /*!< Error flag */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _CST_bits;

/* Bit field positions: */
#define CST_BB_Pos                           0            /*!< Flag employment bus */
#define CST_TOCDIV_Pos                       1            /*!< Coeff. div */
#define CST_TOERR_Pos                        3            /*!< Flag error simple bus */
#define CST_TSDA_Pos                         4            /*!< Bit test SDA */
#define CST_TGSCL_Pos                        5            /*!< Bit switch SCL */
#define CST_PECNEXT_Pos                      6            /*!< Bit control transmit CRC */
#define CST_PECFAULT_Pos                     7            /*!< Error flag */

/* Bit field masks: */
#define CST_BB_Msk                           0x00000001   /*!< Flag employment bus */
#define CST_TOCDIV_Msk                       0x00000006   /*!< Coeff. div */
#define CST_TOERR_Msk                        0x00000008   /*!< Flag error simple bus */
#define CST_TSDA_Msk                         0x00000010   /*!< Bit test SDA */
#define CST_TGSCL_Msk                        0x00000020   /*!< Bit switch SCL */
#define CST_PECNEXT_Msk                      0x00000040   /*!< Bit control transmit CRC */
#define CST_PECFAULT_Msk                     0x00000080   /*!< Error flag */

/*-- CTL1: Control register 1 ------------------------------------------------*/

typedef struct {
    uint32_t START                             :1;          /*!< Start bit */
    uint32_t STOP                              :1;          /*!< Stop bit */
    uint32_t INTEN                             :1;          /*!< Interrupt enable bit */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t ACK                               :1;          /*!< Acknowledgment bit reception */
    uint32_t GCMEN                             :1;          /*!< Control bit part a response to the general call address */
    uint32_t SMBARE                            :1;          /*!< Control bit part a response to the response address */
    uint32_t CLRST                             :1;          /*!< Bit reset flag interrupt */
    uint32_t Reserved1                         :24;         /*!< Reserved */
} _CTL1_bits;

/* Bit field positions: */
#define CTL1_START_Pos                       0            /*!< Start bit */
#define CTL1_STOP_Pos                        1            /*!< Stop bit */
#define CTL1_INTEN_Pos                       2            /*!< Interrupt enable bit */
#define CTL1_ACK_Pos                         4            /*!< Acknowledgment bit reception */
#define CTL1_GCMEN_Pos                       5            /*!< Control bit part a response to the general call address */
#define CTL1_SMBARE_Pos                      6            /*!< Control bit part a response to the response address */
#define CTL1_CLRST_Pos                       7            /*!< Bit reset flag interrupt */

/* Bit field masks: */
#define CTL1_START_Msk                       0x00000001   /*!< Start bit */
#define CTL1_STOP_Msk                        0x00000002   /*!< Stop bit */
#define CTL1_INTEN_Msk                       0x00000004   /*!< Interrupt enable bit */
#define CTL1_ACK_Msk                         0x00000010   /*!< Acknowledgment bit reception */
#define CTL1_GCMEN_Msk                       0x00000020   /*!< Control bit part a response to the general call address */
#define CTL1_SMBARE_Msk                      0x00000040   /*!< Control bit part a response to the response address */
#define CTL1_CLRST_Msk                       0x00000080   /*!< Bit reset flag interrupt */

/*-- ADDR: Register own address ----------------------------------------------*/

typedef struct {
    uint32_t ADDR                              :7;          /*!< Own 7-bit address */
    uint32_t SAEN                              :1;          /*!< Enable bit address recognition */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _ADDR_bits;

/* Bit field positions: */
#define ADDR_ADDR_Pos                        0            /*!< Own 7-bit address */
#define ADDR_SAEN_Pos                        7            /*!< Enable bit address recognition */

/* Bit field masks: */
#define ADDR_ADDR_Msk                        0x0000007F   /*!< Own 7-bit address */
#define ADDR_SAEN_Msk                        0x00000080   /*!< Enable bit address recognition */

/*-- CTL2: Control register 2 ------------------------------------------------*/

typedef struct {
    uint32_t ENABLE                            :1;          /*!< Enable I2C */
    uint32_t SCLFRQ                            :7;          /*!< Field frequency selection signal at pin SCL in master mode */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _CTL2_bits;

/* Bit field positions: */
#define CTL2_ENABLE_Pos                      0            /*!< Enable I2C */
#define CTL2_SCLFRQ_Pos                      1            /*!< Field frequency selection signal at pin SCL in master mode */

/* Bit field masks: */
#define CTL2_ENABLE_Msk                      0x00000001   /*!< Enable I2C */
#define CTL2_SCLFRQ_Msk                      0x000000FE   /*!< Field frequency selection signal at pin SCL in master mode */

/*-- TOPR: Prescaler load register -------------------------------------------*/

typedef struct {
    uint32_t SMBTOPR                           :8;          /*!< Prescaler reload value field */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _TOPR_bits;

/* Bit field positions: */
#define TOPR_SMBTOPR_Pos                     0            /*!< Prescaler reload value field */

/* Bit field masks: */
#define TOPR_SMBTOPR_Msk                     0x000000FF   /*!< Prescaler reload value field */

/*-- CTL3: Control register 3 ------------------------------------------------*/

typedef struct {
    uint32_t S10ADR                            :3;          /*!< Upper bits of 10-bit slave address */
    uint32_t S10EN                             :1;          /*!< Bit enabled 10-bit addressing slave */
    uint32_t HSDIV                             :4;          /*!< Field frequency selection signal at pin SCL in HS master mode */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _CTL3_bits;

/* Bit field positions: */
#define CTL3_S10ADR_Pos                      0            /*!< Upper bits of 10-bit slave address */
#define CTL3_S10EN_Pos                       3            /*!< Bit enabled 10-bit addressing slave */
#define CTL3_HSDIV_Pos                       4            /*!< Field frequency selection signal at pin SCL in HS master mode */

/* Bit field masks: */
#define CTL3_S10ADR_Msk                      0x00000007   /*!< Upper bits of 10-bit slave address */
#define CTL3_S10EN_Msk                       0x00000008   /*!< Bit enabled 10-bit addressing slave */
#define CTL3_HSDIV_Msk                       0x000000F0   /*!< Field frequency selection signal at pin SCL in HS master mode */

/*-- Register map for I2C peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Data register */
        __IO uint32_t SDA;                                    /*!< SDA    : type used for word access */
        __IO _SDA_bits SDA_bit;                               /*!< SDA_bit: structure used for bit access */
    };
    union {                                                 /*!< Status register */
        __I  uint32_t ST;                                     /*!< ST    : type used for word access */
        __I  _ST_bits ST_bit;                                 /*!< ST_bit: structure used for bit access */
    };
    union {                                                 /*!< Status and control register */
        __IO uint32_t CST;                                    /*!< CST    : type used for word access */
        __IO _CST_bits CST_bit;                               /*!< CST_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register 1 */
        __IO uint32_t CTL1;                                   /*!< CTL1    : type used for word access */
        __IO _CTL1_bits CTL1_bit;                             /*!< CTL1_bit: structure used for bit access */
    };
    union {                                                 /*!< Register own address */
        __IO uint32_t ADDR;                                   /*!< ADDR    : type used for word access */
        __IO _ADDR_bits ADDR_bit;                             /*!< ADDR_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register 2 */
        __IO uint32_t CTL2;                                   /*!< CTL2    : type used for word access */
        __IO _CTL2_bits CTL2_bit;                             /*!< CTL2_bit: structure used for bit access */
    };
    union {                                                 /*!< Prescaler load register */
        __IO uint32_t TOPR;                                   /*!< TOPR    : type used for word access */
        __IO _TOPR_bits TOPR_bit;                             /*!< TOPR_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register 3 */
        __IO uint32_t CTL3;                                   /*!< CTL3    : type used for word access */
        __IO _CTL3_bits CTL3_bit;                             /*!< CTL3_bit: structure used for bit access */
    };
} NT_I2C_TypeDef;

/******************************************************************************/
/*                        Timer controller registers                          */
/******************************************************************************/

/*-- TCTRL: Control Timer register -------------------------------------------*/

typedef struct {
    uint32_t ON                                :1;          /*!< Enable Timer */
    uint32_t EXTINPUT_EN                       :1;          /*!< Enable extern */
    uint32_t EXTINPUT_CLK                      :1;          /*!< Enable extern input clock */
    uint32_t INTEN                             :1;          /*!< Enable Timer interrupt */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _TCTRL_bits;

/* Bit field positions: */
#define TCTRL_ON_Pos                         0            /*!< Enable Timer */
#define TCTRL_EXTINPUT_EN_Pos                1            /*!< Enable extern */
#define TCTRL_EXTINPUT_CLK_Pos               2            /*!< Enable extern input clock */
#define TCTRL_INTEN_Pos                      3            /*!< Enable Timer interrupt */

/* Bit field masks: */
#define TCTRL_ON_Msk                         0x00000001   /*!< Enable Timer */
#define TCTRL_EXTINPUT_EN_Msk                0x00000002   /*!< Enable extern */
#define TCTRL_EXTINPUT_CLK_Msk               0x00000004   /*!< Enable extern input clock */
#define TCTRL_INTEN_Msk                      0x00000008   /*!< Enable Timer interrupt */

/*-- INTSTATUS_INTCLEAR ------------------------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< Timer interrupt flag */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _INTSTATUS_INTCLEAR_bits;

/* Bit field positions: */
#define INTSTATUS_INTCLEAR_INT_Pos           0            /*!< Timer interrupt flag */

/* Bit field masks: */
#define INTSTATUS_INTCLEAR_INT_Msk           0x00000001   /*!< Timer interrupt flag */

/*-- Register map for TIMER peripheral ---------------------------------------*/

typedef struct {
    union {                                                 /*!< Control Timer register */
        __IO uint32_t TCTRL;                                  /*!< TCTRL    : type used for word access */
        __IO _TCTRL_bits TCTRL_bit;                           /*!< TCTRL_bit: structure used for bit access */
    };
    __IO uint32_t TIMER;                                    /*!< Current value timer register */
    __IO uint32_t RELOAD;                                   /*!< Reload value timer register */
    union {                                                 /*!<  */
        __IO uint32_t INTSTATUS_INTCLEAR;                     /*!< INTSTATUS_INTCLEAR    : type used for word access */
        __IO _INTSTATUS_INTCLEAR_bits INTSTATUS_INTCLEAR_bit; /*!< INTSTATUS_INTCLEAR_bit: structure used for bit access */
    };
} NT_TIMER_TypeDef;

/******************************************************************************/
/*                         DMA controller registers                           */
/******************************************************************************/

/*-- STATUS: Status DMA register ---------------------------------------------*/

typedef struct {
    uint32_t MASTER_EN                         :1;          /*!< Indicate enable DMA */
    uint32_t Reserved0                         :3;          /*!< Reserved */
    uint32_t STATE                             :4;          /*!< State of DMA */
    uint32_t Reserved1                         :8;          /*!< Reserved */
    uint32_t CHNLS                             :5;          /*!< Number channel DMA (write: N-1) */
    uint32_t Reserved2                         :11;         /*!< Reserved */
} _STATUS_bits;

/* Bit field positions: */
#define STATUS_MASTER_EN_Pos                 0            /*!< Indicate enable DMA */
#define STATUS_STATE_Pos                     4            /*!< State of DMA */
#define STATUS_CHNLS_Pos                     16           /*!< Number channel DMA (write: N-1) */

/* Bit field masks: */
#define STATUS_MASTER_EN_Msk                 0x00000001   /*!< Indicate enable DMA */
#define STATUS_STATE_Msk                     0x000000F0   /*!< State of DMA */
#define STATUS_CHNLS_Msk                     0x001F0000   /*!< Number channel DMA (write: N-1) */

/*-- CFG: Configurate DMA register -------------------------------------------*/

typedef struct {
    uint32_t MASTER_EN                         :1;          /*!< Enable DMA */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t CHNL_PROT_CTRL                    :3;          /*!< Enable control HPROT.1 for access indication with buffering */
    uint32_t Reserved1                         :24;         /*!< Reserved */
} _CFG_bits;

/* Bit field positions: */
#define CFG_MASTER_EN_Pos                    0            /*!< Enable DMA */
#define CFG_CHNL_PROT_CTRL_Pos               5            /*!< Enable control HPROT.1 for access indication with buffering */

/* Bit field masks: */
#define CFG_MASTER_EN_Msk                    0x00000001   /*!< Enable DMA */
#define CFG_CHNL_PROT_CTRL_Msk               0x000000E0   /*!< Enable control HPROT.1 for access indication with buffering */

/*-- CTRL_BASE_PTR: Base address register control data channels --------------*/

typedef struct {
    uint32_t Reserved0                         :10;         /*!< Reserved */
    uint32_t CTRL_BASE_PTR                     :22;         /*!< Pointer to base address of the primary structure of the control data */
} _CTRL_BASE_PTR_bits;

/* Bit field positions: */
#define CTRL_BASE_PTR_CTRL_BASE_PTR_Pos      10           /*!< Pointer to base address of the primary structure of the control data */

/* Bit field masks: */
#define CTRL_BASE_PTR_CTRL_BASE_PTR_Msk      0xFFFFFC00   /*!< Pointer to base address of the primary structure of the control data */

/*-- WAITONREQ_STATUS: DMA wait request status -------------------------------*/

typedef struct {
    uint32_t DMA_WAITREQ0                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ1                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ2                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ3                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ4                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ5                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ6                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ7                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ8                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ9                      :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ10                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ11                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ12                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ13                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ14                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ15                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ16                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ17                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ18                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ19                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ20                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ21                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ22                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t DMA_WAITREQ23                     :1;          /*!< Returns the status of the DMA request signals */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _WAITONREQ_STATUS_bits;

/* Bit field positions: */
#define WAITONREQ_STATUS_DMA_WAITREQ0_Pos    0            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ1_Pos    1            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ2_Pos    2            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ3_Pos    3            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ4_Pos    4            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ5_Pos    5            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ6_Pos    6            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ7_Pos    7            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ8_Pos    8            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ9_Pos    9            /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ10_Pos   10           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ11_Pos   11           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ12_Pos   12           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ13_Pos   13           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ14_Pos   14           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ15_Pos   15           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ16_Pos   16           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ17_Pos   17           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ18_Pos   18           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ19_Pos   19           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ20_Pos   20           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ21_Pos   21           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ22_Pos   22           /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ23_Pos   23           /*!< Returns the status of the DMA request signals */

/* Bit field masks: */
#define WAITONREQ_STATUS_DMA_WAITREQ0_Msk    0x00000001   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ1_Msk    0x00000002   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ2_Msk    0x00000004   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ3_Msk    0x00000008   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ4_Msk    0x00000010   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ5_Msk    0x00000020   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ6_Msk    0x00000040   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ7_Msk    0x00000080   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ8_Msk    0x00000100   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ9_Msk    0x00000200   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ10_Msk   0x00000400   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ11_Msk   0x00000800   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ12_Msk   0x00001000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ13_Msk   0x00002000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ14_Msk   0x00004000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ15_Msk   0x00008000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ16_Msk   0x00010000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ17_Msk   0x00020000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ18_Msk   0x00040000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ19_Msk   0x00080000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ20_Msk   0x00100000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ21_Msk   0x00200000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ22_Msk   0x00400000   /*!< Returns the status of the DMA request signals */
#define WAITONREQ_STATUS_DMA_WAITREQ23_Msk   0x00800000   /*!< Returns the status of the DMA request signals */

/*-- CHNL_SW_REQUEST: Register software process request DMA channels ---------*/

typedef struct {
    uint32_t DMA_SWREQ0                        :1;          /*!< Set software request on channel 0 */
    uint32_t DMA_SWREQ1                        :1;          /*!< Set software request on channel 1 */
    uint32_t DMA_SWREQ2                        :1;          /*!< Set software request on channel 2 */
    uint32_t DMA_SWREQ3                        :1;          /*!< Set software request on channel 3 */
    uint32_t DMA_SWREQ4                        :1;          /*!< Set software request on channel 4 */
    uint32_t DMA_SWREQ5                        :1;          /*!< Set software request on channel 5 */
    uint32_t DMA_SWREQ6                        :1;          /*!< Set software request on channel 6 */
    uint32_t DMA_SWREQ7                        :1;          /*!< Set software request on channel 7 */
    uint32_t DMA_SWREQ8                        :1;          /*!< Set software request on channel 8 */
    uint32_t DMA_SWREQ9                        :1;          /*!< Set software request on channel 9 */
    uint32_t DMA_SWREQ10                       :1;          /*!< Set software request on channel 10 */
    uint32_t DMA_SWREQ11                       :1;          /*!< Set software request on channel 11 */
    uint32_t DMA_SWREQ12                       :1;          /*!< Set software request on channel 12 */
    uint32_t DMA_SWREQ13                       :1;          /*!< Set software request on channel 13 */
    uint32_t DMA_SWREQ14                       :1;          /*!< Set software request on channel 14 */
    uint32_t DMA_SWREQ15                       :1;          /*!< Set software request on channel 15 */
    uint32_t DMA_SWREQ16                       :1;          /*!< Set software request on channel 16 */
    uint32_t DMA_SWREQ17                       :1;          /*!< Set software request on channel 17 */
    uint32_t DMA_SWREQ18                       :1;          /*!< Set software request on channel 18 */
    uint32_t DMA_SWREQ19                       :1;          /*!< Set software request on channel 19 */
    uint32_t DMA_SWREQ20                       :1;          /*!< Set software request on channel 20 */
    uint32_t DMA_SWREQ21                       :1;          /*!< Set software request on channel 21 */
    uint32_t DMA_SWREQ22                       :1;          /*!< Set software request on channel 22 */
    uint32_t DMA_SWREQ23                       :1;          /*!< Set software request on channel 23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_SW_REQUEST_bits;

/* Bit field positions: */
#define CHNL_SW_REQUEST_DMA_SWREQ0_Pos       0            /*!< Set software request on channel 0 */
#define CHNL_SW_REQUEST_DMA_SWREQ1_Pos       1            /*!< Set software request on channel 1 */
#define CHNL_SW_REQUEST_DMA_SWREQ2_Pos       2            /*!< Set software request on channel 2 */
#define CHNL_SW_REQUEST_DMA_SWREQ3_Pos       3            /*!< Set software request on channel 3 */
#define CHNL_SW_REQUEST_DMA_SWREQ4_Pos       4            /*!< Set software request on channel 4 */
#define CHNL_SW_REQUEST_DMA_SWREQ5_Pos       5            /*!< Set software request on channel 5 */
#define CHNL_SW_REQUEST_DMA_SWREQ6_Pos       6            /*!< Set software request on channel 6 */
#define CHNL_SW_REQUEST_DMA_SWREQ7_Pos       7            /*!< Set software request on channel 7 */
#define CHNL_SW_REQUEST_DMA_SWREQ8_Pos       8            /*!< Set software request on channel 8 */
#define CHNL_SW_REQUEST_DMA_SWREQ9_Pos       9            /*!< Set software request on channel 9 */
#define CHNL_SW_REQUEST_DMA_SWREQ10_Pos      10           /*!< Set software request on channel 10 */
#define CHNL_SW_REQUEST_DMA_SWREQ11_Pos      11           /*!< Set software request on channel 11 */
#define CHNL_SW_REQUEST_DMA_SWREQ12_Pos      12           /*!< Set software request on channel 12 */
#define CHNL_SW_REQUEST_DMA_SWREQ13_Pos      13           /*!< Set software request on channel 13 */
#define CHNL_SW_REQUEST_DMA_SWREQ14_Pos      14           /*!< Set software request on channel 14 */
#define CHNL_SW_REQUEST_DMA_SWREQ15_Pos      15           /*!< Set software request on channel 15 */
#define CHNL_SW_REQUEST_DMA_SWREQ16_Pos      16           /*!< Set software request on channel 16 */
#define CHNL_SW_REQUEST_DMA_SWREQ17_Pos      17           /*!< Set software request on channel 17 */
#define CHNL_SW_REQUEST_DMA_SWREQ18_Pos      18           /*!< Set software request on channel 18 */
#define CHNL_SW_REQUEST_DMA_SWREQ19_Pos      19           /*!< Set software request on channel 19 */
#define CHNL_SW_REQUEST_DMA_SWREQ20_Pos      20           /*!< Set software request on channel 20 */
#define CHNL_SW_REQUEST_DMA_SWREQ21_Pos      21           /*!< Set software request on channel 21 */
#define CHNL_SW_REQUEST_DMA_SWREQ22_Pos      22           /*!< Set software request on channel 22 */
#define CHNL_SW_REQUEST_DMA_SWREQ23_Pos      23           /*!< Set software request on channel 23 */

/* Bit field masks: */
#define CHNL_SW_REQUEST_DMA_SWREQ0_Msk       0x00000001   /*!< Set software request on channel 0 */
#define CHNL_SW_REQUEST_DMA_SWREQ1_Msk       0x00000002   /*!< Set software request on channel 1 */
#define CHNL_SW_REQUEST_DMA_SWREQ2_Msk       0x00000004   /*!< Set software request on channel 2 */
#define CHNL_SW_REQUEST_DMA_SWREQ3_Msk       0x00000008   /*!< Set software request on channel 3 */
#define CHNL_SW_REQUEST_DMA_SWREQ4_Msk       0x00000010   /*!< Set software request on channel 4 */
#define CHNL_SW_REQUEST_DMA_SWREQ5_Msk       0x00000020   /*!< Set software request on channel 5 */
#define CHNL_SW_REQUEST_DMA_SWREQ6_Msk       0x00000040   /*!< Set software request on channel 6 */
#define CHNL_SW_REQUEST_DMA_SWREQ7_Msk       0x00000080   /*!< Set software request on channel 7 */
#define CHNL_SW_REQUEST_DMA_SWREQ8_Msk       0x00000100   /*!< Set software request on channel 8 */
#define CHNL_SW_REQUEST_DMA_SWREQ9_Msk       0x00000200   /*!< Set software request on channel 9 */
#define CHNL_SW_REQUEST_DMA_SWREQ10_Msk      0x00000400   /*!< Set software request on channel 10 */
#define CHNL_SW_REQUEST_DMA_SWREQ11_Msk      0x00000800   /*!< Set software request on channel 11 */
#define CHNL_SW_REQUEST_DMA_SWREQ12_Msk      0x00001000   /*!< Set software request on channel 12 */
#define CHNL_SW_REQUEST_DMA_SWREQ13_Msk      0x00002000   /*!< Set software request on channel 13 */
#define CHNL_SW_REQUEST_DMA_SWREQ14_Msk      0x00004000   /*!< Set software request on channel 14 */
#define CHNL_SW_REQUEST_DMA_SWREQ15_Msk      0x00008000   /*!< Set software request on channel 15 */
#define CHNL_SW_REQUEST_DMA_SWREQ16_Msk      0x00010000   /*!< Set software request on channel 16 */
#define CHNL_SW_REQUEST_DMA_SWREQ17_Msk      0x00020000   /*!< Set software request on channel 17 */
#define CHNL_SW_REQUEST_DMA_SWREQ18_Msk      0x00040000   /*!< Set software request on channel 18 */
#define CHNL_SW_REQUEST_DMA_SWREQ19_Msk      0x00080000   /*!< Set software request on channel 19 */
#define CHNL_SW_REQUEST_DMA_SWREQ20_Msk      0x00100000   /*!< Set software request on channel 20 */
#define CHNL_SW_REQUEST_DMA_SWREQ21_Msk      0x00200000   /*!< Set software request on channel 21 */
#define CHNL_SW_REQUEST_DMA_SWREQ22_Msk      0x00400000   /*!< Set software request on channel 22 */
#define CHNL_SW_REQUEST_DMA_SWREQ23_Msk      0x00800000   /*!< Set software request on channel 23 */

/*-- CHNL_USEBURST_SET: Register Set Packet Exchange DMA channels ------------*/

typedef struct {
    uint32_t DMA_BURSTSET0                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET1                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET2                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET3                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET4                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET5                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET6                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET7                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET8                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET9                     :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET10                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET11                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET12                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET13                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET14                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET15                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET16                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET17                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET18                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET19                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET20                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET21                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET22                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t DMA_BURSTSET23                    :1;          /*!< Returns the status of the DMA single request signals */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_USEBURST_SET_bits;

/* Bit field positions: */
#define CHNL_USEBURST_SET_DMA_BURSTSET0_Pos  0            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET1_Pos  1            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET2_Pos  2            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET3_Pos  3            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET4_Pos  4            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET5_Pos  5            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET6_Pos  6            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET7_Pos  7            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET8_Pos  8            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET9_Pos  9            /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET10_Pos 10           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET11_Pos 11           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET12_Pos 12           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET13_Pos 13           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET14_Pos 14           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET15_Pos 15           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET16_Pos 16           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET17_Pos 17           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET18_Pos 18           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET19_Pos 19           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET20_Pos 20           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET21_Pos 21           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET22_Pos 22           /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET23_Pos 23           /*!< Returns the status of the DMA single request signals */

/* Bit field masks: */
#define CHNL_USEBURST_SET_DMA_BURSTSET0_Msk  0x00000001   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET1_Msk  0x00000002   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET2_Msk  0x00000004   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET3_Msk  0x00000008   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET4_Msk  0x00000010   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET5_Msk  0x00000020   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET6_Msk  0x00000040   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET7_Msk  0x00000080   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET8_Msk  0x00000100   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET9_Msk  0x00000200   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET10_Msk 0x00000400   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET11_Msk 0x00000800   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET12_Msk 0x00001000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET13_Msk 0x00002000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET14_Msk 0x00004000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET15_Msk 0x00008000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET16_Msk 0x00010000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET17_Msk 0x00020000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET18_Msk 0x00040000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET19_Msk 0x00080000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET20_Msk 0x00100000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET21_Msk 0x00200000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET22_Msk 0x00400000   /*!< Returns the status of the DMA single request signals */
#define CHNL_USEBURST_SET_DMA_BURSTSET23_Msk 0x00800000   /*!< Returns the status of the DMA single request signals */

/*-- CHNL_USEBURST_CLR: Register Clear Packet Exchange DMA channels ----------*/

typedef struct {
    uint32_t DMA_BURSTCLR0                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR1                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR2                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR3                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR4                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR5                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR6                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR7                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR8                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR9                     :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR10                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR11                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR12                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR13                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR14                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR15                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR16                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR17                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR18                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR19                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR20                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR21                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR22                    :1;          /*!< reserved */
    uint32_t DMA_BURSTCLR23                    :1;          /*!< reserved */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_USEBURST_CLR_bits;

/* Bit field positions: */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR0_Pos  0            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR1_Pos  1            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR2_Pos  2            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR3_Pos  3            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR4_Pos  4            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR5_Pos  5            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR6_Pos  6            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR7_Pos  7            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR8_Pos  8            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR9_Pos  9            /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR10_Pos 10           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR11_Pos 11           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR12_Pos 12           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR13_Pos 13           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR14_Pos 14           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR15_Pos 15           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR16_Pos 16           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR17_Pos 17           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR18_Pos 18           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR19_Pos 19           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR20_Pos 20           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR21_Pos 21           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR22_Pos 22           /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR23_Pos 23           /*!< reserved */

/* Bit field masks: */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR0_Msk  0x00000001   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR1_Msk  0x00000002   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR2_Msk  0x00000004   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR3_Msk  0x00000008   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR4_Msk  0x00000010   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR5_Msk  0x00000020   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR6_Msk  0x00000040   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR7_Msk  0x00000080   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR8_Msk  0x00000100   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR9_Msk  0x00000200   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR10_Msk 0x00000400   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR11_Msk 0x00000800   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR12_Msk 0x00001000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR13_Msk 0x00002000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR14_Msk 0x00004000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR15_Msk 0x00008000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR16_Msk 0x00010000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR17_Msk 0x00020000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR18_Msk 0x00040000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR19_Msk 0x00080000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR20_Msk 0x00100000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR21_Msk 0x00200000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR22_Msk 0x00400000   /*!< reserved */
#define CHNL_USEBURST_CLR_DMA_BURSTCLR23_Msk 0x00800000   /*!< reserved */

/*-- CHNL_REQ_MASK_SET: DMA request mask set ---------------------------------*/

typedef struct {
    uint32_t DMA_REQMASKSET0                   :1;
    uint32_t DMA_REQMASKSET1                   :1;
    uint32_t DMA_REQMASKSET2                   :1;
    uint32_t DMA_REQMASKSET3                   :1;
    uint32_t DMA_REQMASKSET4                   :1;
    uint32_t DMA_REQMASKSET5                   :1;
    uint32_t DMA_REQMASKSET6                   :1;
    uint32_t DMA_REQMASKSET7                   :1;
    uint32_t DMA_REQMASKSET8                   :1;
    uint32_t DMA_REQMASKSET9                   :1;
    uint32_t DMA_REQMASKSET10                  :1;
    uint32_t DMA_REQMASKSET11                  :1;
    uint32_t DMA_REQMASKSET12                  :1;
    uint32_t DMA_REQMASKSET13                  :1;
    uint32_t DMA_REQMASKSET14                  :1;
    uint32_t DMA_REQMASKSET15                  :1;
    uint32_t DMA_REQMASKSET16                  :1;
    uint32_t DMA_REQMASKSET17                  :1;
    uint32_t DMA_REQMASKSET18                  :1;
    uint32_t DMA_REQMASKSET19                  :1;
    uint32_t DMA_REQMASKSET20                  :1;
    uint32_t DMA_REQMASKSET21                  :1;
    uint32_t DMA_REQMASKSET22                  :1;
    uint32_t DMA_REQMASKSET23                  :1;
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_REQ_MASK_SET_bits;

/* Bit field positions: */
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET0_Pos0
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET1_Pos1
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET2_Pos2
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET3_Pos3
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET4_Pos4
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET5_Pos5
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET6_Pos6
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET7_Pos7
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET8_Pos8
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET9_Pos9
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET10_Pos10
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET11_Pos11
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET12_Pos12
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET13_Pos13
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET14_Pos14
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET15_Pos15
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET16_Pos16
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET17_Pos17
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET18_Pos18
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET19_Pos19
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET20_Pos20
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET21_Pos21
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET22_Pos22
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET23_Pos23

/* Bit field masks: */
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET0_Msk0x00000001
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET1_Msk0x00000002
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET2_Msk0x00000004
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET3_Msk0x00000008
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET4_Msk0x00000010
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET5_Msk0x00000020
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET6_Msk0x00000040
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET7_Msk0x00000080
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET8_Msk0x00000100
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET9_Msk0x00000200
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET10_Msk0x00000400
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET11_Msk0x00000800
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET12_Msk0x00001000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET13_Msk0x00002000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET14_Msk0x00004000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET15_Msk0x00008000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET16_Msk0x00010000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET17_Msk0x00020000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET18_Msk0x00040000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET19_Msk0x00080000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET20_Msk0x00100000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET21_Msk0x00200000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET22_Msk0x00400000
#define CHNL_REQ_MASK_SET_DMA_REQMASKSET23_Msk0x00800000

/*-- CHNL_REQ_MASK_CLR: DMA request mask clear -------------------------------*/

typedef struct {
    uint32_t DMA_REQMASKCLR0                   :1;
    uint32_t DMA_REQMASKCLR1                   :1;
    uint32_t DMA_REQMASKCLR2                   :1;
    uint32_t DMA_REQMASKCLR3                   :1;
    uint32_t DMA_REQMASKCLR4                   :1;
    uint32_t DMA_REQMASKCLR5                   :1;
    uint32_t DMA_REQMASKCLR6                   :1;
    uint32_t DMA_REQMASKCLR7                   :1;
    uint32_t DMA_REQMASKCLR8                   :1;
    uint32_t DMA_REQMASKCLR9                   :1;
    uint32_t DMA_REQMASKCLR10                  :1;
    uint32_t DMA_REQMASKCLR11                  :1;
    uint32_t DMA_REQMASKCLR12                  :1;
    uint32_t DMA_REQMASKCLR13                  :1;
    uint32_t DMA_REQMASKCLR14                  :1;
    uint32_t DMA_REQMASKCLR15                  :1;
    uint32_t DMA_REQMASKCLR16                  :1;
    uint32_t DMA_REQMASKCLR17                  :1;
    uint32_t DMA_REQMASKCLR18                  :1;
    uint32_t DMA_REQMASKCLR19                  :1;
    uint32_t DMA_REQMASKCLR20                  :1;
    uint32_t DMA_REQMASKCLR21                  :1;
    uint32_t DMA_REQMASKCLR22                  :1;
    uint32_t DMA_REQMASKCLR23                  :1;
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_REQ_MASK_CLR_bits;

/* Bit field positions: */
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR0_Pos0
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR1_Pos1
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR2_Pos2
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR3_Pos3
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR4_Pos4
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR5_Pos5
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR6_Pos6
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR7_Pos7
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR8_Pos8
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR9_Pos9
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR10_Pos10
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR11_Pos11
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR12_Pos12
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR13_Pos13
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR14_Pos14
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR15_Pos15
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR16_Pos16
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR17_Pos17
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR18_Pos18
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR19_Pos19
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR20_Pos20
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR21_Pos21
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR22_Pos22
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR23_Pos23

/* Bit field masks: */
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR0_Msk0x00000001
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR1_Msk0x00000002
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR2_Msk0x00000004
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR3_Msk0x00000008
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR4_Msk0x00000010
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR5_Msk0x00000020
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR6_Msk0x00000040
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR7_Msk0x00000080
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR8_Msk0x00000100
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR9_Msk0x00000200
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR10_Msk0x00000400
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR11_Msk0x00000800
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR12_Msk0x00001000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR13_Msk0x00002000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR14_Msk0x00004000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR15_Msk0x00008000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR16_Msk0x00010000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR17_Msk0x00020000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR18_Msk0x00040000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR19_Msk0x00080000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR20_Msk0x00100000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR21_Msk0x00200000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR22_Msk0x00400000
#define CHNL_REQ_MASK_CLR_DMA_REQMASKCLR23_Msk0x00800000

/*-- CHNL_ENABLE_SET: DMA channel enabled set --------------------------------*/

typedef struct {
    uint32_t DMA_ENSET0                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET1                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET2                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET3                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET4                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET5                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET6                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET7                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET8                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET9                        :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET10                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET11                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET12                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET13                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET14                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET15                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET16                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET17                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET18                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET19                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET20                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET21                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET22                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t DMA_ENSET23                       :1;          /*!< Returns the status of dma_active[ ] */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_ENABLE_SET_bits;

/* Bit field positions: */
#define CHNL_ENABLE_SET_DMA_ENSET0_Pos       0            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET1_Pos       1            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET2_Pos       2            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET3_Pos       3            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET4_Pos       4            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET5_Pos       5            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET6_Pos       6            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET7_Pos       7            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET8_Pos       8            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET9_Pos       9            /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET10_Pos      10           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET11_Pos      11           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET12_Pos      12           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET13_Pos      13           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET14_Pos      14           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET15_Pos      15           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET16_Pos      16           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET17_Pos      17           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET18_Pos      18           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET19_Pos      19           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET20_Pos      20           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET21_Pos      21           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET22_Pos      22           /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET23_Pos      23           /*!< Returns the status of dma_active[ ] */

/* Bit field masks: */
#define CHNL_ENABLE_SET_DMA_ENSET0_Msk       0x00000001   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET1_Msk       0x00000002   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET2_Msk       0x00000004   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET3_Msk       0x00000008   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET4_Msk       0x00000010   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET5_Msk       0x00000020   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET6_Msk       0x00000040   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET7_Msk       0x00000080   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET8_Msk       0x00000100   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET9_Msk       0x00000200   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET10_Msk      0x00000400   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET11_Msk      0x00000800   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET12_Msk      0x00001000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET13_Msk      0x00002000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET14_Msk      0x00004000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET15_Msk      0x00008000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET16_Msk      0x00010000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET17_Msk      0x00020000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET18_Msk      0x00040000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET19_Msk      0x00080000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET20_Msk      0x00100000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET21_Msk      0x00200000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET22_Msk      0x00400000   /*!< Returns the status of dma_active[ ] */
#define CHNL_ENABLE_SET_DMA_ENSET23_Msk      0x00800000   /*!< Returns the status of dma_active[ ] */

/*-- CHNL_ENABLE_CLR: DMA channel enabled clear ------------------------------*/

typedef struct {
    uint32_t DMA_ENCLR0                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR1                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR2                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR3                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR4                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR5                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR6                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR7                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR8                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR9                        :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR10                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR11                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR12                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR13                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR14                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR15                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR16                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR17                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR18                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR19                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR20                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR21                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR22                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t DMA_ENCLR23                       :1;          /*!< Enables you to set the dma_active[ ] */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_ENABLE_CLR_bits;

/* Bit field positions: */
#define CHNL_ENABLE_CLR_DMA_ENCLR0_Pos       0            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR1_Pos       1            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR2_Pos       2            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR3_Pos       3            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR4_Pos       4            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR5_Pos       5            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR6_Pos       6            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR7_Pos       7            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR8_Pos       8            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR9_Pos       9            /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR10_Pos      10           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR11_Pos      11           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR12_Pos      12           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR13_Pos      13           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR14_Pos      14           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR15_Pos      15           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR16_Pos      16           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR17_Pos      17           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR18_Pos      18           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR19_Pos      19           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR20_Pos      20           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR21_Pos      21           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR22_Pos      22           /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR23_Pos      23           /*!< Enables you to set the dma_active[ ] */

/* Bit field masks: */
#define CHNL_ENABLE_CLR_DMA_ENCLR0_Msk       0x00000001   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR1_Msk       0x00000002   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR2_Msk       0x00000004   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR3_Msk       0x00000008   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR4_Msk       0x00000010   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR5_Msk       0x00000020   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR6_Msk       0x00000040   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR7_Msk       0x00000080   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR8_Msk       0x00000100   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR9_Msk       0x00000200   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR10_Msk      0x00000400   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR11_Msk      0x00000800   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR12_Msk      0x00001000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR13_Msk      0x00002000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR14_Msk      0x00004000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR15_Msk      0x00008000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR16_Msk      0x00010000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR17_Msk      0x00020000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR18_Msk      0x00040000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR19_Msk      0x00080000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR20_Msk      0x00100000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR21_Msk      0x00200000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR22_Msk      0x00400000   /*!< Enables you to set the dma_active[ ] */
#define CHNL_ENABLE_CLR_DMA_ENCLR23_Msk      0x00800000   /*!< Enables you to set the dma_active[ ] */

/*-- CHNL_PRI_ALT_SET: Register setting primary / alternate channel control data structure */

typedef struct {
    uint32_t DMA_ALTSET0                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET1                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET2                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET3                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET4                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET5                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET6                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET7                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET8                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET9                       :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET10                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET11                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET12                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET13                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET14                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET15                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET16                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET17                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET18                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET19                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET20                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET21                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET22                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t DMA_ALTSET23                      :1;          /*!< Set primary / alternate channel control data structure */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_PRI_ALT_SET_bits;

/* Bit field positions: */
#define CHNL_PRI_ALT_SET_DMA_ALTSET0_Pos     0            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET1_Pos     1            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET2_Pos     2            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET3_Pos     3            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET4_Pos     4            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET5_Pos     5            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET6_Pos     6            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET7_Pos     7            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET8_Pos     8            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET9_Pos     9            /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET10_Pos    10           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET11_Pos    11           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET12_Pos    12           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET13_Pos    13           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET14_Pos    14           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET15_Pos    15           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET16_Pos    16           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET17_Pos    17           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET18_Pos    18           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET19_Pos    19           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET20_Pos    20           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET21_Pos    21           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET22_Pos    22           /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET23_Pos    23           /*!< Set primary / alternate channel control data structure */

/* Bit field masks: */
#define CHNL_PRI_ALT_SET_DMA_ALTSET0_Msk     0x00000001   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET1_Msk     0x00000002   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET2_Msk     0x00000004   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET3_Msk     0x00000008   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET4_Msk     0x00000010   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET5_Msk     0x00000020   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET6_Msk     0x00000040   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET7_Msk     0x00000080   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET8_Msk     0x00000100   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET9_Msk     0x00000200   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET10_Msk    0x00000400   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET11_Msk    0x00000800   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET12_Msk    0x00001000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET13_Msk    0x00002000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET14_Msk    0x00004000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET15_Msk    0x00008000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET16_Msk    0x00010000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET17_Msk    0x00020000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET18_Msk    0x00040000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET19_Msk    0x00080000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET20_Msk    0x00100000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET21_Msk    0x00200000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET22_Msk    0x00400000   /*!< Set primary / alternate channel control data structure */
#define CHNL_PRI_ALT_SET_DMA_ALTSET23_Msk    0x00800000   /*!< Set primary / alternate channel control data structure */

/*-- CHNL_PRI_ALT_CLR: Register clearing primary / alternate channel control data structure */

typedef struct {
    uint32_t DMA_ALTCLR0                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR1                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR2                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR3                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR4                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR5                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR6                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR7                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR8                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR9                       :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR10                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR11                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR12                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR13                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR14                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR15                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR16                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR17                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR18                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR19                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR20                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR21                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR22                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t DMA_ALTCLR23                      :1;          /*!< Clear primary / alternate channel control data structure */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_PRI_ALT_CLR_bits;

/* Bit field positions: */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR0_Pos     0            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR1_Pos     1            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR2_Pos     2            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR3_Pos     3            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR4_Pos     4            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR5_Pos     5            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR6_Pos     6            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR7_Pos     7            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR8_Pos     8            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR9_Pos     9            /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR10_Pos    10           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR11_Pos    11           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR12_Pos    12           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR13_Pos    13           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR14_Pos    14           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR15_Pos    15           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR16_Pos    16           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR17_Pos    17           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR18_Pos    18           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR19_Pos    19           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR20_Pos    20           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR21_Pos    21           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR22_Pos    22           /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR23_Pos    23           /*!< Clear primary / alternate channel control data structure */

/* Bit field masks: */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR0_Msk     0x00000001   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR1_Msk     0x00000002   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR2_Msk     0x00000004   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR3_Msk     0x00000008   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR4_Msk     0x00000010   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR5_Msk     0x00000020   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR6_Msk     0x00000040   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR7_Msk     0x00000080   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR8_Msk     0x00000100   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR9_Msk     0x00000200   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR10_Msk    0x00000400   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR11_Msk    0x00000800   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR12_Msk    0x00001000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR13_Msk    0x00002000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR14_Msk    0x00004000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR15_Msk    0x00008000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR16_Msk    0x00010000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR17_Msk    0x00020000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR18_Msk    0x00040000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR19_Msk    0x00080000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR20_Msk    0x00100000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR21_Msk    0x00200000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR22_Msk    0x00400000   /*!< Clear primary / alternate channel control data structure */
#define CHNL_PRI_ALT_CLR_DMA_ALTCLR23_Msk    0x00800000   /*!< Clear primary / alternate channel control data structure */

/*-- CHNL_PRIORITY_SET: Register set the priority channel --------------------*/

typedef struct {
    uint32_t DMA_PRISET0                       :1;          /*!< Set the priority channel0 */
    uint32_t DMA_PRISET1                       :1;          /*!< Set the priority channel1 */
    uint32_t DMA_PRISET2                       :1;          /*!< Set the priority channel2 */
    uint32_t DMA_PRISET3                       :1;          /*!< Set the priority channel3 */
    uint32_t DMA_PRISET4                       :1;          /*!< Set the priority channel4 */
    uint32_t DMA_PRISET5                       :1;          /*!< Set the priority channel5 */
    uint32_t DMA_PRISET6                       :1;          /*!< Set the priority channel6 */
    uint32_t DMA_PRISET7                       :1;          /*!< Set the priority channel7 */
    uint32_t DMA_PRISET8                       :1;          /*!< Set the priority channel8 */
    uint32_t DMA_PRISET9                       :1;          /*!< Set the priority channel9 */
    uint32_t DMA_PRISET10                      :1;          /*!< Set the priority channel10 */
    uint32_t DMA_PRISET11                      :1;          /*!< Set the priority channel11 */
    uint32_t DMA_PRISET12                      :1;          /*!< Set the priority channel12 */
    uint32_t DMA_PRISET13                      :1;          /*!< Set the priority channel13 */
    uint32_t DMA_PRISET14                      :1;          /*!< Set the priority channel14 */
    uint32_t DMA_PRISET15                      :1;          /*!< Set the priority channel15 */
    uint32_t DMA_PRISET16                      :1;          /*!< Set the priority channel16 */
    uint32_t DMA_PRISET17                      :1;          /*!< Set the priority channel17 */
    uint32_t DMA_PRISET18                      :1;          /*!< Set the priority channel18 */
    uint32_t DMA_PRISET19                      :1;          /*!< Set the priority channel19 */
    uint32_t DMA_PRISET20                      :1;          /*!< Set the priority channel20 */
    uint32_t DMA_PRISET21                      :1;          /*!< Set the priority channel21 */
    uint32_t DMA_PRISET22                      :1;          /*!< Set the priority channel22 */
    uint32_t DMA_PRISET23                      :1;          /*!< Set the priority channel23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_PRIORITY_SET_bits;

/* Bit field positions: */
#define CHNL_PRIORITY_SET_DMA_PRISET0_Pos    0            /*!< Set the priority channel0 */
#define CHNL_PRIORITY_SET_DMA_PRISET1_Pos    1            /*!< Set the priority channel1 */
#define CHNL_PRIORITY_SET_DMA_PRISET2_Pos    2            /*!< Set the priority channel2 */
#define CHNL_PRIORITY_SET_DMA_PRISET3_Pos    3            /*!< Set the priority channel3 */
#define CHNL_PRIORITY_SET_DMA_PRISET4_Pos    4            /*!< Set the priority channel4 */
#define CHNL_PRIORITY_SET_DMA_PRISET5_Pos    5            /*!< Set the priority channel5 */
#define CHNL_PRIORITY_SET_DMA_PRISET6_Pos    6            /*!< Set the priority channel6 */
#define CHNL_PRIORITY_SET_DMA_PRISET7_Pos    7            /*!< Set the priority channel7 */
#define CHNL_PRIORITY_SET_DMA_PRISET8_Pos    8            /*!< Set the priority channel8 */
#define CHNL_PRIORITY_SET_DMA_PRISET9_Pos    9            /*!< Set the priority channel9 */
#define CHNL_PRIORITY_SET_DMA_PRISET10_Pos   10           /*!< Set the priority channel10 */
#define CHNL_PRIORITY_SET_DMA_PRISET11_Pos   11           /*!< Set the priority channel11 */
#define CHNL_PRIORITY_SET_DMA_PRISET12_Pos   12           /*!< Set the priority channel12 */
#define CHNL_PRIORITY_SET_DMA_PRISET13_Pos   13           /*!< Set the priority channel13 */
#define CHNL_PRIORITY_SET_DMA_PRISET14_Pos   14           /*!< Set the priority channel14 */
#define CHNL_PRIORITY_SET_DMA_PRISET15_Pos   15           /*!< Set the priority channel15 */
#define CHNL_PRIORITY_SET_DMA_PRISET16_Pos   16           /*!< Set the priority channel16 */
#define CHNL_PRIORITY_SET_DMA_PRISET17_Pos   17           /*!< Set the priority channel17 */
#define CHNL_PRIORITY_SET_DMA_PRISET18_Pos   18           /*!< Set the priority channel18 */
#define CHNL_PRIORITY_SET_DMA_PRISET19_Pos   19           /*!< Set the priority channel19 */
#define CHNL_PRIORITY_SET_DMA_PRISET20_Pos   20           /*!< Set the priority channel20 */
#define CHNL_PRIORITY_SET_DMA_PRISET21_Pos   21           /*!< Set the priority channel21 */
#define CHNL_PRIORITY_SET_DMA_PRISET22_Pos   22           /*!< Set the priority channel22 */
#define CHNL_PRIORITY_SET_DMA_PRISET23_Pos   23           /*!< Set the priority channel23 */

/* Bit field masks: */
#define CHNL_PRIORITY_SET_DMA_PRISET0_Msk    0x00000001   /*!< Set the priority channel0 */
#define CHNL_PRIORITY_SET_DMA_PRISET1_Msk    0x00000002   /*!< Set the priority channel1 */
#define CHNL_PRIORITY_SET_DMA_PRISET2_Msk    0x00000004   /*!< Set the priority channel2 */
#define CHNL_PRIORITY_SET_DMA_PRISET3_Msk    0x00000008   /*!< Set the priority channel3 */
#define CHNL_PRIORITY_SET_DMA_PRISET4_Msk    0x00000010   /*!< Set the priority channel4 */
#define CHNL_PRIORITY_SET_DMA_PRISET5_Msk    0x00000020   /*!< Set the priority channel5 */
#define CHNL_PRIORITY_SET_DMA_PRISET6_Msk    0x00000040   /*!< Set the priority channel6 */
#define CHNL_PRIORITY_SET_DMA_PRISET7_Msk    0x00000080   /*!< Set the priority channel7 */
#define CHNL_PRIORITY_SET_DMA_PRISET8_Msk    0x00000100   /*!< Set the priority channel8 */
#define CHNL_PRIORITY_SET_DMA_PRISET9_Msk    0x00000200   /*!< Set the priority channel9 */
#define CHNL_PRIORITY_SET_DMA_PRISET10_Msk   0x00000400   /*!< Set the priority channel10 */
#define CHNL_PRIORITY_SET_DMA_PRISET11_Msk   0x00000800   /*!< Set the priority channel11 */
#define CHNL_PRIORITY_SET_DMA_PRISET12_Msk   0x00001000   /*!< Set the priority channel12 */
#define CHNL_PRIORITY_SET_DMA_PRISET13_Msk   0x00002000   /*!< Set the priority channel13 */
#define CHNL_PRIORITY_SET_DMA_PRISET14_Msk   0x00004000   /*!< Set the priority channel14 */
#define CHNL_PRIORITY_SET_DMA_PRISET15_Msk   0x00008000   /*!< Set the priority channel15 */
#define CHNL_PRIORITY_SET_DMA_PRISET16_Msk   0x00010000   /*!< Set the priority channel16 */
#define CHNL_PRIORITY_SET_DMA_PRISET17_Msk   0x00020000   /*!< Set the priority channel17 */
#define CHNL_PRIORITY_SET_DMA_PRISET18_Msk   0x00040000   /*!< Set the priority channel18 */
#define CHNL_PRIORITY_SET_DMA_PRISET19_Msk   0x00080000   /*!< Set the priority channel19 */
#define CHNL_PRIORITY_SET_DMA_PRISET20_Msk   0x00100000   /*!< Set the priority channel20 */
#define CHNL_PRIORITY_SET_DMA_PRISET21_Msk   0x00200000   /*!< Set the priority channel21 */
#define CHNL_PRIORITY_SET_DMA_PRISET22_Msk   0x00400000   /*!< Set the priority channel22 */
#define CHNL_PRIORITY_SET_DMA_PRISET23_Msk   0x00800000   /*!< Set the priority channel23 */

/*-- CHNL_PRIORITY_CLR: Register clear the priority channel ------------------*/

typedef struct {
    uint32_t DMA_PRICLR0                       :1;          /*!< Clear the priority channel0 */
    uint32_t DMA_PRICLR1                       :1;          /*!< Clear the priority channel1 */
    uint32_t DMA_PRICLR2                       :1;          /*!< Clear the priority channel2 */
    uint32_t DMA_PRICLR3                       :1;          /*!< Clear the priority channel3 */
    uint32_t DMA_PRICLR4                       :1;          /*!< Clear the priority channel4 */
    uint32_t DMA_PRICLR5                       :1;          /*!< Clear the priority channel5 */
    uint32_t DMA_PRICLR6                       :1;          /*!< Clear the priority channel6 */
    uint32_t DMA_PRICLR7                       :1;          /*!< Clear the priority channel7 */
    uint32_t DMA_PRICLR8                       :1;          /*!< Clear the priority channel8 */
    uint32_t DMA_PRICLR9                       :1;          /*!< Clear the priority channel9 */
    uint32_t DMA_PRICLR10                      :1;          /*!< Clear the priority channel10 */
    uint32_t DMA_PRICLR11                      :1;          /*!< Clear the priority channel11 */
    uint32_t DMA_PRICLR12                      :1;          /*!< Clear the priority channel12 */
    uint32_t DMA_PRICLR13                      :1;          /*!< Clear the priority channel13 */
    uint32_t DMA_PRICLR14                      :1;          /*!< Clear the priority channel14 */
    uint32_t DMA_PRICLR15                      :1;          /*!< Clear the priority channel15 */
    uint32_t DMA_PRICLR16                      :1;          /*!< Clear the priority channel16 */
    uint32_t DMA_PRICLR17                      :1;          /*!< Clear the priority channel17 */
    uint32_t DMA_PRICLR18                      :1;          /*!< Clear the priority channel18 */
    uint32_t DMA_PRICLR19                      :1;          /*!< Clear the priority channel19 */
    uint32_t DMA_PRICLR20                      :1;          /*!< Clear the priority channel20 */
    uint32_t DMA_PRICLR21                      :1;          /*!< Clear the priority channel21 */
    uint32_t DMA_PRICLR22                      :1;          /*!< Clear the priority channel22 */
    uint32_t DMA_PRICLR23                      :1;          /*!< Clear the priority channel23 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _CHNL_PRIORITY_CLR_bits;

/* Bit field positions: */
#define CHNL_PRIORITY_CLR_DMA_PRICLR0_Pos    0            /*!< Clear the priority channel0 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR1_Pos    1            /*!< Clear the priority channel1 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR2_Pos    2            /*!< Clear the priority channel2 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR3_Pos    3            /*!< Clear the priority channel3 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR4_Pos    4            /*!< Clear the priority channel4 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR5_Pos    5            /*!< Clear the priority channel5 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR6_Pos    6            /*!< Clear the priority channel6 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR7_Pos    7            /*!< Clear the priority channel7 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR8_Pos    8            /*!< Clear the priority channel8 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR9_Pos    9            /*!< Clear the priority channel9 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR10_Pos   10           /*!< Clear the priority channel10 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR11_Pos   11           /*!< Clear the priority channel11 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR12_Pos   12           /*!< Clear the priority channel12 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR13_Pos   13           /*!< Clear the priority channel13 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR14_Pos   14           /*!< Clear the priority channel14 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR15_Pos   15           /*!< Clear the priority channel15 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR16_Pos   16           /*!< Clear the priority channel16 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR17_Pos   17           /*!< Clear the priority channel17 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR18_Pos   18           /*!< Clear the priority channel18 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR19_Pos   19           /*!< Clear the priority channel19 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR20_Pos   20           /*!< Clear the priority channel20 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR21_Pos   21           /*!< Clear the priority channel21 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR22_Pos   22           /*!< Clear the priority channel22 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR23_Pos   23           /*!< Clear the priority channel23 */

/* Bit field masks: */
#define CHNL_PRIORITY_CLR_DMA_PRICLR0_Msk    0x00000001   /*!< Clear the priority channel0 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR1_Msk    0x00000002   /*!< Clear the priority channel1 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR2_Msk    0x00000004   /*!< Clear the priority channel2 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR3_Msk    0x00000008   /*!< Clear the priority channel3 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR4_Msk    0x00000010   /*!< Clear the priority channel4 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR5_Msk    0x00000020   /*!< Clear the priority channel5 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR6_Msk    0x00000040   /*!< Clear the priority channel6 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR7_Msk    0x00000080   /*!< Clear the priority channel7 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR8_Msk    0x00000100   /*!< Clear the priority channel8 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR9_Msk    0x00000200   /*!< Clear the priority channel9 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR10_Msk   0x00000400   /*!< Clear the priority channel10 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR11_Msk   0x00000800   /*!< Clear the priority channel11 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR12_Msk   0x00001000   /*!< Clear the priority channel12 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR13_Msk   0x00002000   /*!< Clear the priority channel13 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR14_Msk   0x00004000   /*!< Clear the priority channel14 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR15_Msk   0x00008000   /*!< Clear the priority channel15 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR16_Msk   0x00010000   /*!< Clear the priority channel16 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR17_Msk   0x00020000   /*!< Clear the priority channel17 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR18_Msk   0x00040000   /*!< Clear the priority channel18 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR19_Msk   0x00080000   /*!< Clear the priority channel19 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR20_Msk   0x00100000   /*!< Clear the priority channel20 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR21_Msk   0x00200000   /*!< Clear the priority channel21 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR22_Msk   0x00400000   /*!< Clear the priority channel22 */
#define CHNL_PRIORITY_CLR_DMA_PRICLR23_Msk   0x00800000   /*!< Clear the priority channel23 */

/*-- ERR_CLR: Flag error clear register --------------------------------------*/

typedef struct {
    uint32_t ERR_CLR                           :1;          /*!< Indicate Error on bus AHB-Lite / Clear flag error */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _ERR_CLR_bits;

/* Bit field positions: */
#define ERR_CLR_ERR_CLR_Pos                  0            /*!< Indicate Error on bus AHB-Lite / Clear flag error */

/* Bit field masks: */
#define ERR_CLR_ERR_CLR_Msk                  0x00000001   /*!< Indicate Error on bus AHB-Lite / Clear flag error */

/*-- Register map for DMA peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Status DMA register */
        __I  uint32_t STATUS;                                 /*!< STATUS    : type used for word access */
        __I  _STATUS_bits STATUS_bit;                         /*!< STATUS_bit: structure used for bit access */
    };
    union {                                                 /*!< Configurate DMA register */
        __O  uint32_t CFG;                                    /*!< CFG    : type used for word access */
        __O  _CFG_bits CFG_bit;                               /*!< CFG_bit: structure used for bit access */
    };
    union {                                                 /*!< Base address register control data channels */
        __IO uint32_t CTRL_BASE_PTR;                          /*!< CTRL_BASE_PTR    : type used for word access */
        __IO _CTRL_BASE_PTR_bits CTRL_BASE_PTR_bit;           /*!< CTRL_BASE_PTR_bit: structure used for bit access */
    };
    __I  uint32_t ALT_CTRL_BASE_PTR;                        /*!< Alternate base address register control data channels */
    union {                                                 /*!< DMA wait request status */
        __I  uint32_t WAITONREQ_STATUS;                       /*!< WAITONREQ_STATUS    : type used for word access */
        __I  _WAITONREQ_STATUS_bits WAITONREQ_STATUS_bit;     /*!< WAITONREQ_STATUS_bit: structure used for bit access */
    };
    union {                                                 /*!< Register software process request DMA channels */
        __O  uint32_t CHNL_SW_REQUEST;                        /*!< CHNL_SW_REQUEST    : type used for word access */
        __O  _CHNL_SW_REQUEST_bits CHNL_SW_REQUEST_bit;       /*!< CHNL_SW_REQUEST_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Set Packet Exchange DMA channels */
        __IO uint32_t CHNL_USEBURST_SET;                      /*!< CHNL_USEBURST_SET    : type used for word access */
        __IO _CHNL_USEBURST_SET_bits CHNL_USEBURST_SET_bit;   /*!< CHNL_USEBURST_SET_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Clear Packet Exchange DMA channels */
        __O  uint32_t CHNL_USEBURST_CLR;                      /*!< CHNL_USEBURST_CLR    : type used for word access */
        __O  _CHNL_USEBURST_CLR_bits CHNL_USEBURST_CLR_bit;   /*!< CHNL_USEBURST_CLR_bit: structure used for bit access */
    };
    union {                                                 /*!< DMA request mask set */
        __IO uint32_t CHNL_REQ_MASK_SET;                      /*!< CHNL_REQ_MASK_SET    : type used for word access */
        __IO _CHNL_REQ_MASK_SET_bits CHNL_REQ_MASK_SET_bit;   /*!< CHNL_REQ_MASK_SET_bit: structure used for bit access */
    };
    union {                                                 /*!< DMA request mask clear */
        __O  uint32_t CHNL_REQ_MASK_CLR;                      /*!< CHNL_REQ_MASK_CLR    : type used for word access */
        __O  _CHNL_REQ_MASK_CLR_bits CHNL_REQ_MASK_CLR_bit;   /*!< CHNL_REQ_MASK_CLR_bit: structure used for bit access */
    };
    union {                                                 /*!< DMA channel enabled set */
        __IO uint32_t CHNL_ENABLE_SET;                        /*!< CHNL_ENABLE_SET    : type used for word access */
        __IO _CHNL_ENABLE_SET_bits CHNL_ENABLE_SET_bit;       /*!< CHNL_ENABLE_SET_bit: structure used for bit access */
    };
    union {                                                 /*!< DMA channel enabled clear */
        __O  uint32_t CHNL_ENABLE_CLR;                        /*!< CHNL_ENABLE_CLR    : type used for word access */
        __O  _CHNL_ENABLE_CLR_bits CHNL_ENABLE_CLR_bit;       /*!< CHNL_ENABLE_CLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register setting primary / alternate channel control data structure */
        __IO uint32_t CHNL_PRI_ALT_SET;                       /*!< CHNL_PRI_ALT_SET    : type used for word access */
        __IO _CHNL_PRI_ALT_SET_bits CHNL_PRI_ALT_SET_bit;     /*!< CHNL_PRI_ALT_SET_bit: structure used for bit access */
    };
    union {                                                 /*!< Register clearing primary / alternate channel control data structure */
        __O  uint32_t CHNL_PRI_ALT_CLR;                       /*!< CHNL_PRI_ALT_CLR    : type used for word access */
        __O  _CHNL_PRI_ALT_CLR_bits CHNL_PRI_ALT_CLR_bit;     /*!< CHNL_PRI_ALT_CLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register set the priority channel */
        __IO uint32_t CHNL_PRIORITY_SET;                      /*!< CHNL_PRIORITY_SET    : type used for word access */
        __IO _CHNL_PRIORITY_SET_bits CHNL_PRIORITY_SET_bit;   /*!< CHNL_PRIORITY_SET_bit: structure used for bit access */
    };
    union {                                                 /*!< Register clear the priority channel */
        __O  uint32_t CHNL_PRIORITY_CLR;                      /*!< CHNL_PRIORITY_CLR    : type used for word access */
        __O  _CHNL_PRIORITY_CLR_bits CHNL_PRIORITY_CLR_bit;   /*!< CHNL_PRIORITY_CLR_bit: structure used for bit access */
    };
    uint32_t Reserved0[3];                                  /*!< Reserved */
    union {                                                 /*!< Flag error clear register */
        __IO uint32_t ERR_CLR;                                /*!< ERR_CLR    : type used for word access */
        __IO _ERR_CLR_bits ERR_CLR_bit;                       /*!< ERR_CLR_bit: structure used for bit access */
    };
} NT_DMA_TypeDef;

/******************************************************************************/
/*                        UART controller registers                           */
/******************************************************************************/

/*-- DR: Data Register -------------------------------------------------------*/

typedef struct {
    uint32_t DATA                              :8;          /*!< Received/Transmitted data character */
    uint32_t FE                                :1;          /*!< Framing error */
    uint32_t PE                                :1;          /*!< Parity error */
    uint32_t BE                                :1;          /*!< Break error */
    uint32_t OE                                :1;          /*!< Overrun error */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _DR_bits;

/* Bit field positions: */
#define DR_DATA_Pos                          0            /*!< Received/Transmitted data character */
#define DR_FE_Pos                            8            /*!< Framing error */
#define DR_PE_Pos                            9            /*!< Parity error */
#define DR_BE_Pos                            10           /*!< Break error */
#define DR_OE_Pos                            11           /*!< Overrun error */

/* Bit field masks: */
#define DR_DATA_Msk                          0x000000FF   /*!< Received/Transmitted data character */
#define DR_FE_Msk                            0x00000100   /*!< Framing error */
#define DR_PE_Msk                            0x00000200   /*!< Parity error */
#define DR_BE_Msk                            0x00000400   /*!< Break error */
#define DR_OE_Msk                            0x00000800   /*!< Overrun error */

/*-- RSR_ECR: Receive Status Register/Error Clear Register -------------------*/

typedef struct {
    uint32_t FE                                :1;          /*!< Framing error */
    uint32_t PE                                :1;          /*!< Parity error */
    uint32_t BE                                :1;          /*!< Break error */
    uint32_t OE                                :1;          /*!< Overrun error */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _RSR_ECR_bits;

/* Bit field positions: */
#define RSR_ECR_FE_Pos                       0            /*!< Framing error */
#define RSR_ECR_PE_Pos                       1            /*!< Parity error */
#define RSR_ECR_BE_Pos                       2            /*!< Break error */
#define RSR_ECR_OE_Pos                       3            /*!< Overrun error */

/* Bit field masks: */
#define RSR_ECR_FE_Msk                       0x00000001   /*!< Framing error */
#define RSR_ECR_PE_Msk                       0x00000002   /*!< Parity error */
#define RSR_ECR_BE_Msk                       0x00000004   /*!< Break error */
#define RSR_ECR_OE_Msk                       0x00000008   /*!< Overrun error */

/*-- FR: Flag Register -------------------------------------------------------*/

typedef struct {
    uint32_t CTS                               :1;          /*!< Clear to send */
    uint32_t DSR                               :1;          /*!< Data set ready */
    uint32_t DCD                               :1;          /*!< Data carrier detect */
    uint32_t BUSY                              :1;          /*!< UART busy */
    uint32_t RXFE                              :1;          /*!< Receive FIFO empty */
    uint32_t TXFF                              :1;          /*!< Transmit FIFO full */
    uint32_t RXFF                              :1;          /*!< Receive FIFO full */
    uint32_t TXFE                              :1;          /*!< Transmit FIFO empty */
    uint32_t RI                                :1;          /*!< Ring indicator */
    uint32_t Reserved0                         :23;         /*!< Reserved */
} _FR_bits;

/* Bit field positions: */
#define FR_CTS_Pos                           0            /*!< Clear to send */
#define FR_DSR_Pos                           1            /*!< Data set ready */
#define FR_DCD_Pos                           2            /*!< Data carrier detect */
#define FR_BUSY_Pos                          3            /*!< UART busy */
#define FR_RXFE_Pos                          4            /*!< Receive FIFO empty */
#define FR_TXFF_Pos                          5            /*!< Transmit FIFO full */
#define FR_RXFF_Pos                          6            /*!< Receive FIFO full */
#define FR_TXFE_Pos                          7            /*!< Transmit FIFO empty */
#define FR_RI_Pos                            8            /*!< Ring indicator */

/* Bit field masks: */
#define FR_CTS_Msk                           0x00000001   /*!< Clear to send */
#define FR_DSR_Msk                           0x00000002   /*!< Data set ready */
#define FR_DCD_Msk                           0x00000004   /*!< Data carrier detect */
#define FR_BUSY_Msk                          0x00000008   /*!< UART busy */
#define FR_RXFE_Msk                          0x00000010   /*!< Receive FIFO empty */
#define FR_TXFF_Msk                          0x00000020   /*!< Transmit FIFO full */
#define FR_RXFF_Msk                          0x00000040   /*!< Receive FIFO full */
#define FR_TXFE_Msk                          0x00000080   /*!< Transmit FIFO empty */
#define FR_RI_Msk                            0x00000100   /*!< Ring indicator */

/*-- IBRD: Integer Baud Rate Register ----------------------------------------*/

typedef struct {
    uint32_t BAUD_DIVINT                       :16;         /*!< The integer baud rate divisor */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _IBRD_bits;

/* Bit field positions: */
#define IBRD_BAUD_DIVINT_Pos                 0            /*!< The integer baud rate divisor */

/* Bit field masks: */
#define IBRD_BAUD_DIVINT_Msk                 0x0000FFFF   /*!< The integer baud rate divisor */

/*-- FBRD: Fractional Baud Rate Register -------------------------------------*/

typedef struct {
    uint32_t BAUD_DIVFRAC                      :6;          /*!< The fractional baud rate divisor */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _FBRD_bits;

/* Bit field positions: */
#define FBRD_BAUD_DIVFRAC_Pos                0            /*!< The fractional baud rate divisor */

/* Bit field masks: */
#define FBRD_BAUD_DIVFRAC_Msk                0x0000003F   /*!< The fractional baud rate divisor */

/*-- LCR_H: Line Control Register --------------------------------------------*/

typedef struct {
    uint32_t BRK                               :1;          /*!< Send break */
    uint32_t PEN                               :1;          /*!< Parity enable */
    uint32_t EPS                               :1;          /*!< Even parity select */
    uint32_t STP2                              :1;          /*!< Two stop bits select */
    uint32_t FEN                               :1;          /*!< Enable FIFOs */
    uint32_t WLEN                              :2;          /*!< Word length */
    uint32_t SPS                               :1;          /*!< Stick parity select */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _LCR_H_bits;

/* Bit field positions: */
#define LCR_H_BRK_Pos                        0            /*!< Send break */
#define LCR_H_PEN_Pos                        1            /*!< Parity enable */
#define LCR_H_EPS_Pos                        2            /*!< Even parity select */
#define LCR_H_STP2_Pos                       3            /*!< Two stop bits select */
#define LCR_H_FEN_Pos                        4            /*!< Enable FIFOs */
#define LCR_H_WLEN_Pos                       5            /*!< Word length */
#define LCR_H_SPS_Pos                        7            /*!< Stick parity select */

/* Bit field masks: */
#define LCR_H_BRK_Msk                        0x00000001   /*!< Send break */
#define LCR_H_PEN_Msk                        0x00000002   /*!< Parity enable */
#define LCR_H_EPS_Msk                        0x00000004   /*!< Even parity select */
#define LCR_H_STP2_Msk                       0x00000008   /*!< Two stop bits select */
#define LCR_H_FEN_Msk                        0x00000010   /*!< Enable FIFOs */
#define LCR_H_WLEN_Msk                       0x00000060   /*!< Word length */
#define LCR_H_SPS_Msk                        0x00000080   /*!< Stick parity select */

/*-- CR: Control Register ----------------------------------------------------*/

typedef struct {
    uint32_t UARTEN                            :1;          /*!< UART enable */
    uint32_t Reserved0                         :7;          /*!< Reserved */
    uint32_t TXE                               :1;          /*!< Transmit enable */
    uint32_t RXE                               :1;          /*!< Receive enable */
    uint32_t DTR                               :1;          /*!< Data transmit ready */
    uint32_t RTS                               :1;          /*!< Request to send */
    uint32_t OUT1                              :1;          /*!< This bit is the complement of the UART Out1 (nUARTOut1) modem status output */
    uint32_t OUT2                              :1;          /*!< This bit is the complement of the UART Out2 (nUARTOut2) modem status output */
    uint32_t RTSEN                             :1;          /*!< RTS hardware flow control enable */
    uint32_t CTSEN                             :1;          /*!< CTS hardware flow control enable */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _CR_bits;

/* Bit field positions: */
#define CR_UARTEN_Pos                        0            /*!< UART enable */
#define CR_TXE_Pos                           8            /*!< Transmit enable */
#define CR_RXE_Pos                           9            /*!< Receive enable */
#define CR_DTR_Pos                           10           /*!< Data transmit ready */
#define CR_RTS_Pos                           11           /*!< Request to send */
#define CR_OUT1_Pos                          12           /*!< This bit is the complement of the UART Out1 (nUARTOut1) modem status output */
#define CR_OUT2_Pos                          13           /*!< This bit is the complement of the UART Out2 (nUARTOut2) modem status output */
#define CR_RTSEN_Pos                         14           /*!< RTS hardware flow control enable */
#define CR_CTSEN_Pos                         15           /*!< CTS hardware flow control enable */

/* Bit field masks: */
#define CR_UARTEN_Msk                        0x00000001   /*!< UART enable */
#define CR_TXE_Msk                           0x00000100   /*!< Transmit enable */
#define CR_RXE_Msk                           0x00000200   /*!< Receive enable */
#define CR_DTR_Msk                           0x00000400   /*!< Data transmit ready */
#define CR_RTS_Msk                           0x00000800   /*!< Request to send */
#define CR_OUT1_Msk                          0x00001000   /*!< This bit is the complement of the UART Out1 (nUARTOut1) modem status output */
#define CR_OUT2_Msk                          0x00002000   /*!< This bit is the complement of the UART Out2 (nUARTOut2) modem status output */
#define CR_RTSEN_Msk                         0x00004000   /*!< RTS hardware flow control enable */
#define CR_CTSEN_Msk                         0x00008000   /*!< CTS hardware flow control enable */

/*-- IFLS: Interrupt FIFO Level Select Register ------------------------------*/

typedef struct {
    uint32_t TXIFLSEL                          :3;          /*!< Transmit interrupt FIFO level select */
    uint32_t RXIFLSEL                          :3;          /*!< Receive interrupt FIFO level select */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _IFLS_bits;

/* Bit field positions: */
#define IFLS_TXIFLSEL_Pos                    0            /*!< Transmit interrupt FIFO level select */
#define IFLS_RXIFLSEL_Pos                    3            /*!< Receive interrupt FIFO level select */

/* Bit field masks: */
#define IFLS_TXIFLSEL_Msk                    0x00000007   /*!< Transmit interrupt FIFO level select */
#define IFLS_RXIFLSEL_Msk                    0x00000038   /*!< Receive interrupt FIFO level select */

/*-- IMSC: Interrupt Mask Set/Clear Register ---------------------------------*/

typedef struct {
    uint32_t RIMIM                             :1;          /*!< nUARTRI modem interrupt mask */
    uint32_t CTSMIM                            :1;          /*!< nUARTCTS modem interrupt mask */
    uint32_t DCDMIM                            :1;          /*!< nUARTDCD modem interrupt mask */
    uint32_t DSRMIM                            :1;          /*!< nUARTDSR modem interrupt mask */
    uint32_t RXIM                              :1;          /*!< Receive interrupt mask */
    uint32_t TXIM                              :1;          /*!< Transmit interrupt mask */
    uint32_t RTIM                              :1;          /*!< Receive timeout interrupt mask */
    uint32_t FEIM                              :1;          /*!< Framing error interrupt mask */
    uint32_t PEIM                              :1;          /*!< Parity error interrupt mask */
    uint32_t BEIM                              :1;          /*!< Break error interrupt mask */
    uint32_t OEIM                              :1;          /*!< Overrun error interrupt mask */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _IMSC_bits;

/* Bit field positions: */
#define IMSC_RIMIM_Pos                       0            /*!< nUARTRI modem interrupt mask */
#define IMSC_CTSMIM_Pos                      1            /*!< nUARTCTS modem interrupt mask */
#define IMSC_DCDMIM_Pos                      2            /*!< nUARTDCD modem interrupt mask */
#define IMSC_DSRMIM_Pos                      3            /*!< nUARTDSR modem interrupt mask */
#define IMSC_RXIM_Pos                        4            /*!< Receive interrupt mask */
#define IMSC_TXIM_Pos                        5            /*!< Transmit interrupt mask */
#define IMSC_RTIM_Pos                        6            /*!< Receive timeout interrupt mask */
#define IMSC_FEIM_Pos                        7            /*!< Framing error interrupt mask */
#define IMSC_PEIM_Pos                        8            /*!< Parity error interrupt mask */
#define IMSC_BEIM_Pos                        9            /*!< Break error interrupt mask */
#define IMSC_OEIM_Pos                        10           /*!< Overrun error interrupt mask */

/* Bit field masks: */
#define IMSC_RIMIM_Msk                       0x00000001   /*!< nUARTRI modem interrupt mask */
#define IMSC_CTSMIM_Msk                      0x00000002   /*!< nUARTCTS modem interrupt mask */
#define IMSC_DCDMIM_Msk                      0x00000004   /*!< nUARTDCD modem interrupt mask */
#define IMSC_DSRMIM_Msk                      0x00000008   /*!< nUARTDSR modem interrupt mask */
#define IMSC_RXIM_Msk                        0x00000010   /*!< Receive interrupt mask */
#define IMSC_TXIM_Msk                        0x00000020   /*!< Transmit interrupt mask */
#define IMSC_RTIM_Msk                        0x00000040   /*!< Receive timeout interrupt mask */
#define IMSC_FEIM_Msk                        0x00000080   /*!< Framing error interrupt mask */
#define IMSC_PEIM_Msk                        0x00000100   /*!< Parity error interrupt mask */
#define IMSC_BEIM_Msk                        0x00000200   /*!< Break error interrupt mask */
#define IMSC_OEIM_Msk                        0x00000400   /*!< Overrun error interrupt mask */

/*-- RIS: Raw Interrupt Status Register --------------------------------------*/

typedef struct {
    uint32_t RIRMIS                            :1;          /*!< nUARTRI modem interrupt status */
    uint32_t CTSRMIS                           :1;          /*!< nUARTCTS modem interrupt status */
    uint32_t DCDRMIS                           :1;          /*!< nUARTDCD modem interrupt status */
    uint32_t DSRRMIS                           :1;          /*!< nUARTDSR modem interrupt status */
    uint32_t RXRIS                             :1;          /*!< Receive interrupt status */
    uint32_t TXRIS                             :1;          /*!< Transmit interrupt status */
    uint32_t RTRIS                             :1;          /*!< Receive timeout interrupt status */
    uint32_t FERIS                             :1;          /*!< Framing error interrupt status */
    uint32_t PERIS                             :1;          /*!< Parity error interrupt status */
    uint32_t BERIS                             :1;          /*!< Break error interrupt status */
    uint32_t OERIS                             :1;          /*!< Overrun error interrupt status */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _RIS_bits;

/* Bit field positions: */
#define RIS_RIRMIS_Pos                       0            /*!< nUARTRI modem interrupt status */
#define RIS_CTSRMIS_Pos                      1            /*!< nUARTCTS modem interrupt status */
#define RIS_DCDRMIS_Pos                      2            /*!< nUARTDCD modem interrupt status */
#define RIS_DSRRMIS_Pos                      3            /*!< nUARTDSR modem interrupt status */
#define RIS_RXRIS_Pos                        4            /*!< Receive interrupt status */
#define RIS_TXRIS_Pos                        5            /*!< Transmit interrupt status */
#define RIS_RTRIS_Pos                        6            /*!< Receive timeout interrupt status */
#define RIS_FERIS_Pos                        7            /*!< Framing error interrupt status */
#define RIS_PERIS_Pos                        8            /*!< Parity error interrupt status */
#define RIS_BERIS_Pos                        9            /*!< Break error interrupt status */
#define RIS_OERIS_Pos                        10           /*!< Overrun error interrupt status */

/* Bit field masks: */
#define RIS_RIRMIS_Msk                       0x00000001   /*!< nUARTRI modem interrupt status */
#define RIS_CTSRMIS_Msk                      0x00000002   /*!< nUARTCTS modem interrupt status */
#define RIS_DCDRMIS_Msk                      0x00000004   /*!< nUARTDCD modem interrupt status */
#define RIS_DSRRMIS_Msk                      0x00000008   /*!< nUARTDSR modem interrupt status */
#define RIS_RXRIS_Msk                        0x00000010   /*!< Receive interrupt status */
#define RIS_TXRIS_Msk                        0x00000020   /*!< Transmit interrupt status */
#define RIS_RTRIS_Msk                        0x00000040   /*!< Receive timeout interrupt status */
#define RIS_FERIS_Msk                        0x00000080   /*!< Framing error interrupt status */
#define RIS_PERIS_Msk                        0x00000100   /*!< Parity error interrupt status */
#define RIS_BERIS_Msk                        0x00000200   /*!< Break error interrupt status */
#define RIS_OERIS_Msk                        0x00000400   /*!< Overrun error interrupt status */

/*-- MIS: Masked Interrupt Status Register -----------------------------------*/

typedef struct {
    uint32_t RIMMIS                            :1;          /*!< nUARTRI modem masked interrupt status */
    uint32_t CTSMMIS                           :1;          /*!< nUARTCTS modem masked interrupt status */
    uint32_t DCDMMIS                           :1;          /*!< nUARTDCD modem masked interrupt status */
    uint32_t DSRMMIS                           :1;          /*!< nUARTDSR modem masked interrupt status */
    uint32_t RXMIS                             :1;          /*!< Receive masked interrupt status */
    uint32_t TXMIS                             :1;          /*!< Transmit masked interrupt status */
    uint32_t RTMIS                             :1;          /*!< Receive timeout masked interrupt status */
    uint32_t FEMIS                             :1;          /*!< Framing error masked interrupt status */
    uint32_t PEMIS                             :1;          /*!< Parity error masked interrupt status */
    uint32_t BEMIS                             :1;          /*!< Break error masked interrupt status */
    uint32_t OEMIS                             :1;          /*!< Overrun error masked interrupt status */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _MIS_bits;

/* Bit field positions: */
#define MIS_RIMMIS_Pos                       0            /*!< nUARTRI modem masked interrupt status */
#define MIS_CTSMMIS_Pos                      1            /*!< nUARTCTS modem masked interrupt status */
#define MIS_DCDMMIS_Pos                      2            /*!< nUARTDCD modem masked interrupt status */
#define MIS_DSRMMIS_Pos                      3            /*!< nUARTDSR modem masked interrupt status */
#define MIS_RXMIS_Pos                        4            /*!< Receive masked interrupt status */
#define MIS_TXMIS_Pos                        5            /*!< Transmit masked interrupt status */
#define MIS_RTMIS_Pos                        6            /*!< Receive timeout masked interrupt status */
#define MIS_FEMIS_Pos                        7            /*!< Framing error masked interrupt status */
#define MIS_PEMIS_Pos                        8            /*!< Parity error masked interrupt status */
#define MIS_BEMIS_Pos                        9            /*!< Break error masked interrupt status */
#define MIS_OEMIS_Pos                        10           /*!< Overrun error masked interrupt status */

/* Bit field masks: */
#define MIS_RIMMIS_Msk                       0x00000001   /*!< nUARTRI modem masked interrupt status */
#define MIS_CTSMMIS_Msk                      0x00000002   /*!< nUARTCTS modem masked interrupt status */
#define MIS_DCDMMIS_Msk                      0x00000004   /*!< nUARTDCD modem masked interrupt status */
#define MIS_DSRMMIS_Msk                      0x00000008   /*!< nUARTDSR modem masked interrupt status */
#define MIS_RXMIS_Msk                        0x00000010   /*!< Receive masked interrupt status */
#define MIS_TXMIS_Msk                        0x00000020   /*!< Transmit masked interrupt status */
#define MIS_RTMIS_Msk                        0x00000040   /*!< Receive timeout masked interrupt status */
#define MIS_FEMIS_Msk                        0x00000080   /*!< Framing error masked interrupt status */
#define MIS_PEMIS_Msk                        0x00000100   /*!< Parity error masked interrupt status */
#define MIS_BEMIS_Msk                        0x00000200   /*!< Break error masked interrupt status */
#define MIS_OEMIS_Msk                        0x00000400   /*!< Overrun error masked interrupt status */

/*-- ICR: Interrupt Clear Register -------------------------------------------*/

typedef struct {
    uint32_t RIMIC                             :1;          /*!< nUARTRI modem interrupt clear */
    uint32_t CTSMIC                            :1;          /*!< nUARTCTS modem interrupt clear */
    uint32_t DCDMIC                            :1;          /*!< nUARTDCD modem interrupt clear */
    uint32_t DSRMIC                            :1;          /*!< nUARTDSR modem interrupt clear */
    uint32_t RXIC                              :1;          /*!< Receive interrupt clear */
    uint32_t TXIC                              :1;          /*!< Transmit interrupt clear */
    uint32_t RTIC                              :1;          /*!< Receive timeout interrupt clear */
    uint32_t FEIC                              :1;          /*!< Framing error interrupt clear */
    uint32_t PEIC                              :1;          /*!< Parity error interrupt clear */
    uint32_t BEIC                              :1;          /*!< Break error interrupt clear */
    uint32_t OEIC                              :1;          /*!< Overrun error interrupt clear */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _ICR_bits;

/* Bit field positions: */
#define ICR_RIMIC_Pos                        0            /*!< nUARTRI modem interrupt clear */
#define ICR_CTSMIC_Pos                       1            /*!< nUARTCTS modem interrupt clear */
#define ICR_DCDMIC_Pos                       2            /*!< nUARTDCD modem interrupt clear */
#define ICR_DSRMIC_Pos                       3            /*!< nUARTDSR modem interrupt clear */
#define ICR_RXIC_Pos                         4            /*!< Receive interrupt clear */
#define ICR_TXIC_Pos                         5            /*!< Transmit interrupt clear */
#define ICR_RTIC_Pos                         6            /*!< Receive timeout interrupt clear */
#define ICR_FEIC_Pos                         7            /*!< Framing error interrupt clear */
#define ICR_PEIC_Pos                         8            /*!< Parity error interrupt clear */
#define ICR_BEIC_Pos                         9            /*!< Break error interrupt clear */
#define ICR_OEIC_Pos                         10           /*!< Overrun error interrupt clear */

/* Bit field masks: */
#define ICR_RIMIC_Msk                        0x00000001   /*!< nUARTRI modem interrupt clear */
#define ICR_CTSMIC_Msk                       0x00000002   /*!< nUARTCTS modem interrupt clear */
#define ICR_DCDMIC_Msk                       0x00000004   /*!< nUARTDCD modem interrupt clear */
#define ICR_DSRMIC_Msk                       0x00000008   /*!< nUARTDSR modem interrupt clear */
#define ICR_RXIC_Msk                         0x00000010   /*!< Receive interrupt clear */
#define ICR_TXIC_Msk                         0x00000020   /*!< Transmit interrupt clear */
#define ICR_RTIC_Msk                         0x00000040   /*!< Receive timeout interrupt clear */
#define ICR_FEIC_Msk                         0x00000080   /*!< Framing error interrupt clear */
#define ICR_PEIC_Msk                         0x00000100   /*!< Parity error interrupt clear */
#define ICR_BEIC_Msk                         0x00000200   /*!< Break error interrupt clear */
#define ICR_OEIC_Msk                         0x00000400   /*!< Overrun error interrupt clear */

/*-- DMACR: DMA Control Register ---------------------------------------------*/

typedef struct {
    uint32_t RXDMAE                            :1;          /*!< Receive DMA enable */
    uint32_t TXDMAE                            :1;          /*!< Transmit DMA enable */
    uint32_t DMAONERR                          :1;          /*!< DMA on error */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _DMACR_bits;

/* Bit field positions: */
#define DMACR_RXDMAE_Pos                     0            /*!< Receive DMA enable */
#define DMACR_TXDMAE_Pos                     1            /*!< Transmit DMA enable */
#define DMACR_DMAONERR_Pos                   2            /*!< DMA on error */

/* Bit field masks: */
#define DMACR_RXDMAE_Msk                     0x00000001   /*!< Receive DMA enable */
#define DMACR_TXDMAE_Msk                     0x00000002   /*!< Transmit DMA enable */
#define DMACR_DMAONERR_Msk                   0x00000004   /*!< DMA on error */

/*-- Register map for UART peripheral ----------------------------------------*/

typedef struct {
    union {                                                 /*!< Data Register */
        __IO uint32_t DR;                                     /*!< DR    : type used for word access */
        __IO _DR_bits DR_bit;                                 /*!< DR_bit: structure used for bit access */
    };
    union {                                                 /*!< Receive Status Register/Error Clear Register */
        __IO uint32_t RSR_ECR;                                /*!< RSR_ECR    : type used for word access */
        __IO _RSR_ECR_bits RSR_ECR_bit;                       /*!< RSR_ECR_bit: structure used for bit access */
    };
    uint32_t Reserved0[4];                                  /*!< Reserved */
    union {                                                 /*!< Flag Register */
        __I  uint32_t FR;                                     /*!< FR    : type used for word access */
        __I  _FR_bits FR_bit;                                 /*!< FR_bit: structure used for bit access */
    };
    uint32_t Reserved1[2];                                  /*!< Reserved */
    union {                                                 /*!< Integer Baud Rate Register */
        __IO uint32_t IBRD;                                   /*!< IBRD    : type used for word access */
        __IO _IBRD_bits IBRD_bit;                             /*!< IBRD_bit: structure used for bit access */
    };
    union {                                                 /*!< Fractional Baud Rate Register */
        __IO uint32_t FBRD;                                   /*!< FBRD    : type used for word access */
        __IO _FBRD_bits FBRD_bit;                             /*!< FBRD_bit: structure used for bit access */
    };
    union {                                                 /*!< Line Control Register */
        __IO uint32_t LCR_H;                                  /*!< LCR_H    : type used for word access */
        __IO _LCR_H_bits LCR_H_bit;                           /*!< LCR_H_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register */
        __IO uint32_t CR;                                     /*!< CR    : type used for word access */
        __IO _CR_bits CR_bit;                                 /*!< CR_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt FIFO Level Select Register */
        __IO uint32_t IFLS;                                   /*!< IFLS    : type used for word access */
        __IO _IFLS_bits IFLS_bit;                             /*!< IFLS_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt Mask Set/Clear Register */
        __IO uint32_t IMSC;                                   /*!< IMSC    : type used for word access */
        __IO _IMSC_bits IMSC_bit;                             /*!< IMSC_bit: structure used for bit access */
    };
    union {                                                 /*!< Raw Interrupt Status Register */
        __I  uint32_t RIS;                                    /*!< RIS    : type used for word access */
        __I  _RIS_bits RIS_bit;                               /*!< RIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Masked Interrupt Status Register */
        __I  uint32_t MIS;                                    /*!< MIS    : type used for word access */
        __I  _MIS_bits MIS_bit;                               /*!< MIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt Clear Register */
        __O  uint32_t ICR;                                    /*!< ICR    : type used for word access */
        __O  _ICR_bits ICR_bit;                               /*!< ICR_bit: structure used for bit access */
    };
    union {                                                 /*!< DMA Control Register */
        __IO uint32_t DMACR;                                  /*!< DMACR    : type used for word access */
        __IO _DMACR_bits DMACR_bit;                           /*!< DMACR_bit: structure used for bit access */
    };
} NT_UART_TypeDef;

/******************************************************************************/
/*                         PWM controller registers                           */
/******************************************************************************/

/*-- TBCTL: Timer Control Register -------------------------------------------*/

typedef struct {
    uint32_t CTRMODE                           :2;          /*!< Counter operation */
    uint32_t PHSEN                             :1;          /*!< load timer counter */
    uint32_t PRDLD                             :1;          /*!< lazy loading mode register */
    uint32_t SYNCOSEL                          :2;          /*!< source for output clock signal */
    uint32_t SWFSYNC                           :1;          /*!< Software emulation clock */
    uint32_t HSPCLKDIV                         :3;          /*!< Dividing value of systemclock */
    uint32_t CLKDIV                            :3;          /*!< Dividing systemclock */
    uint32_t PHSDIR                            :1;          /*!< The phase direction */
    uint32_t FREE_SOFT                         :2;          /*!< Mode emulation software */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _TBCTL_bits;

/* Bit field positions: */
#define TBCTL_CTRMODE_Pos                    0            /*!< Counter operation */
#define TBCTL_PHSEN_Pos                      2            /*!< load timer counter */
#define TBCTL_PRDLD_Pos                      3            /*!< lazy loading mode register */
#define TBCTL_SYNCOSEL_Pos                   4            /*!< source for output clock signal */
#define TBCTL_SWFSYNC_Pos                    6            /*!< Software emulation clock */
#define TBCTL_HSPCLKDIV_Pos                  7            /*!< Dividing value of systemclock */
#define TBCTL_CLKDIV_Pos                     10           /*!< Dividing systemclock */
#define TBCTL_PHSDIR_Pos                     13           /*!< The phase direction */
#define TBCTL_FREE_SOFT_Pos                  14           /*!< Mode emulation software */

/* Bit field masks: */
#define TBCTL_CTRMODE_Msk                    0x00000003   /*!< Counter operation */
#define TBCTL_PHSEN_Msk                      0x00000004   /*!< load timer counter */
#define TBCTL_PRDLD_Msk                      0x00000008   /*!< lazy loading mode register */
#define TBCTL_SYNCOSEL_Msk                   0x00000030   /*!< source for output clock signal */
#define TBCTL_SWFSYNC_Msk                    0x00000040   /*!< Software emulation clock */
#define TBCTL_HSPCLKDIV_Msk                  0x00000380   /*!< Dividing value of systemclock */
#define TBCTL_CLKDIV_Msk                     0x00001C00   /*!< Dividing systemclock */
#define TBCTL_PHSDIR_Msk                     0x00002000   /*!< The phase direction */
#define TBCTL_FREE_SOFT_Msk                  0x0000C000   /*!< Mode emulation software */

/*-- TBSTS: Timer status register --------------------------------------------*/

typedef struct {
    uint32_t CTRDIR                            :1;          /*!< Current timer counting direction */
    uint32_t SYNCI                             :1;          /*!< Synchronization status */
    uint32_t CTRMAX                            :1;          /*!< Position of the peak value */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _TBSTS_bits;

/* Bit field positions: */
#define TBSTS_CTRDIR_Pos                     0            /*!< Current timer counting direction */
#define TBSTS_SYNCI_Pos                      1            /*!< Synchronization status */
#define TBSTS_CTRMAX_Pos                     2            /*!< Position of the peak value */

/* Bit field masks: */
#define TBSTS_CTRDIR_Msk                     0x00000001   /*!< Current timer counting direction */
#define TBSTS_SYNCI_Msk                      0x00000002   /*!< Synchronization status */
#define TBSTS_CTRMAX_Msk                     0x00000004   /*!< Position of the peak value */

/*-- TBPHS: register Phases --------------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t TBPHSHR                           :8;
    uint32_t TBPHS                             :16;         /*!< initial phase of the Timer */
} _TBPHS_bits;

/* Bit field positions: */
#define TBPHS_TBPHSHR_Pos                    8
#define TBPHS_TBPHS_Pos                      16           /*!< initial phase of the Timer */

/* Bit field masks: */
#define TBPHS_TBPHSHR_Msk                    0x0000FF00
#define TBPHS_TBPHS_Msk                      0xFFFF0000   /*!< initial phase of the Timer */

/*-- TBCTR: Register current value of timer ----------------------------------*/

typedef struct {
    uint32_t TBCTR                             :16;         /*!< the current value of the timer */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _TBCTR_bits;

/* Bit field positions: */
#define TBCTR_TBCTR_Pos                      0            /*!< the current value of the timer */

/* Bit field masks: */
#define TBCTR_TBCTR_Msk                      0x0000FFFF   /*!< the current value of the timer */

/*-- TBPRD: Register maximum Timer -------------------------------------------*/

typedef struct {
    uint32_t TBPRD                             :16;         /*!< the maximum count value of Timer */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _TBPRD_bits;

/* Bit field positions: */
#define TBPRD_TBPRD_Pos                      0            /*!< the maximum count value of Timer */

/* Bit field masks: */
#define TBPRD_TBPRD_Msk                      0x0000FFFF   /*!< the maximum count value of Timer */

/*-- CMPCTL ------------------------------------------------------------------*/

typedef struct {
    uint32_t LOADAMODE                         :2;          /*!< load event of deferred values CMPA */
    uint32_t LOADBMODE                         :2;          /*!< load event of deferred values CMPB */
    uint32_t SHDWAMODE                         :1;          /*!< Write-permit mode */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SHDWBMODE                         :1;          /*!< Write-permit mode */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t SHDWAFULL                         :1;          /*!< Status lazy loading in CMPA */
    uint32_t SHDWBFULL                         :1;          /*!< Status lazy loading in CMPB */
    uint32_t Reserved2                         :22;         /*!< Reserved */
} _CMPCTL_bits;

/* Bit field positions: */
#define CMPCTL_LOADAMODE_Pos                 0            /*!< load event of deferred values CMPA */
#define CMPCTL_LOADBMODE_Pos                 2            /*!< load event of deferred values CMPB */
#define CMPCTL_SHDWAMODE_Pos                 4            /*!< Write-permit mode */
#define CMPCTL_SHDWBMODE_Pos                 6            /*!< Write-permit mode */
#define CMPCTL_SHDWAFULL_Pos                 8            /*!< Status lazy loading in CMPA */
#define CMPCTL_SHDWBFULL_Pos                 9            /*!< Status lazy loading in CMPB */

/* Bit field masks: */
#define CMPCTL_LOADAMODE_Msk                 0x00000003   /*!< load event of deferred values CMPA */
#define CMPCTL_LOADBMODE_Msk                 0x0000000C   /*!< load event of deferred values CMPB */
#define CMPCTL_SHDWAMODE_Msk                 0x00000010   /*!< Write-permit mode */
#define CMPCTL_SHDWBMODE_Msk                 0x00000040   /*!< Write-permit mode */
#define CMPCTL_SHDWAFULL_Msk                 0x00000100   /*!< Status lazy loading in CMPA */
#define CMPCTL_SHDWBFULL_Msk                 0x00000200   /*!< Status lazy loading in CMPB */

/*-- CMPA: Register threshold A ----------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :8;          /*!< Reserved */
    uint32_t CMPAHR                            :8;          /*!< A threshold register */
    uint32_t CMPA                              :16;         /*!< active value threshold A */
} _CMPA_bits;

/* Bit field positions: */
#define CMPA_CMPAHR_Pos                      8            /*!< A threshold register */
#define CMPA_CMPA_Pos                        16           /*!< active value threshold A */

/* Bit field masks: */
#define CMPA_CMPAHR_Msk                      0x0000FF00   /*!< A threshold register */
#define CMPA_CMPA_Msk                        0xFFFF0000   /*!< active value threshold A */

/*-- CMPB: Register threshold B ----------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :16;         /*!< Reserved */
    uint32_t CMPB                              :16;         /*!< active value threshold B */
} _CMPB_bits;

/* Bit field positions: */
#define CMPB_CMPB_Pos                        16           /*!< active value threshold B */

/* Bit field masks: */
#define CMPB_CMPB_Msk                        0xFFFF0000   /*!< active value threshold B */

/*-- AQCTLA: Register handlers for output A ----------------------------------*/

typedef struct {
    uint32_t ZRO                               :2;          /*!< effect on the output signal event CTR = 0 */
    uint32_t PRD                               :2;          /*!< effect on the output signal event CTR = PRD */
    uint32_t CAU                               :2;          /*!< effect on the output signal event CTR = CMPA,count up */
    uint32_t CAD                               :2;          /*!< effect on the output signal event CTR = CMPA,count down */
    uint32_t CBU                               :2;          /*!< effect on the output signal event CTR = CMPB,count up */
    uint32_t CBD                               :2;          /*!< effect on the output signal event CTR = CMPB,count down */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _AQCTLA_bits;

/* Bit field positions: */
#define AQCTLA_ZRO_Pos                       0            /*!< effect on the output signal event CTR = 0 */
#define AQCTLA_PRD_Pos                       2            /*!< effect on the output signal event CTR = PRD */
#define AQCTLA_CAU_Pos                       4            /*!< effect on the output signal event CTR = CMPA,count up */
#define AQCTLA_CAD_Pos                       6            /*!< effect on the output signal event CTR = CMPA,count down */
#define AQCTLA_CBU_Pos                       8            /*!< effect on the output signal event CTR = CMPB,count up */
#define AQCTLA_CBD_Pos                       10           /*!< effect on the output signal event CTR = CMPB,count down */

/* Bit field masks: */
#define AQCTLA_ZRO_Msk                       0x00000003   /*!< effect on the output signal event CTR = 0 */
#define AQCTLA_PRD_Msk                       0x0000000C   /*!< effect on the output signal event CTR = PRD */
#define AQCTLA_CAU_Msk                       0x00000030   /*!< effect on the output signal event CTR = CMPA,count up */
#define AQCTLA_CAD_Msk                       0x000000C0   /*!< effect on the output signal event CTR = CMPA,count down */
#define AQCTLA_CBU_Msk                       0x00000300   /*!< effect on the output signal event CTR = CMPB,count up */
#define AQCTLA_CBD_Msk                       0x00000C00   /*!< effect on the output signal event CTR = CMPB,count down */

/*-- AQCTLB: Register handlers for output B ----------------------------------*/

typedef struct {
    uint32_t ZRO                               :2;          /*!< effect on the output signal event CTR = 0 */
    uint32_t PRD                               :2;          /*!< effect on the output signal event CTR = PRD */
    uint32_t CAU                               :2;          /*!< effect on the output signal event CTR = CMPA,count up */
    uint32_t CAD                               :2;          /*!< effect on the output signal event CTR = CMPA,count down */
    uint32_t CBU                               :2;          /*!< effect on the output signal event CTR = CMPB,count up */
    uint32_t CBD                               :2;          /*!< effect on the output signal event CTR = CMPB,count down */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _AQCTLB_bits;

/* Bit field positions: */
#define AQCTLB_ZRO_Pos                       0            /*!< effect on the output signal event CTR = 0 */
#define AQCTLB_PRD_Pos                       2            /*!< effect on the output signal event CTR = PRD */
#define AQCTLB_CAU_Pos                       4            /*!< effect on the output signal event CTR = CMPA,count up */
#define AQCTLB_CAD_Pos                       6            /*!< effect on the output signal event CTR = CMPA,count down */
#define AQCTLB_CBU_Pos                       8            /*!< effect on the output signal event CTR = CMPB,count up */
#define AQCTLB_CBD_Pos                       10           /*!< effect on the output signal event CTR = CMPB,count down */

/* Bit field masks: */
#define AQCTLB_ZRO_Msk                       0x00000003   /*!< effect on the output signal event CTR = 0 */
#define AQCTLB_PRD_Msk                       0x0000000C   /*!< effect on the output signal event CTR = PRD */
#define AQCTLB_CAU_Msk                       0x00000030   /*!< effect on the output signal event CTR = CMPA,count up */
#define AQCTLB_CAD_Msk                       0x000000C0   /*!< effect on the output signal event CTR = CMPA,count down */
#define AQCTLB_CBU_Msk                       0x00000300   /*!< effect on the output signal event CTR = CMPB,count up */
#define AQCTLB_CBD_Msk                       0x00000C00   /*!< effect on the output signal event CTR = CMPB,count down */

/*-- AQSFRC: Register handlers for a single program management ---------------*/

typedef struct {
    uint32_t ACTSFA                            :2;          /*!< Defines an action with the output at pin */
    uint32_t OTSFA                             :1;          /*!< Initialization single pulse */
    uint32_t ACTSFB                            :2;          /*!< Defines an action with the output at pin */
    uint32_t OTSFB                             :1;          /*!< Initialization single pulse */
    uint32_t RLDCSF                            :2;          /*!< Defines an action with the output at pin */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _AQSFRC_bits;

/* Bit field positions: */
#define AQSFRC_ACTSFA_Pos                    0            /*!< Defines an action with the output at pin */
#define AQSFRC_OTSFA_Pos                     2            /*!< Initialization single pulse */
#define AQSFRC_ACTSFB_Pos                    3            /*!< Defines an action with the output at pin */
#define AQSFRC_OTSFB_Pos                     5            /*!< Initialization single pulse */
#define AQSFRC_RLDCSF_Pos                    6            /*!< Defines an action with the output at pin */

/* Bit field masks: */
#define AQSFRC_ACTSFA_Msk                    0x00000003   /*!< Defines an action with the output at pin */
#define AQSFRC_OTSFA_Msk                     0x00000004   /*!< Initialization single pulse */
#define AQSFRC_ACTSFB_Msk                    0x00000018   /*!< Defines an action with the output at pin */
#define AQSFRC_OTSFB_Msk                     0x00000020   /*!< Initialization single pulse */
#define AQSFRC_RLDCSF_Msk                    0x000000C0   /*!< Defines an action with the output at pin */

/*-- AQCSFRC: Register handlers for the cyclic program Management ------------*/

typedef struct {
    uint32_t CSFA                              :2;          /*!< cyclical impact on output A */
    uint32_t CSFB                              :2;          /*!< cyclical impact on output B */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _AQCSFRC_bits;

/* Bit field positions: */
#define AQCSFRC_CSFA_Pos                     0            /*!< cyclical impact on output A */
#define AQCSFRC_CSFB_Pos                     2            /*!< cyclical impact on output B */

/* Bit field masks: */
#define AQCSFRC_CSFA_Msk                     0x00000003   /*!< cyclical impact on output A */
#define AQCSFRC_CSFB_Msk                     0x0000000C   /*!< cyclical impact on output B */

/*-- DBCTL: Generator Control Register PWM Dead Time -------------------------*/

typedef struct {
    uint32_t OUT_MODE                          :2;
    uint32_t POLSEL                            :2;
    uint32_t IN_MODE                           :2;
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _DBCTL_bits;

/* Bit field positions: */
#define DBCTL_OUT_MODE_Pos                   0
#define DBCTL_POLSEL_Pos                     2
#define DBCTL_IN_MODE_Pos                    4

/* Bit field masks: */
#define DBCTL_OUT_MODE_Msk                   0x00000003
#define DBCTL_POLSEL_Msk                     0x0000000C
#define DBCTL_IN_MODE_Msk                    0x00000030

/*-- DBRED: Dead time control register ---------------------------------------*/

typedef struct {
    uint32_t DEL                               :10;         /*!< delay on the front */
    uint32_t Reserved0                         :22;         /*!< Reserved */
} _DBRED_bits;

/* Bit field positions: */
#define DBRED_DEL_Pos                        0            /*!< delay on the front */

/* Bit field masks: */
#define DBRED_DEL_Msk                        0x000003FF   /*!< delay on the front */

/*-- DBFED: Dead time control register ---------------------------------------*/

typedef struct {
    uint32_t DEL                               :10;         /*!< delay on the falling edge */
    uint32_t Reserved0                         :22;         /*!< Reserved */
} _DBFED_bits;

/* Bit field positions: */
#define DBFED_DEL_Pos                        0            /*!< delay on the falling edge */

/* Bit field masks: */
#define DBFED_DEL_Msk                        0x000003FF   /*!< delay on the falling edge */

/*-- TZSEL: Register the source of the accident ------------------------------*/

typedef struct {
    uint32_t CBC1                              :1;
    uint32_t CBC2                              :1;
    uint32_t CBC3                              :1;
    uint32_t CBC4                              :1;
    uint32_t CBC5                              :1;
    uint32_t CBC6                              :1;          /*!< source signal with the output of the accident Tzx(cyclic mode) */
    uint32_t Reserved0                         :2;          /*!< Reserved */
    uint32_t OSHT1                             :1;
    uint32_t OSHT2                             :1;
    uint32_t OSHT3                             :1;
    uint32_t OSHT4                             :1;
    uint32_t OSHT5                             :1;
    uint32_t OSHT6                             :1;          /*!< source signal with the output of the accident Tzx(Single mode) */
    uint32_t Reserved1                         :18;         /*!< Reserved */
} _TZSEL_bits;

/* Bit field positions: */
#define TZSEL_CBC1_Pos                       0
#define TZSEL_CBC2_Pos                       1
#define TZSEL_CBC3_Pos                       2
#define TZSEL_CBC4_Pos                       3
#define TZSEL_CBC5_Pos                       4
#define TZSEL_CBC6_Pos                       5            /*!< source signal with the output of the accident Tzx(cyclic mode) */
#define TZSEL_OSHT1_Pos                      8
#define TZSEL_OSHT2_Pos                      9
#define TZSEL_OSHT3_Pos                      10
#define TZSEL_OSHT4_Pos                      11
#define TZSEL_OSHT5_Pos                      12
#define TZSEL_OSHT6_Pos                      13           /*!< source signal with the output of the accident Tzx(Single mode) */

/* Bit field masks: */
#define TZSEL_CBC1_Msk                       0x00000001
#define TZSEL_CBC2_Msk                       0x00000002
#define TZSEL_CBC3_Msk                       0x00000004
#define TZSEL_CBC4_Msk                       0x00000008
#define TZSEL_CBC5_Msk                       0x00000010
#define TZSEL_CBC6_Msk                       0x00000020   /*!< source signal with the output of the accident Tzx(cyclic mode) */
#define TZSEL_OSHT1_Msk                      0x00000100
#define TZSEL_OSHT2_Msk                      0x00000200
#define TZSEL_OSHT3_Msk                      0x00000400
#define TZSEL_OSHT4_Msk                      0x00000800
#define TZSEL_OSHT5_Msk                      0x00001000
#define TZSEL_OSHT6_Msk                      0x00002000   /*!< source signal with the output of the accident Tzx(Single mode) */

/*-- TZCTL: Control Register detector alarm signal ---------------------------*/

typedef struct {
    uint32_t TZA                               :2;          /*!< behavior output A */
    uint32_t TZB                               :2;          /*!< behavior output B */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _TZCTL_bits;

/* Bit field positions: */
#define TZCTL_TZA_Pos                        0            /*!< behavior output A */
#define TZCTL_TZB_Pos                        2            /*!< behavior output B */

/* Bit field masks: */
#define TZCTL_TZA_Msk                        0x00000003   /*!< behavior output A */
#define TZCTL_TZB_Msk                        0x0000000C   /*!< behavior output B */

/*-- TZEINT: Interrupt mask register Signal Detection Alarms -----------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CBC                               :1;          /*!< Interrupt generation(cyclic mode) */
    uint32_t OST                               :1;          /*!< Interrupt generation(single mode) */
    uint32_t Reserved1                         :29;         /*!< Reserved */
} _TZEINT_bits;

/* Bit field positions: */
#define TZEINT_CBC_Pos                       1            /*!< Interrupt generation(cyclic mode) */
#define TZEINT_OST_Pos                       2            /*!< Interrupt generation(single mode) */

/* Bit field masks: */
#define TZEINT_CBC_Msk                       0x00000002   /*!< Interrupt generation(cyclic mode) */
#define TZEINT_OST_Msk                       0x00000004   /*!< Interrupt generation(single mode) */

/*-- TZFLG: Flags register interrupt signal detector Accidents ---------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< Status of external interrupts NVIC */
    uint32_t CBC                               :1;          /*!< Interrupt status in a cyclic mode */
    uint32_t OST                               :1;          /*!< Interrupt status in one-shot mode */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _TZFLG_bits;

/* Bit field positions: */
#define TZFLG_INT_Pos                        0            /*!< Status of external interrupts NVIC */
#define TZFLG_CBC_Pos                        1            /*!< Interrupt status in a cyclic mode */
#define TZFLG_OST_Pos                        2            /*!< Interrupt status in one-shot mode */

/* Bit field masks: */
#define TZFLG_INT_Msk                        0x00000001   /*!< Status of external interrupts NVIC */
#define TZFLG_CBC_Msk                        0x00000002   /*!< Interrupt status in a cyclic mode */
#define TZFLG_OST_Msk                        0x00000004   /*!< Interrupt status in one-shot mode */

/*-- TZCLR: Register reset interrupt flag detector alarm signal --------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< Reset status of external interrupts NVIC */
    uint32_t CBC                               :1;          /*!< Reset Interrupt status in a cyclic mode */
    uint32_t OST                               :1;          /*!< Reset Interrupt status in one-shot mode */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _TZCLR_bits;

/* Bit field positions: */
#define TZCLR_INT_Pos                        0            /*!< Reset status of external interrupts NVIC */
#define TZCLR_CBC_Pos                        1            /*!< Reset Interrupt status in a cyclic mode */
#define TZCLR_OST_Pos                        2            /*!< Reset Interrupt status in one-shot mode */

/* Bit field masks: */
#define TZCLR_INT_Msk                        0x00000001   /*!< Reset status of external interrupts NVIC */
#define TZCLR_CBC_Msk                        0x00000002   /*!< Reset Interrupt status in a cyclic mode */
#define TZCLR_OST_Msk                        0x00000004   /*!< Reset Interrupt status in one-shot mode */

/*-- TZFRC: Register software emulation of faults ----------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CBC                               :1;          /*!< Signal generation(cyclic mode) */
    uint32_t OST                               :1;          /*!< Signal generation(single mode) */
    uint32_t Reserved1                         :29;         /*!< Reserved */
} _TZFRC_bits;

/* Bit field positions: */
#define TZFRC_CBC_Pos                        1            /*!< Signal generation(cyclic mode) */
#define TZFRC_OST_Pos                        2            /*!< Signal generation(single mode) */

/* Bit field masks: */
#define TZFRC_CBC_Msk                        0x00000002   /*!< Signal generation(cyclic mode) */
#define TZFRC_OST_Msk                        0x00000004   /*!< Signal generation(single mode) */

/*-- ETSEL: A Source event trigger -------------------------------------------*/

typedef struct {
    uint32_t INTSEL                            :3;          /*!< external interrupt event */
    uint32_t INTEN                             :1;          /*!< Generation of external interrupt EPWMxINT */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t SOCASEL                           :3;          /*!< Event impulse EPWMxSOCA */
    uint32_t SOCAEN                            :1;          /*!< generation of an external signal (EPWMxSOCA) */
    uint32_t SOCBSEL                           :3;          /*!< Event impulse EPWMxSOCB */
    uint32_t SOCBEN                            :1;          /*!< generation of an external signal (EPWMxSOCB) */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _ETSEL_bits;

/* Bit field positions: */
#define ETSEL_INTSEL_Pos                     0            /*!< external interrupt event */
#define ETSEL_INTEN_Pos                      3            /*!< Generation of external interrupt EPWMxINT */
#define ETSEL_SOCASEL_Pos                    8            /*!< Event impulse EPWMxSOCA */
#define ETSEL_SOCAEN_Pos                     11           /*!< generation of an external signal (EPWMxSOCA) */
#define ETSEL_SOCBSEL_Pos                    12           /*!< Event impulse EPWMxSOCB */
#define ETSEL_SOCBEN_Pos                     15           /*!< generation of an external signal (EPWMxSOCB) */

/* Bit field masks: */
#define ETSEL_INTSEL_Msk                     0x00000007   /*!< external interrupt event */
#define ETSEL_INTEN_Msk                      0x00000008   /*!< Generation of external interrupt EPWMxINT */
#define ETSEL_SOCASEL_Msk                    0x00000700   /*!< Event impulse EPWMxSOCA */
#define ETSEL_SOCAEN_Msk                     0x00000800   /*!< generation of an external signal (EPWMxSOCA) */
#define ETSEL_SOCBSEL_Msk                    0x00007000   /*!< Event impulse EPWMxSOCB */
#define ETSEL_SOCBEN_Msk                     0x00008000   /*!< generation of an external signal (EPWMxSOCB) */

/*-- ETPS: Prescaler register the event trigger ------------------------------*/

typedef struct {
    uint32_t INTPRD                            :2;          /*!< number of events specified in a register ETSEL[INTSEL] */
    uint32_t INTCNT                            :2;          /*!< value of event counter interrupt */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t SOCAPRD                           :2;          /*!< number of events specified in a register ETSEL[SOCASEL] */
    uint32_t SOCACNT                           :2;          /*!< count of events forming EPWMxSOCA */
    uint32_t SOCPRD                            :2;          /*!< Number of events specified in ETSEL [SOCBSEL] */
    uint32_t SOCBCNT                           :2;          /*!< count of events forming EPWMxSOCB */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _ETPS_bits;

/* Bit field positions: */
#define ETPS_INTPRD_Pos                      0            /*!< number of events specified in a register ETSEL[INTSEL] */
#define ETPS_INTCNT_Pos                      2            /*!< value of event counter interrupt */
#define ETPS_SOCAPRD_Pos                     8            /*!< number of events specified in a register ETSEL[SOCASEL] */
#define ETPS_SOCACNT_Pos                     10           /*!< count of events forming EPWMxSOCA */
#define ETPS_SOCPRD_Pos                      12           /*!< Number of events specified in ETSEL [SOCBSEL] */
#define ETPS_SOCBCNT_Pos                     14           /*!< count of events forming EPWMxSOCB */

/* Bit field masks: */
#define ETPS_INTPRD_Msk                      0x00000003   /*!< number of events specified in a register ETSEL[INTSEL] */
#define ETPS_INTCNT_Msk                      0x0000000C   /*!< value of event counter interrupt */
#define ETPS_SOCAPRD_Msk                     0x00000300   /*!< number of events specified in a register ETSEL[SOCASEL] */
#define ETPS_SOCACNT_Msk                     0x00000C00   /*!< count of events forming EPWMxSOCA */
#define ETPS_SOCPRD_Msk                      0x00003000   /*!< Number of events specified in ETSEL [SOCBSEL] */
#define ETPS_SOCBCNT_Msk                     0x0000C000   /*!< count of events forming EPWMxSOCB */

/*-- ETFLG: Register Flags event trigger -------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< Status of the external interrupt EPWMxINT */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SOCA                              :1;          /*!< Status of the external ADC EPWMxSOCA */
    uint32_t SOCB                              :1;          /*!< Status of the external ADC EPWMxSOCB */
    uint32_t Reserved1                         :28;         /*!< Reserved */
} _ETFLG_bits;

/* Bit field positions: */
#define ETFLG_INT_Pos                        0            /*!< Status of the external interrupt EPWMxINT */
#define ETFLG_SOCA_Pos                       2            /*!< Status of the external ADC EPWMxSOCA */
#define ETFLG_SOCB_Pos                       3            /*!< Status of the external ADC EPWMxSOCB */

/* Bit field masks: */
#define ETFLG_INT_Msk                        0x00000001   /*!< Status of the external interrupt EPWMxINT */
#define ETFLG_SOCA_Msk                       0x00000004   /*!< Status of the external ADC EPWMxSOCA */
#define ETFLG_SOCB_Msk                       0x00000008   /*!< Status of the external ADC EPWMxSOCB */

/*-- ETCLR: Register reset flags trigger events ------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< reset the status of the external interrupt EPWMxINT */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SOCA                              :1;          /*!< reset the status of the external ADC EPWMxSOCA */
    uint32_t SOCB                              :1;          /*!< reset the status of the external ADC EPWMxSOCB */
    uint32_t Reserved1                         :28;         /*!< Reserved */
} _ETCLR_bits;

/* Bit field positions: */
#define ETCLR_INT_Pos                        0            /*!< reset the status of the external interrupt EPWMxINT */
#define ETCLR_SOCA_Pos                       2            /*!< reset the status of the external ADC EPWMxSOCA */
#define ETCLR_SOCB_Pos                       3            /*!< reset the status of the external ADC EPWMxSOCB */

/* Bit field masks: */
#define ETCLR_INT_Msk                        0x00000001   /*!< reset the status of the external interrupt EPWMxINT */
#define ETCLR_SOCA_Msk                       0x00000004   /*!< reset the status of the external ADC EPWMxSOCA */
#define ETCLR_SOCB_Msk                       0x00000008   /*!< reset the status of the external ADC EPWMxSOCB */

/*-- ETFRC: Register software emulation events -------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< activation of an external interrupt EPWMxINT */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SOCA                              :1;          /*!< activation of the external ADC EPWMxSOCA */
    uint32_t SOCB                              :1;          /*!< activation of the external ADC EPWMxSOCB */
    uint32_t Reserved1                         :28;         /*!< Reserved */
} _ETFRC_bits;

/* Bit field positions: */
#define ETFRC_INT_Pos                        0            /*!< activation of an external interrupt EPWMxINT */
#define ETFRC_SOCA_Pos                       2            /*!< activation of the external ADC EPWMxSOCA */
#define ETFRC_SOCB_Pos                       3            /*!< activation of the external ADC EPWMxSOCB */

/* Bit field masks: */
#define ETFRC_INT_Msk                        0x00000001   /*!< activation of an external interrupt EPWMxINT */
#define ETFRC_SOCA_Msk                       0x00000004   /*!< activation of the external ADC EPWMxSOCA */
#define ETFRC_SOCB_Msk                       0x00000008   /*!< activation of the external ADC EPWMxSOCB */

/*-- PCCTL: Control Register modulator ---------------------------------------*/

typedef struct {
    uint32_t CHPEN                             :1;          /*!< enables the Modulator */
    uint32_t OSHTWTH                           :4;          /*!< a first pulse width */
    uint32_t SHRFREQ                           :3;          /*!< frequency of the second and subsequent pulses */
    uint32_t CHPDUTY                           :3;          /*!< duty cycle of the second and subsequent pulses */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _PCCTL_bits;

/* Bit field positions: */
#define PCCTL_CHPEN_Pos                      0            /*!< enables the Modulator */
#define PCCTL_OSHTWTH_Pos                    1            /*!< a first pulse width */
#define PCCTL_SHRFREQ_Pos                    5            /*!< frequency of the second and subsequent pulses */
#define PCCTL_CHPDUTY_Pos                    8            /*!< duty cycle of the second and subsequent pulses */

/* Bit field masks: */
#define PCCTL_CHPEN_Msk                      0x00000001   /*!< enables the Modulator */
#define PCCTL_OSHTWTH_Msk                    0x0000001E   /*!< a first pulse width */
#define PCCTL_SHRFREQ_Msk                    0x000000E0   /*!< frequency of the second and subsequent pulses */
#define PCCTL_CHPDUTY_Msk                    0x00000700   /*!< duty cycle of the second and subsequent pulses */

/*-- HRCNFG: Register Configuration Block PWM High Definition ----------------*/

typedef struct {
    uint32_t EDGMODE                           :2;          /*!< value of rise and fall, turning control of the delay line */
    uint32_t CTLMODE                           :1;          /*!< register specifies the delay */
    uint32_t HR_LOAD                           :1;          /*!< load event of deferred value to the active register */
    uint32_t Reserved0                         :12;         /*!< Reserved */
    uint32_t MEP_SCALEFACTOR                   :8;          /*!< result of the correction circuit of the delay line */
    uint32_t Reserved1                         :8;          /*!< Reserved */
} _HRCNFG_bits;

/* Bit field positions: */
#define HRCNFG_EDGMODE_Pos                   0            /*!< value of rise and fall, turning control of the delay line */
#define HRCNFG_CTLMODE_Pos                   2            /*!< register specifies the delay */
#define HRCNFG_HR_LOAD_Pos                   3            /*!< load event of deferred value to the active register */
#define HRCNFG_MEP_SCALEFACTOR_Pos           16           /*!< result of the correction circuit of the delay line */

/* Bit field masks: */
#define HRCNFG_EDGMODE_Msk                   0x00000003   /*!< value of rise and fall, turning control of the delay line */
#define HRCNFG_CTLMODE_Msk                   0x00000004   /*!< register specifies the delay */
#define HRCNFG_HR_LOAD_Msk                   0x00000008   /*!< load event of deferred value to the active register */
#define HRCNFG_MEP_SCALEFACTOR_Msk           0x00FF0000   /*!< result of the correction circuit of the delay line */

/*-- FWDTH: Register width filtering -----------------------------------------*/

typedef struct {
    uint32_t FWDTH                             :8;          /*!< Short pulse width of the filter */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _FWDTH_bits;

/* Bit field positions: */
#define FWDTH_FWDTH_Pos                      0            /*!< Short pulse width of the filter */

/* Bit field masks: */
#define FWDTH_FWDTH_Msk                      0x000000FF   /*!< Short pulse width of the filter */

/*-- HDSEL: Register source event retention ----------------------------------*/

typedef struct {
    uint32_t DCMP                              :24;         /*!< Mask of the ADC digital comparator */
    uint32_t ACMP                              :3;          /*!< Mask Analog Comparator */
    uint32_t Reserved0                         :5;          /*!< Reserved */
} _HDSEL_bits;

/* Bit field positions: */
#define HDSEL_DCMP_Pos                       0            /*!< Mask of the ADC digital comparator */
#define HDSEL_ACMP_Pos                       24           /*!< Mask Analog Comparator */

/* Bit field masks: */
#define HDSEL_DCMP_Msk                       0x00FFFFFF   /*!< Mask of the ADC digital comparator */
#define HDSEL_ACMP_Msk                       0x07000000   /*!< Mask Analog Comparator */

/*-- HDCTL: Control Register detector hold events ----------------------------*/

typedef struct {
    uint32_t HDA                               :2;          /*!< Signal A behavior in case failure events */
    uint32_t HDB                               :2;          /*!< Signal B behavior in case failure events */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _HDCTL_bits;

/* Bit field positions: */
#define HDCTL_HDA_Pos                        0            /*!< Signal A behavior in case failure events */
#define HDCTL_HDB_Pos                        2            /*!< Signal B behavior in case failure events */

/* Bit field masks: */
#define HDCTL_HDA_Msk                        0x00000003   /*!< Signal A behavior in case failure events */
#define HDCTL_HDB_Msk                        0x0000000C   /*!< Signal B behavior in case failure events */

/*-- HDFRC: Register software activation threshold trigger -------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CBC                               :1;          /*!< activation threshold trigger in cycle mode */
    uint32_t OST                               :1;          /*!< activation threshold trigger in single mode */
    uint32_t Reserved1                         :29;         /*!< Reserved */
} _HDFRC_bits;

typedef struct {
    uint32_t INT                               :1;          /*!< Reserved */
    uint32_t CBC                               :1;          /*!< activation threshold trigger in cycle mode */
    uint32_t OST                               :1;          /*!< activation threshold trigger in single mode */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _HDFLG_bits;

typedef struct {
    uint32_t INT                               :1;          /*!< Clear Interrupt */
    uint32_t Reserved1                         :31;         /*!< Reserved */
} _PWMINTCLR_bits;

/* Bit field positions: */
#define HDFRC_CBC_Pos                        1            /*!< activation threshold trigger in cycle mode */
#define HDFRC_OST_Pos                        2            /*!< activation threshold trigger in single mode */

/* Bit field masks: */
#define HDFRC_CBC_Msk                        0x00000002   /*!< activation threshold trigger in cycle mode */
#define HDFRC_OST_Msk                        0x00000004   /*!< activation threshold trigger in single mode */

/*-- Register map for PWM peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Timer Control Register */
        __IO uint32_t TBCTL;                                  /*!< TBCTL    : type used for word access */
        __IO _TBCTL_bits TBCTL_bit;                           /*!< TBCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Timer status register */
        __I  uint32_t TBSTS;                                  /*!< TBSTS    : type used for word access */
        __I  _TBSTS_bits TBSTS_bit;                           /*!< TBSTS_bit: structure used for bit access */
    };
    union {                                                 /*!< register Phases */
        __IO uint32_t TBPHS;                                  /*!< TBPHS    : type used for word access */
        __IO _TBPHS_bits TBPHS_bit;                           /*!< TBPHS_bit: structure used for bit access */
    };
    union {                                                 /*!< Register current value of timer */
        __IO uint32_t TBCTR;                                  /*!< TBCTR    : type used for word access */
        __IO _TBCTR_bits TBCTR_bit;                           /*!< TBCTR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register maximum Timer */
        __IO uint32_t TBPRD;                                  /*!< TBPRD    : type used for word access */
        __IO _TBPRD_bits TBPRD_bit;                           /*!< TBPRD_bit: structure used for bit access */
    };
    union {                                                 /*!<  */
        __IO uint32_t CMPCTL;                                 /*!< CMPCTL    : type used for word access */
        __IO _CMPCTL_bits CMPCTL_bit;                         /*!< CMPCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Register threshold A */
        __IO uint32_t CMPA;                                   /*!< CMPA    : type used for word access */
        __IO _CMPA_bits CMPA_bit;                             /*!< CMPA_bit: structure used for bit access */
    };
    union {                                                 /*!< Register threshold B */
        __IO uint32_t CMPB;                                   /*!< CMPB    : type used for word access */
        __IO _CMPB_bits CMPB_bit;                             /*!< CMPB_bit: structure used for bit access */
    };
    union {                                                 /*!< Register handlers for output A */
        __IO uint32_t AQCTLA;                                 /*!< AQCTLA    : type used for word access */
        __IO _AQCTLA_bits AQCTLA_bit;                         /*!< AQCTLA_bit: structure used for bit access */
    };
    union {                                                 /*!< Register handlers for output B */
        __IO uint32_t AQCTLB;                                 /*!< AQCTLB    : type used for word access */
        __IO _AQCTLB_bits AQCTLB_bit;                         /*!< AQCTLB_bit: structure used for bit access */
    };
    union {                                                 /*!< Register handlers for a single program management */
        __IO uint32_t AQSFRC;                                 /*!< AQSFRC    : type used for word access */
        __IO _AQSFRC_bits AQSFRC_bit;                         /*!< AQSFRC_bit: structure used for bit access */
    };
    union {                                                 /*!< Register handlers for the cyclic program Management */
        __IO uint32_t AQCSFRC;                                /*!< AQCSFRC    : type used for word access */
        __IO _AQCSFRC_bits AQCSFRC_bit;                       /*!< AQCSFRC_bit: structure used for bit access */
    };
    union {                                                 /*!< Generator Control Register PWM Dead Time */
        __IO uint32_t DBCTL;                                  /*!< DBCTL    : type used for word access */
        __IO _DBCTL_bits DBCTL_bit;                           /*!< DBCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Dead time control register */
        __IO uint32_t DBRED;                                  /*!< DBRED    : type used for word access */
        __IO _DBRED_bits DBRED_bit;                           /*!< DBRED_bit: structure used for bit access */
    };
    union {                                                 /*!< Dead time control register */
        __IO uint32_t DBFED;                                  /*!< DBFED    : type used for word access */
        __IO _DBFED_bits DBFED_bit;                           /*!< DBFED_bit: structure used for bit access */
    };
    union {                                                 /*!< Register the source of the accident */
        __IO uint32_t TZSEL;                                  /*!< TZSEL    : type used for word access */
        __IO _TZSEL_bits TZSEL_bit;                           /*!< TZSEL_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register detector alarm signal */
        __IO uint32_t TZCTL;                                  /*!< TZCTL    : type used for word access */
        __IO _TZCTL_bits TZCTL_bit;                           /*!< TZCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt mask register Signal Detection Alarms */
        __IO uint32_t TZEINT;                                 /*!< TZEINT    : type used for word access */
        __IO _TZEINT_bits TZEINT_bit;                         /*!< TZEINT_bit: structure used for bit access */
    };
    union {                                                 /*!< Flags register interrupt signal detector Accidents */
        __I  uint32_t TZFLG;                                  /*!< TZFLG    : type used for word access */
        __I  _TZFLG_bits TZFLG_bit;                           /*!< TZFLG_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset interrupt flag detector alarm signal */
        __IO uint32_t TZCLR;                                  /*!< TZCLR    : type used for word access */
        __IO _TZCLR_bits TZCLR_bit;                           /*!< TZCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register software emulation of faults */
        __IO uint32_t TZFRC;                                  /*!< TZFRC    : type used for word access */
        __IO _TZFRC_bits TZFRC_bit;                           /*!< TZFRC_bit: structure used for bit access */
    };
    union {                                                 /*!< A Source event trigger */
        __IO uint32_t ETSEL;                                  /*!< ETSEL    : type used for word access */
        __IO _ETSEL_bits ETSEL_bit;                           /*!< ETSEL_bit: structure used for bit access */
    };
    union {                                                 /*!< Prescaler register the event trigger */
        __IO uint32_t ETPS;                                   /*!< ETPS    : type used for word access */
        __IO _ETPS_bits ETPS_bit;                             /*!< ETPS_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Flags event trigger */
        __I  uint32_t ETFLG;                                  /*!< ETFLG    : type used for word access */
        __I  _ETFLG_bits ETFLG_bit;                           /*!< ETFLG_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset flags trigger events */
        __IO  uint32_t ETCLR;                                  /*!< ETCLR    : type used for word access */
        __IO  _ETCLR_bits ETCLR_bit;                           /*!< ETCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register software emulation events */
        __I  uint32_t ETFRC;                                  /*!< ETFRC    : type used for word access */
        __I  _ETFRC_bits ETFRC_bit;                           /*!< ETFRC_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register modulator */
        __IO uint32_t PCCTL;                                  /*!< PCCTL    : type used for word access */
        __IO _PCCTL_bits PCCTL_bit;                           /*!< PCCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Configuration Block PWM High Definition */
        __IO uint32_t HRCNFG;                                 /*!< HRCNFG    : type used for word access */
        __IO _HRCNFG_bits HRCNFG_bit;                         /*!< HRCNFG_bit: structure used for bit access */
    };
    union {                                                 /*!< Register width filtering */
        __IO uint32_t FWDTH;                                  /*!< FWDTH    : type used for word access */
        __IO _FWDTH_bits FWDTH_bit;                           /*!< FWDTH_bit: structure used for bit access */
    };
    uint32_t Reserved0[5];                                  /*!< Reserved */
    union {                                                 /*!< Register source event retention */
        __IO uint32_t HDSEL;                                  /*!< HDSEL    : type used for word access */
        __IO _HDSEL_bits HDSEL_bit;                           /*!< HDSEL_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register detector hold events */
        __IO uint32_t HDCTL;                                  /*!< HDCTL    : type used for word access */
        __IO _HDCTL_bits HDCTL_bit;                           /*!< HDCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Register ............................. */
        __IO uint32_t HDEINT;                                 /*!< Регистр маски прерывания Порогового Выключателя.*/
        __IO _HDFRC_bits HDEINT_bit;                          /*Address offset: 0x90 */
    };
    union {                                                 /*!< Register ............................. */
        __IO uint32_t HDFLG;                                  /*!< Регистр Флагов прерывания Порогового Выключателя.*/
        __IO _HDFLG_bits HDFLG_bit;                           /*Address offset: 0x94 */
    };
    union {                                                 /*!< Register ............................. */
        __IO uint32_t HDCLR;                                   /*!< Регистр Сброса флагов Порогового Выключателя.*/
        __IO _HDFLG_bits HDCLR_bit;                           /*Address offset: 0x98 */
    };
    union {                                                 /*!< Register software activation threshold trigger */
        __IO uint32_t HDFRC;                                  /*!< HDFRC    : type used for word access */
        __IO _HDFRC_bits HDFRC_bit;                           /*!< HDFRC_bit: structure used for bit access */
    };
    union {                                                 /*!< Register ............................. */
        __IO uint32_t HDINTCLR;                               /*Address offset: 0xA0 */
        __IO _PWMINTCLR_bits HDINTCLR_bit;
    };
    union {                                                 /*!< Register ............................. */
        __IO uint32_t TZINTCLR;                               /*Address offset: 0xA4 */
        __IO _PWMINTCLR_bits TZINTCLR_bit;
    };
    union {                                                 /*!< Register ............................. */
        __IO uint32_t INTCLR;                                 /*Address offset: 0xA8 */
        __IO _PWMINTCLR_bits INTCLR_bit;
    };
} NT_PWM_TypeDef;

/******************************************************************************/
/*                         CAP controller registers                           */
/******************************************************************************/

/*-- ECCTL1: Register capture control 1 --------------------------------------*/

typedef struct {
    uint32_t CAP1_POL                          :1;          /*!< pos/negedge capture 1 */
    uint32_t CTR_RST1                          :1;          /*!< reset later event 1 */
    uint32_t CAP2_POL                          :1;          /*!< pos/negedge capture 2 */
    uint32_t CTR_RST2                          :1;          /*!< reset later event 2 */
    uint32_t CAP3_POL                          :1;          /*!< pos/negedge capture 3 */
    uint32_t CTR_RST3                          :1;          /*!< reset later event 3 */
    uint32_t CAP4_POL                          :1;          /*!< pos/negedge capture 4 */
    uint32_t CTR_RST4                          :1;          /*!< reset later event 4 */
    uint32_t CAPLDEN                           :1;          /*!< enable capture */
    uint32_t PRESCALE                          :5;          /*!< Prescaler meaning */
    uint32_t FREE_SOFT                         :2;          /*!< Emulation mode */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _ECCTL1_bits;

/* Bit field positions: */
#define ECCTL1_CAP1_POL_Pos                  0            /*!< pos/negedge capture 1 */
#define ECCTL1_CTR_RST1_Pos                  1            /*!< reset later event 1 */
#define ECCTL1_CAP2_POL_Pos                  2            /*!< pos/negedge capture 2 */
#define ECCTL1_CTR_RST2_Pos                  3            /*!< reset later event 2 */
#define ECCTL1_CAP3_POL_Pos                  4            /*!< pos/negedge capture 3 */
#define ECCTL1_CTR_RST3_Pos                  5            /*!< reset later event 3 */
#define ECCTL1_CAP4_POL_Pos                  6            /*!< pos/negedge capture 4 */
#define ECCTL1_CTR_RST4_Pos                  7            /*!< reset later event 4 */
#define ECCTL1_CAPLDEN_Pos                   8            /*!< enable capture */
#define ECCTL1_PRESCALE_Pos                  9            /*!< Prescaler meaning */
#define ECCTL1_FREE_SOFT_Pos                 14           /*!< Emulation mode */

/* Bit field masks: */
#define ECCTL1_CAP1_POL_Msk                  0x00000001   /*!< pos/negedge capture 1 */
#define ECCTL1_CTR_RST1_Msk                  0x00000002   /*!< reset later event 1 */
#define ECCTL1_CAP2_POL_Msk                  0x00000004   /*!< pos/negedge capture 2 */
#define ECCTL1_CTR_RST2_Msk                  0x00000008   /*!< reset later event 2 */
#define ECCTL1_CAP3_POL_Msk                  0x00000010   /*!< pos/negedge capture 3 */
#define ECCTL1_CTR_RST3_Msk                  0x00000020   /*!< reset later event 3 */
#define ECCTL1_CAP4_POL_Msk                  0x00000040   /*!< pos/negedge capture 4 */
#define ECCTL1_CTR_RST4_Msk                  0x00000080   /*!< reset later event 4 */
#define ECCTL1_CAPLDEN_Msk                   0x00000100   /*!< enable capture */
#define ECCTL1_PRESCALE_Msk                  0x00003E00   /*!< Prescaler meaning */
#define ECCTL1_FREE_SOFT_Msk                 0x0000C000   /*!< Emulation mode */

/*-- ECCTL2: Register capture control 2 --------------------------------------*/

typedef struct {
    uint32_t SWSYNC                            :1;          /*!< Timers synchr */
    uint32_t CAP_APWM                          :1;          /*!< Capture mode or APWM */
    uint32_t APWM_POL                          :1;          /*!< High/low level APWM */
    uint32_t Reserved0                         :5;          /*!< Reserved */
    uint32_t CONT_ONESHT                       :1;          /*!< Capture mode */
    uint32_t STOP_WRAP                         :2;          /*!< Stops campare */
    uint32_t REARM                             :1;          /*!< reset and enable controller, load reg capt */
    uint32_t TSCTRSTOP                         :1;          /*!< enable Timer */
    uint32_t SYNCI_EN                          :1;          /*!< sync outer impulse */
    uint32_t SYNCO_SEL                         :2;          /*!< Synchronization signal */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _ECCTL2_bits;

/* Bit field positions: */
#define ECCTL2_SWSYNC_Pos                    0            /*!< Timers synchr */
#define ECCTL2_CAP_APWM_Pos                  1            /*!< Capture mode or APWM */
#define ECCTL2_APWM_POL_Pos                  2            /*!< High/low level APWM */
#define ECCTL2_CONT_ONESHT_Pos               8            /*!< Capture mode */
#define ECCTL2_STOP_WRAP_Pos                 9            /*!< Stops campare */
#define ECCTL2_REARM_Pos                     11           /*!< reset and enable controller, load reg capt */
#define ECCTL2_TSCTRSTOP_Pos                 12           /*!< enable Timer */
#define ECCTL2_SYNCI_EN_Pos                  13           /*!< sync outer impulse */
#define ECCTL2_SYNCO_SEL_Pos                 14           /*!< Synchronization signal */

/* Bit field masks: */
#define ECCTL2_SWSYNC_Msk                    0x00000001   /*!< Timers synchr */
#define ECCTL2_CAP_APWM_Msk                  0x00000002   /*!< Capture mode or APWM */
#define ECCTL2_APWM_POL_Msk                  0x00000004   /*!< High/low level APWM */
#define ECCTL2_CONT_ONESHT_Msk               0x00000100   /*!< Capture mode */
#define ECCTL2_STOP_WRAP_Msk                 0x00000600   /*!< Stops campare */
#define ECCTL2_REARM_Msk                     0x00000800   /*!< reset and enable controller, load reg capt */
#define ECCTL2_TSCTRSTOP_Msk                 0x00001000   /*!< enable Timer */
#define ECCTL2_SYNCI_EN_Msk                  0x00002000   /*!< sync outer impulse */
#define ECCTL2_SYNCO_SEL_Msk                 0x0000C000   /*!< Synchronization signal */

/*-- ECEINT: Register interrupt mask -----------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CEVT1                             :1;          /*!< enable int CEVT1 */
    uint32_t CEVT2                             :1;          /*!< enable int CEVT2 */
    uint32_t CEVT3                             :1;          /*!< enable int CEVT3 */
    uint32_t CEVT4                             :1;          /*!< enable int CEVT4 */
    uint32_t CTR_OVF                           :1;          /*!< enable int CTR_OVF */
    uint32_t CTR_PRD                           :1;          /*!< enable int CTR=PRD */
    uint32_t CTR_CMP                           :1;          /*!< enable int CTR=CMP */
    uint32_t Reserved1                         :24;         /*!< Reserved */
} _ECEINT_bits;

/* Bit field positions: */
#define ECEINT_CEVT1_Pos                     1            /*!< enable int CEVT1 */
#define ECEINT_CEVT2_Pos                     2            /*!< enable int CEVT2 */
#define ECEINT_CEVT3_Pos                     3            /*!< enable int CEVT3 */
#define ECEINT_CEVT4_Pos                     4            /*!< enable int CEVT4 */
#define ECEINT_CTR_OVF_Pos                   5            /*!< enable int CTR_OVF */
#define ECEINT_CTR_PRD_Pos                   6            /*!< enable int CTR=PRD */
#define ECEINT_CTR_CMP_Pos                   7            /*!< enable int CTR=CMP */

/* Bit field masks: */
#define ECEINT_CEVT1_Msk                     0x00000002   /*!< enable int CEVT1 */
#define ECEINT_CEVT2_Msk                     0x00000004   /*!< enable int CEVT2 */
#define ECEINT_CEVT3_Msk                     0x00000008   /*!< enable int CEVT3 */
#define ECEINT_CEVT4_Msk                     0x00000010   /*!< enable int CEVT4 */
#define ECEINT_CTR_OVF_Msk                   0x00000020   /*!< enable int CTR_OVF */
#define ECEINT_CTR_PRD_Msk                   0x00000040   /*!< enable int CTR=PRD */
#define ECEINT_CTR_CMP_Msk                   0x00000080   /*!< enable int CTR=CMP */

/*-- ECFLG: Register interrupt status ----------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< indicate global interrupt */
    uint32_t CEVT1                             :1;          /*!< Hap interrupt CEVT1 */
    uint32_t CEVT2                             :1;          /*!< Hap interrupt CEVT2 */
    uint32_t CEVT3                             :1;          /*!< Hap interrupt CEVT3 */
    uint32_t CEVT4                             :1;          /*!< Hap interrupt CEVT4 */
    uint32_t CTR_OVF                           :1;          /*!< Hap interrupt CTROVF */
    uint32_t CTR_PRD                           :1;          /*!< Hap interrupt CTR=PRD */
    uint32_t CTR_CMP                           :1;          /*!< Hap interrupt CTR=CMP */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _ECFLG_bits;

/* Bit field positions: */
#define ECFLG_INT_Pos                        0            /*!< indicate global interrupt */
#define ECFLG_CEVT1_Pos                      1            /*!< Hap interrupt CEVT1 */
#define ECFLG_CEVT2_Pos                      2            /*!< Hap interrupt CEVT2 */
#define ECFLG_CEVT3_Pos                      3            /*!< Hap interrupt CEVT3 */
#define ECFLG_CEVT4_Pos                      4            /*!< Hap interrupt CEVT4 */
#define ECFLG_CTR_OVF_Pos                    5            /*!< Hap interrupt CTROVF */
#define ECFLG_CTR_PRD_Pos                    6            /*!< Hap interrupt CTR=PRD */
#define ECFLG_CTR_CMP_Pos                    7            /*!< Hap interrupt CTR=CMP */

/* Bit field masks: */
#define ECFLG_INT_Msk                        0x00000001   /*!< indicate global interrupt */
#define ECFLG_CEVT1_Msk                      0x00000002   /*!< Hap interrupt CEVT1 */
#define ECFLG_CEVT2_Msk                      0x00000004   /*!< Hap interrupt CEVT2 */
#define ECFLG_CEVT3_Msk                      0x00000008   /*!< Hap interrupt CEVT3 */
#define ECFLG_CEVT4_Msk                      0x00000010   /*!< Hap interrupt CEVT4 */
#define ECFLG_CTR_OVF_Msk                    0x00000020   /*!< Hap interrupt CTROVF */
#define ECFLG_CTR_PRD_Msk                    0x00000040   /*!< Hap interrupt CTR=PRD */
#define ECFLG_CTR_CMP_Msk                    0x00000080   /*!< Hap interrupt CTR=CMP */

/*-- ECCLR: Register reset interrupt -----------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< reset global interrupt */
    uint32_t CEVT1                             :1;          /*!< reset intstatus */
    uint32_t CEVT2                             :1;          /*!< reset intstatus */
    uint32_t CEVT3                             :1;          /*!< reset intstatus */
    uint32_t CEVT4                             :1;          /*!< reset intstatus */
    uint32_t CTR_OVF                           :1;          /*!< reset intstatus */
    uint32_t CTR_PRD                           :1;          /*!< reset intstatus */
    uint32_t CTR_CMP                           :1;          /*!< reset intstatus */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _ECCLR_bits;

/* Bit field positions: */
#define ECCLR_INT_Pos                        0            /*!< reset global interrupt */
#define ECCLR_CEVT1_Pos                      1            /*!< reset intstatus */
#define ECCLR_CEVT2_Pos                      2            /*!< reset intstatus */
#define ECCLR_CEVT3_Pos                      3            /*!< reset intstatus */
#define ECCLR_CEVT4_Pos                      4            /*!< reset intstatus */
#define ECCLR_CTR_OVF_Pos                    5            /*!< reset intstatus */
#define ECCLR_CTR_PRD_Pos                    6            /*!< reset intstatus */
#define ECCLR_CTR_CMP_Pos                    7            /*!< reset intstatus */

/* Bit field masks: */
#define ECCLR_INT_Msk                        0x00000001   /*!< reset global interrupt */
#define ECCLR_CEVT1_Msk                      0x00000002   /*!< reset intstatus */
#define ECCLR_CEVT2_Msk                      0x00000004   /*!< reset intstatus */
#define ECCLR_CEVT3_Msk                      0x00000008   /*!< reset intstatus */
#define ECCLR_CEVT4_Msk                      0x00000010   /*!< reset intstatus */
#define ECCLR_CTR_OVF_Msk                    0x00000020   /*!< reset intstatus */
#define ECCLR_CTR_PRD_Msk                    0x00000040   /*!< reset intstatus */
#define ECCLR_CTR_CMP_Msk                    0x00000080   /*!< reset intstatus */

/*-- ECFRC: Test register interrupt generation -------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t CEVT1                             :1;          /*!< gen test interrupt */
    uint32_t CEVT2                             :1;          /*!< gen test interrupt */
    uint32_t CEVT3                             :1;          /*!< gen test interrupt */
    uint32_t CEVT4                             :1;          /*!< gen test interrupt */
    uint32_t CTR_OVF                           :1;          /*!< gen test interrupt */
    uint32_t CTR_PRD                           :1;          /*!< gen test interrupt */
    uint32_t CTR_CMP                           :1;          /*!< gen test interrupt */
    uint32_t Reserved1                         :24;         /*!< Reserved */
} _ECFRC_bits;

/* Bit field positions: */
#define ECFRC_CEVT1_Pos                      1            /*!< gen test interrupt */
#define ECFRC_CEVT2_Pos                      2            /*!< gen test interrupt */
#define ECFRC_CEVT3_Pos                      3            /*!< gen test interrupt */
#define ECFRC_CEVT4_Pos                      4            /*!< gen test interrupt */
#define ECFRC_CTR_OVF_Pos                    5            /*!< gen test interrupt */
#define ECFRC_CTR_PRD_Pos                    6            /*!< gen test interrupt */
#define ECFRC_CTR_CMP_Pos                    7            /*!< gen test interrupt */

/* Bit field masks: */
#define ECFRC_CEVT1_Msk                      0x00000002   /*!< gen test interrupt */
#define ECFRC_CEVT2_Msk                      0x00000004   /*!< gen test interrupt */
#define ECFRC_CEVT3_Msk                      0x00000008   /*!< gen test interrupt */
#define ECFRC_CEVT4_Msk                      0x00000010   /*!< gen test interrupt */
#define ECFRC_CTR_OVF_Msk                    0x00000020   /*!< gen test interrupt */
#define ECFRC_CTR_PRD_Msk                    0x00000040   /*!< gen test interrupt */
#define ECFRC_CTR_CMP_Msk                    0x00000080   /*!< gen test interrupt */

/*-- Register map for CAP peripheral -----------------------------------------*/

typedef struct {
    __IO uint32_t TSCTR;                                    /*!< TIMER register */
    __IO uint32_t CTRPHS;                                   /*!< Load Timer register */
    __IO uint32_t CAP1;                                     /*!< Capture reguster 1 */
    __IO uint32_t CAP2;                                     /*!< Capture reguster 2 */
    __IO uint32_t CAP3;                                     /*!< Capture reguster 3 */
    __IO uint32_t CAP4;                                     /*!< Capture reguster 4 */
    uint32_t Reserved0[4];                                  /*!< Reserved */
    union {                                                 /*!< Register capture control 1 */
        __IO uint32_t ECCTL1;                                 /*!< ECCTL1    : type used for word access */
        __IO _ECCTL1_bits ECCTL1_bit;                         /*!< ECCTL1_bit: structure used for bit access */
    };
    union {                                                 /*!< Register capture control 2 */
        __IO uint32_t ECCTL2;                                 /*!< ECCTL2    : type used for word access */
        __IO _ECCTL2_bits ECCTL2_bit;                         /*!< ECCTL2_bit: structure used for bit access */
    };
    union {                                                 /*!< Register interrupt mask */
        __IO uint32_t ECEINT;                                 /*!< ECEINT    : type used for word access */
        __IO _ECEINT_bits ECEINT_bit;                         /*!< ECEINT_bit: structure used for bit access */
    };
    union {                                                 /*!< Register interrupt status */
        __I  uint32_t ECFLG;                                  /*!< ECFLG    : type used for word access */
        __I  _ECFLG_bits ECFLG_bit;                           /*!< ECFLG_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset interrupt */
        __IO uint32_t ECCLR;                                  /*!< ECCLR    : type used for word access */
        __IO _ECCLR_bits ECCLR_bit;                           /*!< ECCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Test register interrupt generation */
        __IO uint32_t ECFRC;                                  /*!< ECFRC    : type used for word access */
        __IO _ECFRC_bits ECFRC_bit;                           /*!< ECFRC_bit: structure used for bit access */
    };
} NT_CAP_TypeDef;

/******************************************************************************/
/*                        eQEP controller registers                           */
/******************************************************************************/

/*-- QDECCTL: Input control register -----------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :5;          /*!< Reserved */
    uint32_t QSP                               :1;          /*!< inversion QEPS */
    uint32_t QIP                               :1;          /*!< inv. QEPI */
    uint32_t QBP                               :1;          /*!< inv. QEPB */
    uint32_t QAP                               :1;          /*!< inv. QEPA */
    uint32_t IGATE                             :1;          /*!< strobing input signal */
    uint32_t SWAP                              :1;          /*!< trade places QEPA and QEPB */
    uint32_t XCR                               :1;          /*!< edge selector */
    uint32_t SPSEL                             :1;          /*!< index/strobe output */
    uint32_t SOEN                              :1;          /*!< enable PCSOUT */
    uint32_t QSRC                              :2;          /*!< Select rate */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _QDECCTL_bits;

/* Bit field positions: */
#define QDECCTL_QSP_Pos                      5            /*!< inversion QEPS */
#define QDECCTL_QIP_Pos                      6            /*!< inv. QEPI */
#define QDECCTL_QBP_Pos                      7            /*!< inv. QEPB */
#define QDECCTL_QAP_Pos                      8            /*!< inv. QEPA */
#define QDECCTL_IGATE_Pos                    9            /*!< strobing input signal */
#define QDECCTL_SWAP_Pos                     10           /*!< trade places QEPA and QEPB */
#define QDECCTL_XCR_Pos                      11           /*!< edge selector */
#define QDECCTL_SPSEL_Pos                    12           /*!< index/strobe output */
#define QDECCTL_SOEN_Pos                     13           /*!< enable PCSOUT */
#define QDECCTL_QSRC_Pos                     14           /*!< Select rate */

/* Bit field masks: */
#define QDECCTL_QSP_Msk                      0x00000020   /*!< inversion QEPS */
#define QDECCTL_QIP_Msk                      0x00000040   /*!< inv. QEPI */
#define QDECCTL_QBP_Msk                      0x00000080   /*!< inv. QEPB */
#define QDECCTL_QAP_Msk                      0x00000100   /*!< inv. QEPA */
#define QDECCTL_IGATE_Msk                    0x00000200   /*!< strobing input signal */
#define QDECCTL_SWAP_Msk                     0x00000400   /*!< trade places QEPA and QEPB */
#define QDECCTL_XCR_Msk                      0x00000800   /*!< edge selector */
#define QDECCTL_SPSEL_Msk                    0x00001000   /*!< index/strobe output */
#define QDECCTL_SOEN_Msk                     0x00002000   /*!< enable PCSOUT */
#define QDECCTL_QSRC_Msk                     0x0000C000   /*!< Select rate */

/*-- QEPCTL: Quadrature decoder control register -----------------------------*/

typedef struct {
    uint32_t WDE                               :1;          /*!< enable watchdog timer */
    uint32_t UTE                               :1;          /*!< enable time reading timer */
    uint32_t QCLM                              :1;          /*!< save countposition meaning */
    uint32_t QPEN                              :1;          /*!< reset meaning countposition */
    uint32_t IEL                               :2;          /*!< indexevent */
    uint32_t SEL                               :1;          /*!< sttobevent */
    uint32_t SWI                               :1;          /*!< enable positioncount */
    uint32_t IEI                               :2;          /*!< indexevent fot positioncount */
    uint32_t SEI                               :2;          /*!< strobevent for positioncount */
    uint32_t PCRM                              :2;          /*!< rate reset positioncount */
    uint32_t FREE_SOFT                         :2;          /*!< test rate */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _QEPCTL_bits;

/* Bit field positions: */
#define QEPCTL_WDE_Pos                       0            /*!< enable watchdog timer */
#define QEPCTL_UTE_Pos                       1            /*!< enable time reading timer */
#define QEPCTL_QCLM_Pos                      2            /*!< save countposition meaning */
#define QEPCTL_QPEN_Pos                      3            /*!< reset meaning countposition */
#define QEPCTL_IEL_Pos                       4            /*!< indexevent */
#define QEPCTL_SEL_Pos                       6            /*!< sttobevent */
#define QEPCTL_SWI_Pos                       7            /*!< enable positioncount */
#define QEPCTL_IEI_Pos                       8            /*!< indexevent fot positioncount */
#define QEPCTL_SEI_Pos                       10           /*!< strobevent for positioncount */
#define QEPCTL_PCRM_Pos                      12           /*!< rate reset positioncount */
#define QEPCTL_FREE_SOFT_Pos                 14           /*!< test rate */

/* Bit field masks: */
#define QEPCTL_WDE_Msk                       0x00000001   /*!< enable watchdog timer */
#define QEPCTL_UTE_Msk                       0x00000002   /*!< enable time reading timer */
#define QEPCTL_QCLM_Msk                      0x00000004   /*!< save countposition meaning */
#define QEPCTL_QPEN_Msk                      0x00000008   /*!< reset meaning countposition */
#define QEPCTL_IEL_Msk                       0x00000030   /*!< indexevent */
#define QEPCTL_SEL_Msk                       0x00000040   /*!< sttobevent */
#define QEPCTL_SWI_Msk                       0x00000080   /*!< enable positioncount */
#define QEPCTL_IEI_Msk                       0x00000300   /*!< indexevent fot positioncount */
#define QEPCTL_SEI_Msk                       0x00000C00   /*!< strobevent for positioncount */
#define QEPCTL_PCRM_Msk                      0x00003000   /*!< rate reset positioncount */
#define QEPCTL_FREE_SOFT_Msk                 0x0000C000   /*!< test rate */

/*-- QCAPCTL: Capture register -----------------------------------------------*/

typedef struct {
    uint32_t UPPS                              :4;          /*!< Entrance divisor */
    uint32_t CCPS                              :3;          /*!< System cycle */
    uint32_t SELEVENT                          :1;          /*!< Reset timer */
    uint32_t Reserved0                         :7;          /*!< Reserved */
    uint32_t CEN                               :1;          /*!< enable decoder */
    uint32_t Reserved1                         :16;         /*!< Reserved */
} _QCAPCTL_bits;

/* Bit field positions: */
#define QCAPCTL_UPPS_Pos                     0            /*!< Entrance divisor */
#define QCAPCTL_CCPS_Pos                     4            /*!< System cycle */
#define QCAPCTL_SELEVENT_Pos                 7            /*!< Reset timer */
#define QCAPCTL_CEN_Pos                      15           /*!< enable decoder */

/* Bit field masks: */
#define QCAPCTL_UPPS_Msk                     0x0000000F   /*!< Entrance divisor */
#define QCAPCTL_CCPS_Msk                     0x00000070   /*!< System cycle */
#define QCAPCTL_SELEVENT_Msk                 0x00000080   /*!< Reset timer */
#define QCAPCTL_CEN_Msk                      0x00008000   /*!< enable decoder */

/*-- QPOSCTL: Register countposition control ---------------------------------*/

typedef struct {
    uint32_t PCSPW                             :12;         /*!< Impulse width */
    uint32_t PCE                               :1;          /*!< enable compare */
    uint32_t PCPOL                             :1;          /*!< polarity synchout */
    uint32_t PCLOAD                            :1;          /*!< Lazy write rate */
    uint32_t PCSHDW                            :1;          /*!< Lazy load */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _QPOSCTL_bits;

/* Bit field positions: */
#define QPOSCTL_PCSPW_Pos                    0            /*!< Impulse width */
#define QPOSCTL_PCE_Pos                      12           /*!< enable compare */
#define QPOSCTL_PCPOL_Pos                    13           /*!< polarity synchout */
#define QPOSCTL_PCLOAD_Pos                   14           /*!< Lazy write rate */
#define QPOSCTL_PCSHDW_Pos                   15           /*!< Lazy load */

/* Bit field masks: */
#define QPOSCTL_PCSPW_Msk                    0x00000FFF   /*!< Impulse width */
#define QPOSCTL_PCE_Msk                      0x00001000   /*!< enable compare */
#define QPOSCTL_PCPOL_Msk                    0x00002000   /*!< polarity synchout */
#define QPOSCTL_PCLOAD_Msk                   0x00004000   /*!< Lazy write rate */
#define QPOSCTL_PCSHDW_Msk                   0x00008000   /*!< Lazy load */

/*-- QEINT: Interrupt mask ---------------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t PCE                               :1;          /*!< enable countpos interrupt */
    uint32_t QPE                               :1;          /*!< errorphase interrupt */
    uint32_t QDC                               :1;          /*!< Change direction interrupt */
    uint32_t WTO                               :1;          /*!< Watchdog interrupt */
    uint32_t PCU                               :1;          /*!< interrupt countmin */
    uint32_t PCO                               :1;          /*!< interrupt countmax */
    uint32_t PCR                               :1;          /*!< ready compare int */
    uint32_t PCM                               :1;          /*!< enable compare int */
    uint32_t SEL                               :1;          /*!< Strobe int */
    uint32_t IEL                               :1;          /*!< Index int */
    uint32_t UTO                               :1;          /*!< outflow time int */
    uint32_t Reserved1                         :20;         /*!< Reserved */
} _QEINT_bits;

/* Bit field positions: */
#define QEINT_PCE_Pos                        1            /*!< enable countpos interrupt */
#define QEINT_QPE_Pos                        2            /*!< errorphase interrupt */
#define QEINT_QDC_Pos                        3            /*!< Change direction interrupt */
#define QEINT_WTO_Pos                        4            /*!< Watchdog interrupt */
#define QEINT_PCU_Pos                        5            /*!< interrupt countmin */
#define QEINT_PCO_Pos                        6            /*!< interrupt countmax */
#define QEINT_PCR_Pos                        7            /*!< ready compare int */
#define QEINT_PCM_Pos                        8            /*!< enable compare int */
#define QEINT_SEL_Pos                        9            /*!< Strobe int */
#define QEINT_IEL_Pos                        10           /*!< Index int */
#define QEINT_UTO_Pos                        11           /*!< outflow time int */

/* Bit field masks: */
#define QEINT_PCE_Msk                        0x00000002   /*!< enable countpos interrupt */
#define QEINT_QPE_Msk                        0x00000004   /*!< errorphase interrupt */
#define QEINT_QDC_Msk                        0x00000008   /*!< Change direction interrupt */
#define QEINT_WTO_Msk                        0x00000010   /*!< Watchdog interrupt */
#define QEINT_PCU_Msk                        0x00000020   /*!< interrupt countmin */
#define QEINT_PCO_Msk                        0x00000040   /*!< interrupt countmax */
#define QEINT_PCR_Msk                        0x00000080   /*!< ready compare int */
#define QEINT_PCM_Msk                        0x00000100   /*!< enable compare int */
#define QEINT_SEL_Msk                        0x00000200   /*!< Strobe int */
#define QEINT_IEL_Msk                        0x00000400   /*!< Index int */
#define QEINT_UTO_Msk                        0x00000800   /*!< outflow time int */

/*-- QFLG: Flag interrupt ----------------------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< outint flag */
    uint32_t PCE                               :1;          /*!< enable countpos interrupt flag */
    uint32_t QPE                               :1;          /*!< errorphase interrupt flag */
    uint32_t QDC                               :1;          /*!< Change direction interrupt flag */
    uint32_t WTO                               :1;          /*!< Watchdog interrupt flag */
    uint32_t PCU                               :1;          /*!< interrupt countmin flag */
    uint32_t PCO                               :1;          /*!< interrupt countmax flag */
    uint32_t PCR                               :1;          /*!< ready compare int flag */
    uint32_t PCM                               :1;          /*!< enable compare int flag */
    uint32_t SEL                               :1;          /*!< Strobe int flag */
    uint32_t IEL                               :1;          /*!< Index int flag */
    uint32_t UTO                               :1;          /*!< outflow time int flag */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _QFLG_bits;

/* Bit field positions: */
#define QFLG_INT_Pos                         0            /*!< outint flag */
#define QFLG_PCE_Pos                         1            /*!< enable countpos interrupt flag */
#define QFLG_QPE_Pos                         2            /*!< errorphase interrupt flag */
#define QFLG_QDC_Pos                         3            /*!< Change direction interrupt flag */
#define QFLG_WTO_Pos                         4            /*!< Watchdog interrupt flag */
#define QFLG_PCU_Pos                         5            /*!< interrupt countmin flag */
#define QFLG_PCO_Pos                         6            /*!< interrupt countmax flag */
#define QFLG_PCR_Pos                         7            /*!< ready compare int flag */
#define QFLG_PCM_Pos                         8            /*!< enable compare int flag */
#define QFLG_SEL_Pos                         9            /*!< Strobe int flag */
#define QFLG_IEL_Pos                         10           /*!< Index int flag */
#define QFLG_UTO_Pos                         11           /*!< outflow time int flag */

/* Bit field masks: */
#define QFLG_INT_Msk                         0x00000001   /*!< outint flag */
#define QFLG_PCE_Msk                         0x00000002   /*!< enable countpos interrupt flag */
#define QFLG_QPE_Msk                         0x00000004   /*!< errorphase interrupt flag */
#define QFLG_QDC_Msk                         0x00000008   /*!< Change direction interrupt flag */
#define QFLG_WTO_Msk                         0x00000010   /*!< Watchdog interrupt flag */
#define QFLG_PCU_Msk                         0x00000020   /*!< interrupt countmin flag */
#define QFLG_PCO_Msk                         0x00000040   /*!< interrupt countmax flag */
#define QFLG_PCR_Msk                         0x00000080   /*!< ready compare int flag */
#define QFLG_PCM_Msk                         0x00000100   /*!< enable compare int flag */
#define QFLG_SEL_Msk                         0x00000200   /*!< Strobe int flag */
#define QFLG_IEL_Msk                         0x00000400   /*!< Index int flag */
#define QFLG_UTO_Msk                         0x00000800   /*!< outflow time int flag */

/*-- QCLR: Reset interrupt ---------------------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< reset flag */
    uint32_t PCE                               :1;          /*!< reset flag */
    uint32_t QPE                               :1;          /*!< reset flag */
    uint32_t QDC                               :1;          /*!< reset flag */
    uint32_t WTO                               :1;          /*!< reset flag */
    uint32_t PCU                               :1;          /*!< reset flag */
    uint32_t PCO                               :1;          /*!< reset flag */
    uint32_t PCR                               :1;          /*!< reset flag */
    uint32_t PCM                               :1;          /*!< reset flag */
    uint32_t SEL                               :1;          /*!< reset flag */
    uint32_t IEL                               :1;          /*!< reset flag */
    uint32_t UTO                               :1;          /*!< reset flag */
    uint32_t Reserved0                         :20;         /*!< Reserved */
} _QCLR_bits;

/* Bit field positions: */
#define QCLR_INT_Pos                         0            /*!< reset flag */
#define QCLR_PCE_Pos                         1            /*!< reset flag */
#define QCLR_QPE_Pos                         2            /*!< reset flag */
#define QCLR_QDC_Pos                         3            /*!< reset flag */
#define QCLR_WTO_Pos                         4            /*!< reset flag */
#define QCLR_PCU_Pos                         5            /*!< reset flag */
#define QCLR_PCO_Pos                         6            /*!< reset flag */
#define QCLR_PCR_Pos                         7            /*!< reset flag */
#define QCLR_PCM_Pos                         8            /*!< reset flag */
#define QCLR_SEL_Pos                         9            /*!< reset flag */
#define QCLR_IEL_Pos                         10           /*!< reset flag */
#define QCLR_UTO_Pos                         11           /*!< reset flag */

/* Bit field masks: */
#define QCLR_INT_Msk                         0x00000001   /*!< reset flag */
#define QCLR_PCE_Msk                         0x00000002   /*!< reset flag */
#define QCLR_QPE_Msk                         0x00000004   /*!< reset flag */
#define QCLR_QDC_Msk                         0x00000008   /*!< reset flag */
#define QCLR_WTO_Msk                         0x00000010   /*!< reset flag */
#define QCLR_PCU_Msk                         0x00000020   /*!< reset flag */
#define QCLR_PCO_Msk                         0x00000040   /*!< reset flag */
#define QCLR_PCR_Msk                         0x00000080   /*!< reset flag */
#define QCLR_PCM_Msk                         0x00000100   /*!< reset flag */
#define QCLR_SEL_Msk                         0x00000200   /*!< reset flag */
#define QCLR_IEL_Msk                         0x00000400   /*!< reset flag */
#define QCLR_UTO_Msk                         0x00000800   /*!< reset flag */

/*-- QFRC: Emulation interrupt -----------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t PCE                               :1;          /*!< enable flag */
    uint32_t QPE                               :1;          /*!< enable flag */
    uint32_t QDC                               :1;          /*!< enable flag */
    uint32_t WTO                               :1;          /*!< enable flag */
    uint32_t PCU                               :1;          /*!< enable flag */
    uint32_t PCO                               :1;          /*!< enable flag */
    uint32_t PCR                               :1;          /*!< enable flag */
    uint32_t PCM                               :1;          /*!< enable flag */
    uint32_t SEL                               :1;          /*!< enable flag */
    uint32_t IEL                               :1;          /*!< enable flag */
    uint32_t UTO                               :1;          /*!< enable flag */
    uint32_t Reserved1                         :20;         /*!< Reserved */
} _QFRC_bits;

/* Bit field positions: */
#define QFRC_PCE_Pos                         1            /*!< enable flag */
#define QFRC_QPE_Pos                         2            /*!< enable flag */
#define QFRC_QDC_Pos                         3            /*!< enable flag */
#define QFRC_WTO_Pos                         4            /*!< enable flag */
#define QFRC_PCU_Pos                         5            /*!< enable flag */
#define QFRC_PCO_Pos                         6            /*!< enable flag */
#define QFRC_PCR_Pos                         7            /*!< enable flag */
#define QFRC_PCM_Pos                         8            /*!< enable flag */
#define QFRC_SEL_Pos                         9            /*!< enable flag */
#define QFRC_IEL_Pos                         10           /*!< enable flag */
#define QFRC_UTO_Pos                         11           /*!< enable flag */

/* Bit field masks: */
#define QFRC_PCE_Msk                         0x00000002   /*!< enable flag */
#define QFRC_QPE_Msk                         0x00000004   /*!< enable flag */
#define QFRC_QDC_Msk                         0x00000008   /*!< enable flag */
#define QFRC_WTO_Msk                         0x00000010   /*!< enable flag */
#define QFRC_PCU_Msk                         0x00000020   /*!< enable flag */
#define QFRC_PCO_Msk                         0x00000040   /*!< enable flag */
#define QFRC_PCR_Msk                         0x00000080   /*!< enable flag */
#define QFRC_PCM_Msk                         0x00000100   /*!< enable flag */
#define QFRC_SEL_Msk                         0x00000200   /*!< enable flag */
#define QFRC_IEL_Msk                         0x00000400   /*!< enable flag */
#define QFRC_UTO_Msk                         0x00000800   /*!< enable flag */

/*-- QEPSTS: Status interrupt ------------------------------------------------*/

typedef struct {
    uint32_t PCEF                              :1;          /*!< error position flag */
    uint32_t FIMF                              :1;          /*!< receiving impulse */
    uint32_t CDEF                              :1;          /*!< change rotation */
    uint32_t COEF                              :1;          /*!< Flag Counter Overflow quadrature */
    uint32_t QDLF                              :1;          /*!< rotation of the rotor shaft */
    uint32_t QDF                               :1;          /*!< rotation of the rotor shaft */
    uint32_t FIDF                              :1;          /*!< rotation of the rotor shaft */
    uint32_t UPEVNT                            :1;          /*!< Flag timer time samples */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _QEPSTS_bits;

/* Bit field positions: */
#define QEPSTS_PCEF_Pos                      0            /*!< error position flag */
#define QEPSTS_FIMF_Pos                      1            /*!< receiving impulse */
#define QEPSTS_CDEF_Pos                      2            /*!< change rotation */
#define QEPSTS_COEF_Pos                      3            /*!< Flag Counter Overflow quadrature */
#define QEPSTS_QDLF_Pos                      4            /*!< rotation of the rotor shaft */
#define QEPSTS_QDF_Pos                       5            /*!< rotation of the rotor shaft */
#define QEPSTS_FIDF_Pos                      6            /*!< rotation of the rotor shaft */
#define QEPSTS_UPEVNT_Pos                    7            /*!< Flag timer time samples */

/* Bit field masks: */
#define QEPSTS_PCEF_Msk                      0x00000001   /*!< error position flag */
#define QEPSTS_FIMF_Msk                      0x00000002   /*!< receiving impulse */
#define QEPSTS_CDEF_Msk                      0x00000004   /*!< change rotation */
#define QEPSTS_COEF_Msk                      0x00000008   /*!< Flag Counter Overflow quadrature */
#define QEPSTS_QDLF_Msk                      0x00000010   /*!< rotation of the rotor shaft */
#define QEPSTS_QDF_Msk                       0x00000020   /*!< rotation of the rotor shaft */
#define QEPSTS_FIDF_Msk                      0x00000040   /*!< rotation of the rotor shaft */
#define QEPSTS_UPEVNT_Msk                    0x00000080   /*!< Flag timer time samples */

/*-- INTCLR: Clear interrupt register ----------------------------------------*/

typedef struct {
    uint32_t INT                               :1;          /*!< Active interrupt by read, write 1 to clear interrupt */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _INTCLR_bits;

/* Bit field positions: */
#define INTCLR_INT_Pos                       0            /*!< Active interrupt by read, write 1 to clear interrupt */

/* Bit field masks: */
#define INTCLR_INT_Msk                       0x00000001   /*!< Active interrupt by read, write 1 to clear interrupt */

/*-- Register map for QEP peripheral -----------------------------------------*/

typedef struct {
    __IO uint32_t QPOSCNT;                                  /*!< Position count register */
    __IO uint32_t QPOSINIT;                                 /*!< Shadow count register */
    __IO uint32_t QPOSMAX;                                  /*!< Period register */
    __IO uint32_t QPOSCMP;                                  /*!< Count compare position reg */
    __I  uint32_t QPOSILAT;                                 /*!< Register meaning count position */
    __I  uint32_t QPOSSLAT;                                 /*!< Strobe register */
    __I  uint32_t QPOSLAT;                                  /*!< Time event register */
    __IO uint32_t QUTMR;                                    /*!< Time reading timer register */
    __IO uint32_t QUPRD;                                    /*!< Period time reading timer register */
    __IO uint32_t QWDTMR;                                   /*!< Watchdog timer register */
    __IO uint32_t QWDPRD;                                   /*!< Period watchdog timer register */
    union {                                                 /*!< Input control register */
        __IO uint32_t QDECCTL;                                /*!< QDECCTL    : type used for word access */
        __IO _QDECCTL_bits QDECCTL_bit;                       /*!< QDECCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Quadrature decoder control register */
        __IO uint32_t QEPCTL;                                 /*!< QEPCTL    : type used for word access */
        __IO _QEPCTL_bits QEPCTL_bit;                         /*!< QEPCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Capture register */
        __IO uint32_t QCAPCTL;                                /*!< QCAPCTL    : type used for word access */
        __IO _QCAPCTL_bits QCAPCTL_bit;                       /*!< QCAPCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Register countposition control */
        __IO uint32_t QPOSCTL;                                /*!< QPOSCTL    : type used for word access */
        __IO _QPOSCTL_bits QPOSCTL_bit;                       /*!< QPOSCTL_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt mask */
        __IO uint32_t QEINT;                                  /*!< QEINT    : type used for word access */
        __IO _QEINT_bits QEINT_bit;                           /*!< QEINT_bit: structure used for bit access */
    };
    union {                                                 /*!< Flag interrupt */
        __I  uint32_t QFLG;                                   /*!< QFLG    : type used for word access */
        __I  _QFLG_bits QFLG_bit;                             /*!< QFLG_bit: structure used for bit access */
    };
    union {                                                 /*!< Reset interrupt */
        __IO uint32_t QCLR;                                   /*!< QCLR    : type used for word access */
        __IO _QCLR_bits QCLR_bit;                             /*!< QCLR_bit: structure used for bit access */
    };
    union {                                                 /*!< Emulation interrupt */
        __IO uint32_t QFRC;                                   /*!< QFRC    : type used for word access */
        __IO _QFRC_bits QFRC_bit;                             /*!< QFRC_bit: structure used for bit access */
    };
    union {                                                 /*!< Status interrupt */
        __I  uint32_t QEPSTS;                                 /*!< QEPSTS    : type used for word access */
        __I  _QEPSTS_bits QEPSTS_bit;                         /*!< QEPSTS_bit: structure used for bit access */
    };
    __IO uint32_t QCTMR;                                    /*!< Timer register */
    __IO uint32_t QCPRD;                                    /*!< Period register */
    __I  uint32_t QCTMRLAT;                                 /*!< Register Storage Timer */
    __IO uint32_t QCPRDLAT;                                 /*!< Register Storage Period */
    uint32_t Reserved0[4];                                  /*!< Reserved */
    union {                                                 /*!< Clear interrupt register */
        __IO uint32_t INTCLR;                                 /*!< INTCLR    : type used for word access */
        __IO _INTCLR_bits INTCLR_bit;                         /*!< INTCLR_bit: structure used for bit access */
    };
} NT_QEP_TypeDef;

/******************************************************************************/
/*                      BOOTFLASH controller registers                        */
/******************************************************************************/

/*-- FMA: Address bootflash register -----------------------------------------*/

typedef struct {
    uint32_t ADDR                              :20;         /*!< Address for commands write and page erase */
    uint32_t Reserved0                         :12;         /*!< Reserved */
} _FMA_bits;

/* Bit field positions: */
#define FMA_ADDR_Pos                         0            /*!< Address for commands write and page erase */

/* Bit field masks: */
#define FMA_ADDR_Msk                         0x000FFFFF   /*!< Address for commands write and page erase */

/*-- FMC: Command register ---------------------------------------------------*/

typedef struct {
    uint32_t WRITE                             :1;          /*!< Bit writing in main block */
    uint32_t PAGE_ERASE                        :1;          /*!< Bit paged erase the main block */
    uint32_t FULL_ERASE                        :1;          /*!< Bit erase main block */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t WRITE_IFB                         :1;          /*!< Bit writing on information block */
    uint32_t PAGEERASE_IFB                     :1;          /*!< Bit erase page of information block */
    uint32_t MAGIC_KEY                         :26;         /*!< Code run command. For activate command in MAGIC_KEY write 0xA442 */
} _FMC_bits;

/* Bit field positions: */
#define FMC_WRITE_Pos                        0            /*!< Bit writing in main block */
#define FMC_PAGE_ERASE_Pos                   1            /*!< Bit paged erase the main block */
#define FMC_FULL_ERASE_Pos                   2            /*!< Bit erase main block */
#define FMC_WRITE_IFB_Pos                    4            /*!< Bit writing on information block */
#define FMC_PAGEERASE_IFB_Pos                5            /*!< Bit erase page of information block */
#define FMC_MAGIC_KEY_Pos                    6            /*!< Code run command. For activate command in MAGIC_KEY write 0xA442 */

/* Bit field masks: */
#define FMC_WRITE_Msk                        0x00000001   /*!< Bit writing in main block */
#define FMC_PAGE_ERASE_Msk                   0x00000002   /*!< Bit paged erase the main block */
#define FMC_FULL_ERASE_Msk                   0x00000004   /*!< Bit erase main block */
#define FMC_WRITE_IFB_Msk                    0x00000010   /*!< Bit writing on information block */
#define FMC_PAGEERASE_IFB_Msk                0x00000020   /*!< Bit erase page of information block */
#define FMC_MAGIC_KEY_Msk                    0xFFFFFFC0   /*!< Code run command. For activate command in MAGIC_KEY write 0xA442 */

/*-- FCIS: Status register ---------------------------------------------------*/

typedef struct {
    uint32_t OP_CMLT                           :1;          /*!< Completion flag operation */
    uint32_t OP_ERROR                          :1;          /*!< Flag write error, erase block write-protected or non-existent, or read from a non-existent block */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _FCIS_bits;

/* Bit field positions: */
#define FCIS_OP_CMLT_Pos                     0            /*!< Completion flag operation */
#define FCIS_OP_ERROR_Pos                    1            /*!< Flag write error, erase block write-protected or non-existent, or read from a non-existent block */

/* Bit field masks: */
#define FCIS_OP_CMLT_Msk                     0x00000001   /*!< Completion flag operation */
#define FCIS_OP_ERROR_Msk                    0x00000002   /*!< Flag write error, erase block write-protected or non-existent, or read from a non-existent block */

/*-- FCIM: Interrupt mask register -------------------------------------------*/

typedef struct {
    uint32_t MASK_OPCMLT                       :1;          /*!< Enables generation of an interrupt upon completion of a read or write, or erase */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _FCIM_bits;

/* Bit field positions: */
#define FCIM_MASK_OPCMLT_Pos                 0            /*!< Enables generation of an interrupt upon completion of a read or write, or erase */

/* Bit field masks: */
#define FCIM_MASK_OPCMLT_Msk                 0x00000001   /*!< Enables generation of an interrupt upon completion of a read or write, or erase */

/*-- FCIC: Command register --------------------------------------------------*/

typedef struct {
    uint32_t CLR_OPCMLT                        :1;          /*!< write in FLASH */
    uint32_t CLR_OPERROR                       :1;          /*!< Write 1 - cleared bit in register FCISTAT */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _FCIC_bits;

/* Bit field positions: */
#define FCIC_CLR_OPCMLT_Pos                  0            /*!< write in FLASH */
#define FCIC_CLR_OPERROR_Pos                 1            /*!< Write 1 - cleared bit in register FCISTAT */

/* Bit field masks: */
#define FCIC_CLR_OPCMLT_Msk                  0x00000001   /*!< write in FLASH */
#define FCIC_CLR_OPERROR_Msk                 0x00000002   /*!< Write 1 - cleared bit in register FCISTAT */

/*-- Register map for BOOTFLASH peripheral -----------------------------------*/

typedef struct {
    union {                                                 /*!< Address bootflash register */
        __IO uint32_t FMA;                                    /*!< FMA    : type used for word access */
        __IO _FMA_bits FMA_bit;                               /*!< FMA_bit: structure used for bit access */
    };
    __IO uint32_t FMD1;                                     /*!< Data words bootable flash register 1 */
    union {                                                 /*!< Command register */
        __O  uint32_t FMC;                                    /*!< FMC    : type used for word access */
        __O  _FMC_bits FMC_bit;                               /*!< FMC_bit: structure used for bit access */
    };
    union {                                                 /*!< Status register */
        __I  uint32_t FCIS;                                   /*!< FCIS    : type used for word access */
        __I  _FCIS_bits FCIS_bit;                             /*!< FCIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt mask register */
        __IO uint32_t FCIM;                                   /*!< FCIM    : type used for word access */
        __IO _FCIM_bits FCIM_bit;                             /*!< FCIM_bit: structure used for bit access */
    };
    union {                                                 /*!< Command register */
        __IO uint32_t FCIC;                                   /*!< FCIC    : type used for word access */
        __IO _FCIC_bits FCIC_bit;                             /*!< FCIC_bit: structure used for bit access */
    };
    uint32_t Reserved0[14];                                 /*!< Reserved */
    __IO uint32_t FMD2;                                     /*!< Data words bootable flash register 2 */
    __IO uint32_t FMD3;                                     /*!< Data words bootable flash register 3 */
    __IO uint32_t FMD4;                                     /*!< Data words bootable flash register 4 */
    uint32_t Reserved1[9];                                  /*!< Reserved */
    __IO uint32_t T_ACC;                                    /*!< Register the delay of setting addresses to read data from the flash memory */
    __IO uint32_t T_NVS;                                    /*!< Register signal delay lifting NVSTR after lifting signal PROG */
    __IO uint32_t T_NVH;                                    /*!< Register sets the release delay signal NVSTR after releasing signal PROG */
    __IO uint32_t T_RCV;                                    /*!< Register delay from releasing signal NVSTR to raise it to the next transaction */
    __IO uint32_t T_PGS;                                    /*!< Register delay lifting signal YE after lifting signal NVSTR */
    __IO uint32_t T_PROG;                                   /*!< Register YE signal duration in recording transactions */
    __IO uint32_t T_PGH;                                    /*!< Register delay signal NVSTR after releasing signal YE */
    __IO uint32_t T_ERASE;                                  /*!< Register duration of the signal in transactions ERASE erasure */
    __IO uint32_t T_ME;                                     /*!< Register specifies the duration of the signal in transactions ERASE erasure */
    __IO uint32_t T_NVH1;                                   /*!< Register specifies the duration of the signal in transactions ERASE erasure */
} NT_BOOTFLASH_TypeDef;

/******************************************************************************/
/*                         CMP controller registers                           */
/******************************************************************************/

/*-- ACMIS: masked interrupt status register ---------------------------------*/

typedef struct {
    uint32_t IN1                               :1;          /*!< reset interrupt status 1 */
    uint32_t IN2                               :1;          /*!< reset interrupt status 2 */
    uint32_t IN3                               :1;          /*!< reset interrupt status 3 */
    uint32_t Reserved0                         :13;         /*!< Reserved */
    uint32_t INT1                              :1;          /*!< reset get interrupt 1 */
    uint32_t INT2                              :1;          /*!< reset get interrupt 2 */
    uint32_t INT3                              :1;          /*!< reset get interrupt 3 */
    uint32_t Reserved1                         :13;         /*!< Reserved */
} _ACMIS_bits;

/* Bit field positions: */
#define ACMIS_IN1_Pos                        0            /*!< reset interrupt status 1 */
#define ACMIS_IN2_Pos                        1            /*!< reset interrupt status 2 */
#define ACMIS_IN3_Pos                        2            /*!< reset interrupt status 3 */
#define ACMIS_INT1_Pos                       16           /*!< reset get interrupt 1 */
#define ACMIS_INT2_Pos                       17           /*!< reset get interrupt 2 */
#define ACMIS_INT3_Pos                       18           /*!< reset get interrupt 3 */

/* Bit field masks: */
#define ACMIS_IN1_Msk                        0x00000001   /*!< reset interrupt status 1 */
#define ACMIS_IN2_Msk                        0x00000002   /*!< reset interrupt status 2 */
#define ACMIS_IN3_Msk                        0x00000004   /*!< reset interrupt status 3 */
#define ACMIS_INT1_Msk                       0x00010000   /*!< reset get interrupt 1 */
#define ACMIS_INT2_Msk                       0x00020000   /*!< reset get interrupt 2 */
#define ACMIS_INT3_Msk                       0x00040000   /*!< reset get interrupt 3 */

/*-- ACRIS: Interrupt Status Register ----------------------------------------*/

typedef struct {
    uint32_t IN1                               :1;          /*!< set interrupt status 1 */
    uint32_t IN2                               :1;          /*!< set interrupt status 2 */
    uint32_t IN3                               :1;          /*!< set interrupt status 3 */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _ACRIS_bits;

/* Bit field positions: */
#define ACRIS_IN1_Pos                        0            /*!< set interrupt status 1 */
#define ACRIS_IN2_Pos                        1            /*!< set interrupt status 2 */
#define ACRIS_IN3_Pos                        2            /*!< set interrupt status 3 */

/* Bit field masks: */
#define ACRIS_IN1_Msk                        0x00000001   /*!< set interrupt status 1 */
#define ACRIS_IN2_Msk                        0x00000002   /*!< set interrupt status 2 */
#define ACRIS_IN3_Msk                        0x00000004   /*!< set interrupt status 3 */

/*-- ACINTEN: Interrupt mask register ----------------------------------------*/

typedef struct {
    uint32_t IN1                               :1;          /*!< the mask interrupt 1 */
    uint32_t IN2                               :1;          /*!< the mask interrupt 2 */
    uint32_t IN3                               :1;          /*!< the mask interrupt 3 */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _ACINTEN_bits;

/* Bit field positions: */
#define ACINTEN_IN1_Pos                      0            /*!< the mask interrupt 1 */
#define ACINTEN_IN2_Pos                      1            /*!< the mask interrupt 2 */
#define ACINTEN_IN3_Pos                      2            /*!< the mask interrupt 3 */

/* Bit field masks: */
#define ACINTEN_IN1_Msk                      0x00000001   /*!< the mask interrupt 1 */
#define ACINTEN_IN2_Msk                      0x00000002   /*!< the mask interrupt 2 */
#define ACINTEN_IN3_Msk                      0x00000004   /*!< the mask interrupt 3 */

/*-- ACREFCTL1: Reference voltage control register 1 -------------------------*/

typedef struct {
    uint32_t VREF                              :4;          /*!< reference voltage */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t RNG                               :1;          /*!< range of the DAC */
    uint32_t EN                                :1;          /*!< power to the built-in DAC */
    uint32_t Reserved1                         :22;         /*!< Reserved */
} _ACREFCTL1_bits;

/* Bit field positions: */
#define ACREFCTL1_VREF_Pos                   0            /*!< reference voltage */
#define ACREFCTL1_RNG_Pos                    8            /*!< range of the DAC */
#define ACREFCTL1_EN_Pos                     9            /*!< power to the built-in DAC */

/* Bit field masks: */
#define ACREFCTL1_VREF_Msk                   0x0000000F   /*!< reference voltage */
#define ACREFCTL1_RNG_Msk                    0x00000100   /*!< range of the DAC */
#define ACREFCTL1_EN_Msk                     0x00000200   /*!< power to the built-in DAC */

/*-- ACREFCTL2: Reference voltage control register 2 -------------------------*/

typedef struct {
    uint32_t VREF                              :4;          /*!< reference voltage */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t RNG                               :1;          /*!< range of the DAC */
    uint32_t EN                                :1;          /*!< power to the built-in DAC */
    uint32_t Reserved1                         :22;         /*!< Reserved */
} _ACREFCTL2_bits;

/* Bit field positions: */
#define ACREFCTL2_VREF_Pos                   0            /*!< reference voltage */
#define ACREFCTL2_RNG_Pos                    8            /*!< range of the DAC */
#define ACREFCTL2_EN_Pos                     9            /*!< power to the built-in DAC */

/* Bit field masks: */
#define ACREFCTL2_VREF_Msk                   0x0000000F   /*!< reference voltage */
#define ACREFCTL2_RNG_Msk                    0x00000100   /*!< range of the DAC */
#define ACREFCTL2_EN_Msk                     0x00000200   /*!< power to the built-in DAC */

/*-- ACREFCTL3: Reference voltage control register 3 -------------------------*/

typedef struct {
    uint32_t VREF                              :4;          /*!< reference voltage */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t RNG                               :1;          /*!< range of the DAC */
    uint32_t EN                                :1;          /*!< power to the built-in DAC */
    uint32_t Reserved1                         :22;         /*!< Reserved */
} _ACREFCTL3_bits;

/* Bit field positions: */
#define ACREFCTL3_VREF_Pos                   0            /*!< reference voltage */
#define ACREFCTL3_RNG_Pos                    8            /*!< range of the DAC */
#define ACREFCTL3_EN_Pos                     9            /*!< power to the built-in DAC */

/* Bit field masks: */
#define ACREFCTL3_VREF_Msk                   0x0000000F   /*!< reference voltage */
#define ACREFCTL3_RNG_Msk                    0x00000100   /*!< range of the DAC */
#define ACREFCTL3_EN_Msk                     0x00000200   /*!< power to the built-in DAC */

/*-- ACSSTAT1: Status register comparator1 -----------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t OVAL                              :1;          /*!< output value of the comparator1 */
    uint32_t Reserved1                         :30;         /*!< Reserved */
} _ACSSTAT1_bits;

/* Bit field positions: */
#define ACSSTAT1_OVAL_Pos                    1            /*!< output value of the comparator1 */

/* Bit field masks: */
#define ACSSTAT1_OVAL_Msk                    0x00000002   /*!< output value of the comparator1 */

/*-- ACCTL1: Control Register comparator1 ------------------------------------*/

typedef struct {
    uint32_t CEN                               :1;          /*!< enable compare 1 */
    uint32_t CINV                              :1;          /*!< polarity of output signal */
    uint32_t ISEN                              :2;          /*!< Event interrupt */
    uint32_t ISVAL                             :1;          /*!< interrupt on a low level */
    uint32_t TSEN                              :2;          /*!< ADC trigger event */
    uint32_t TSVAL                             :1;          /*!< ADC start at a low level */
    uint32_t ASRCP                             :2;          /*!< source to VIN + */
    uint32_t TOEN                              :1;          /*!< ADC start generating events */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _ACCTL1_bits;

/* Bit field positions: */
#define ACCTL1_CEN_Pos                       0            /*!< enable compare 1 */
#define ACCTL1_CINV_Pos                      1            /*!< polarity of output signal */
#define ACCTL1_ISEN_Pos                      2            /*!< Event interrupt */
#define ACCTL1_ISVAL_Pos                     4            /*!< interrupt on a low level */
#define ACCTL1_TSEN_Pos                      5            /*!< ADC trigger event */
#define ACCTL1_TSVAL_Pos                     7            /*!< ADC start at a low level */
#define ACCTL1_ASRCP_Pos                     8            /*!< source to VIN + */
#define ACCTL1_TOEN_Pos                      10           /*!< ADC start generating events */

/* Bit field masks: */
#define ACCTL1_CEN_Msk                       0x00000001   /*!< enable compare 1 */
#define ACCTL1_CINV_Msk                      0x00000002   /*!< polarity of output signal */
#define ACCTL1_ISEN_Msk                      0x0000000C   /*!< Event interrupt */
#define ACCTL1_ISVAL_Msk                     0x00000010   /*!< interrupt on a low level */
#define ACCTL1_TSEN_Msk                      0x00000060   /*!< ADC trigger event */
#define ACCTL1_TSVAL_Msk                     0x00000080   /*!< ADC start at a low level */
#define ACCTL1_ASRCP_Msk                     0x00000300   /*!< source to VIN + */
#define ACCTL1_TOEN_Msk                      0x00000400   /*!< ADC start generating events */

/*-- ACSSTAT2: Status register comparator2 -----------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t OVAL                              :1;          /*!< output value of the comparator2 */
    uint32_t Reserved1                         :30;         /*!< Reserved */
} _ACSSTAT2_bits;

/* Bit field positions: */
#define ACSSTAT2_OVAL_Pos                    1            /*!< output value of the comparator2 */

/* Bit field masks: */
#define ACSSTAT2_OVAL_Msk                    0x00000002   /*!< output value of the comparator2 */

/*-- ACCTL2: Control Register comparator2 ------------------------------------*/

typedef struct {
    uint32_t CEN                               :1;          /*!< enable compare 2 */
    uint32_t CINV                              :1;          /*!< polarity of output signal */
    uint32_t ISEN                              :2;          /*!< Event interrupt */
    uint32_t ISVAL                             :1;          /*!< interrupt on a low level */
    uint32_t TSEN                              :2;          /*!< ADC trigger event */
    uint32_t TSVAL                             :1;          /*!< ADC start at a low level */
    uint32_t ASRCP                             :2;          /*!< source to VIN + */
    uint32_t TOEN                              :1;          /*!< ADC start generating events */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _ACCTL2_bits;

/* Bit field positions: */
#define ACCTL2_CEN_Pos                       0            /*!< enable compare 2 */
#define ACCTL2_CINV_Pos                      1            /*!< polarity of output signal */
#define ACCTL2_ISEN_Pos                      2            /*!< Event interrupt */
#define ACCTL2_ISVAL_Pos                     4            /*!< interrupt on a low level */
#define ACCTL2_TSEN_Pos                      5            /*!< ADC trigger event */
#define ACCTL2_TSVAL_Pos                     7            /*!< ADC start at a low level */
#define ACCTL2_ASRCP_Pos                     8            /*!< source to VIN + */
#define ACCTL2_TOEN_Pos                      10           /*!< ADC start generating events */

/* Bit field masks: */
#define ACCTL2_CEN_Msk                       0x00000001   /*!< enable compare 2 */
#define ACCTL2_CINV_Msk                      0x00000002   /*!< polarity of output signal */
#define ACCTL2_ISEN_Msk                      0x0000000C   /*!< Event interrupt */
#define ACCTL2_ISVAL_Msk                     0x00000010   /*!< interrupt on a low level */
#define ACCTL2_TSEN_Msk                      0x00000060   /*!< ADC trigger event */
#define ACCTL2_TSVAL_Msk                     0x00000080   /*!< ADC start at a low level */
#define ACCTL2_ASRCP_Msk                     0x00000300   /*!< source to VIN + */
#define ACCTL2_TOEN_Msk                      0x00000400   /*!< ADC start generating events */

/*-- ACSTAT3: Status register comparator3 ------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t OVAL                              :1;          /*!< output value of the comparator3 */
    uint32_t Reserved1                         :30;         /*!< Reserved */
} _ACSTAT3_bits;

/* Bit field positions: */
#define ACSTAT3_OVAL_Pos                     1            /*!< output value of the comparator3 */

/* Bit field masks: */
#define ACSTAT3_OVAL_Msk                     0x00000002   /*!< output value of the comparator3 */

/*-- ACCTL3: Control Register comparator3 ------------------------------------*/

typedef struct {
    uint32_t CEN                               :1;          /*!< enable compare 3 */
    uint32_t CINV                              :1;          /*!< polarity of output signal */
    uint32_t ISEN                              :2;          /*!< Event interrupt */
    uint32_t ISVAL                             :1;          /*!< interrupt on a low level */
    uint32_t TSEN                              :2;          /*!< ADC trigger event */
    uint32_t TSVAL                             :1;          /*!< ADC start at a low level */
    uint32_t ASRCP                             :2;          /*!< source to VIN + */
    uint32_t TOEN                              :1;          /*!< ADC start generating events */
    uint32_t Reserved0                         :21;         /*!< Reserved */
} _ACCTL3_bits;

/* Bit field positions: */
#define ACCTL3_CEN_Pos                       0            /*!< enable compare 3 */
#define ACCTL3_CINV_Pos                      1            /*!< polarity of output signal */
#define ACCTL3_ISEN_Pos                      2            /*!< Event interrupt */
#define ACCTL3_ISVAL_Pos                     4            /*!< interrupt on a low level */
#define ACCTL3_TSEN_Pos                      5            /*!< ADC trigger event */
#define ACCTL3_TSVAL_Pos                     7            /*!< ADC start at a low level */
#define ACCTL3_ASRCP_Pos                     8            /*!< source to VIN + */
#define ACCTL3_TOEN_Pos                      10           /*!< ADC start generating events */

/* Bit field masks: */
#define ACCTL3_CEN_Msk                       0x00000001   /*!< enable compare 3 */
#define ACCTL3_CINV_Msk                      0x00000002   /*!< polarity of output signal */
#define ACCTL3_ISEN_Msk                      0x0000000C   /*!< Event interrupt */
#define ACCTL3_ISVAL_Msk                     0x00000010   /*!< interrupt on a low level */
#define ACCTL3_TSEN_Msk                      0x00000060   /*!< ADC trigger event */
#define ACCTL3_TSVAL_Msk                     0x00000080   /*!< ADC start at a low level */
#define ACCTL3_ASRCP_Msk                     0x00000300   /*!< source to VIN + */
#define ACCTL3_TOEN_Msk                      0x00000400   /*!< ADC start generating events */

/*-- POWER: Power analog circuits register -----------------------------------*/

typedef struct {
    uint32_t PWU                               :1;          /*!< Enable power analog circuits */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _POWER_bits;

/* Bit field positions: */
#define POWER_PWU_Pos                        0            /*!< Enable power analog circuits */

/* Bit field masks: */
#define POWER_PWU_Msk                        0x00000001   /*!< Enable power analog circuits */

/*-- Register map for CMP peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< masked interrupt status register */
        __IO uint32_t ACMIS;                                  /*!< ACMIS    : type used for word access */
        __IO _ACMIS_bits ACMIS_bit;                           /*!< ACMIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt Status Register */
        __I  uint32_t ACRIS;                                  /*!< ACRIS    : type used for word access */
        __I  _ACRIS_bits ACRIS_bit;                           /*!< ACRIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt mask register */
        __IO uint32_t ACINTEN;                                /*!< ACINTEN    : type used for word access */
        __IO _ACINTEN_bits ACINTEN_bit;                       /*!< ACINTEN_bit: structure used for bit access */
    };
    union {                                                 /*!< Reference voltage control register 1 */
        __IO uint32_t ACREFCTL1;                              /*!< ACREFCTL1    : type used for word access */
        __IO _ACREFCTL1_bits ACREFCTL1_bit;                   /*!< ACREFCTL1_bit: structure used for bit access */
    };
    union {                                                 /*!< Reference voltage control register 2 */
        __IO uint32_t ACREFCTL2;                              /*!< ACREFCTL2    : type used for word access */
        __IO _ACREFCTL2_bits ACREFCTL2_bit;                   /*!< ACREFCTL2_bit: structure used for bit access */
    };
    union {                                                 /*!< Reference voltage control register 3 */
        __IO uint32_t ACREFCTL3;                              /*!< ACREFCTL3    : type used for word access */
        __IO _ACREFCTL3_bits ACREFCTL3_bit;                   /*!< ACREFCTL3_bit: structure used for bit access */
    };
    uint32_t Reserved0[2];                                  /*!< Reserved */
    union {                                                 /*!< Status register comparator1 */
        __I  uint32_t ACSSTAT1;                               /*!< ACSSTAT1    : type used for word access */
        __I  _ACSSTAT1_bits ACSSTAT1_bit;                     /*!< ACSSTAT1_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register comparator1 */
        __IO uint32_t ACCTL1;                                 /*!< ACCTL1    : type used for word access */
        __IO _ACCTL1_bits ACCTL1_bit;                         /*!< ACCTL1_bit: structure used for bit access */
    };
    uint32_t Reserved1[6];                                  /*!< Reserved */
    union {                                                 /*!< Status register comparator2 */
        __I  uint32_t ACSSTAT2;                               /*!< ACSSTAT2    : type used for word access */
        __I  _ACSSTAT2_bits ACSSTAT2_bit;                     /*!< ACSSTAT2_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register comparator2 */
        __IO uint32_t ACCTL2;                                 /*!< ACCTL2    : type used for word access */
        __IO _ACCTL2_bits ACCTL2_bit;                         /*!< ACCTL2_bit: structure used for bit access */
    };
    uint32_t Reserved2[6];                                  /*!< Reserved */
    union {                                                 /*!< Status register comparator3 */
        __I  uint32_t ACSTAT3;                                /*!< ACSTAT3    : type used for word access */
        __I  _ACSTAT3_bits ACSTAT3_bit;                       /*!< ACSTAT3_bit: structure used for bit access */
    };
    union {                                                 /*!< Control Register comparator3 */
        __IO uint32_t ACCTL3;                                 /*!< ACCTL3    : type used for word access */
        __IO _ACCTL3_bits ACCTL3_bit;                         /*!< ACCTL3_bit: structure used for bit access */
    };
    uint32_t Reserved3[5];                                  /*!< Reserved */
    union {                                                 /*!< Power analog circuits register */
        __IO uint32_t POWER;                                  /*!< POWER    : type used for word access */
        __IO _POWER_bits POWER_bit;                           /*!< POWER_bit: structure used for bit access */
    };
} NT_CMP_TypeDef;

/******************************************************************************/
/*                         SPI controller registers                           */
/******************************************************************************/

/*-- CR0: Control register 0 -------------------------------------------------*/

typedef struct {
    uint32_t DSS                               :4;          /*!< Size of data */
    uint32_t FRF                               :2;          /*!< Select protocol */
    uint32_t SPO                               :1;          /*!< Polarity SSPCLKOUT */
    uint32_t SPH                               :1;          /*!< Phase SSPCLKOUT */
    uint32_t SCR                               :8;          /*!< Value divider */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _CR0_bits;

/* Bit field positions: */
#define CR0_DSS_Pos                          0            /*!< Size of data */
#define CR0_FRF_Pos                          4            /*!< Select protocol */
#define CR0_SPO_Pos                          6            /*!< Polarity SSPCLKOUT */
#define CR0_SPH_Pos                          7            /*!< Phase SSPCLKOUT */
#define CR0_SCR_Pos                          8            /*!< Value divider */

/* Bit field masks: */
#define CR0_DSS_Msk                          0x0000000F   /*!< Size of data */
#define CR0_FRF_Msk                          0x00000030   /*!< Select protocol */
#define CR0_SPO_Msk                          0x00000040   /*!< Polarity SSPCLKOUT */
#define CR0_SPH_Msk                          0x00000080   /*!< Phase SSPCLKOUT */
#define CR0_SCR_Msk                          0x0000FF00   /*!< Value divider */

/*-- CR1: Control register 1 -------------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SSE                               :1;          /*!< Enable transceiver */
    uint32_t MS                                :1;          /*!< Select mode */
    uint32_t SOD                               :1;          /*!< Disable bit data */
    uint32_t Reserved1                         :28;         /*!< Reserved */
} _CR1_bits;

/* Bit field positions: */
#define CR1_SSE_Pos                          1            /*!< Enable transceiver */
#define CR1_MS_Pos                           2            /*!< Select mode */
#define CR1_SOD_Pos                          3            /*!< Disable bit data */

/* Bit field masks: */
#define CR1_SSE_Msk                          0x00000002   /*!< Enable transceiver */
#define CR1_MS_Msk                           0x00000004   /*!< Select mode */
#define CR1_SOD_Msk                          0x00000008   /*!< Disable bit data */

/*-- SPI_DR: Data register ---------------------------------------------------*/

typedef struct {
    uint32_t DATA                              :16;
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _SPI_DR_bits;

/* Bit field positions: */
#define SPI_DR_DATA_Pos                      0

/* Bit field masks: */
#define SPI_DR_DATA_Msk                      0x0000FFFF

/*-- SR: State register ------------------------------------------------------*/

typedef struct {
    uint32_t TFE                               :1;          /*!< FIFO buffer empty flag transmitter */
    uint32_t TNF                               :1;          /*!< Indicator the transmitter FIFO buffer is not full */
    uint32_t RNE                               :1;          /*!< Indicate not empty reseive buffer */
    uint32_t RFF                               :1;          /*!< Indicate empty receive buffer */
    uint32_t BSY                               :1;          /*!< Activity flag */
    uint32_t Reserved0                         :27;         /*!< Reserved */
} _SR_bits;

/* Bit field positions: */
#define SR_TFE_Pos                           0            /*!< FIFO buffer empty flag transmitter */
#define SR_TNF_Pos                           1            /*!< Indicator the transmitter FIFO buffer is not full */
#define SR_RNE_Pos                           2            /*!< Indicate not empty reseive buffer */
#define SR_RFF_Pos                           3            /*!< Indicate empty receive buffer */
#define SR_BSY_Pos                           4            /*!< Activity flag */

/* Bit field masks: */
#define SR_TFE_Msk                           0x00000001   /*!< FIFO buffer empty flag transmitter */
#define SR_TNF_Msk                           0x00000002   /*!< Indicator the transmitter FIFO buffer is not full */
#define SR_RNE_Msk                           0x00000004   /*!< Indicate not empty reseive buffer */
#define SR_RFF_Msk                           0x00000008   /*!< Indicate empty receive buffer */
#define SR_BSY_Msk                           0x00000010   /*!< Activity flag */

/*-- CPSR: Clock division factor register ------------------------------------*/

typedef struct {
    uint32_t CPSDVSR                           :8;          /*!< Clock division factor. Bit0 always 0 */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _CPSR_bits;

/* Bit field positions: */
#define CPSR_CPSDVSR_Pos                     0            /*!< Clock division factor. Bit0 always 0 */

/* Bit field masks: */
#define CPSR_CPSDVSR_Msk                     0x000000FF   /*!< Clock division factor. Bit0 always 0 */

/*-- SPI_IMSC: Mask interrupt register ---------------------------------------*/

typedef struct {
    uint32_t RORIM                             :1;          /*!< Interrupt mask bit SSPRORINTR buffer overflow receiver */
    uint32_t RTIM                              :1;          /*!< Interrupt mask bit SSPRTINTR timeout receiver */
    uint32_t RXIM                              :1;          /*!< SSPRXINTR interrupt mask bit to fill 50% or less of the receiver FIFO buffer */
    uint32_t TXIM                              :1;          /*!< SSPTXINTR interrupt mask bit to fill 50% or less of the FIFO buffer of the transmitter */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _SPI_IMSC_bits;

/* Bit field positions: */
#define SPI_IMSC_RORIM_Pos                   0            /*!< Interrupt mask bit SSPRORINTR buffer overflow receiver */
#define SPI_IMSC_RTIM_Pos                    1            /*!< Interrupt mask bit SSPRTINTR timeout receiver */
#define SPI_IMSC_RXIM_Pos                    2            /*!< SSPRXINTR interrupt mask bit to fill 50% or less of the receiver FIFO buffer */
#define SPI_IMSC_TXIM_Pos                    3            /*!< SSPTXINTR interrupt mask bit to fill 50% or less of the FIFO buffer of the transmitter */

/* Bit field masks: */
#define SPI_IMSC_RORIM_Msk                   0x00000001   /*!< Interrupt mask bit SSPRORINTR buffer overflow receiver */
#define SPI_IMSC_RTIM_Msk                    0x00000002   /*!< Interrupt mask bit SSPRTINTR timeout receiver */
#define SPI_IMSC_RXIM_Msk                    0x00000004   /*!< SSPRXINTR interrupt mask bit to fill 50% or less of the receiver FIFO buffer */
#define SPI_IMSC_TXIM_Msk                    0x00000008   /*!< SSPTXINTR interrupt mask bit to fill 50% or less of the FIFO buffer of the transmitter */

/*-- SPI_RIS: Status register interrupt without mask -------------------------*/

typedef struct {
    uint32_t RORRIS                            :1;          /*!< Interrupt status before masking SSPRORINTR */
    uint32_t RTRIS                             :1;          /*!< Interrupt status before masking SSPRTINTR */
    uint32_t RXRIS                             :1;          /*!< Interrupt status before masking SSPRXINTR */
    uint32_t TXRIS                             :1;          /*!< Interrupt status before masking SSPTXINTR */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _SPI_RIS_bits;

/* Bit field positions: */
#define SPI_RIS_RORRIS_Pos                   0            /*!< Interrupt status before masking SSPRORINTR */
#define SPI_RIS_RTRIS_Pos                    1            /*!< Interrupt status before masking SSPRTINTR */
#define SPI_RIS_RXRIS_Pos                    2            /*!< Interrupt status before masking SSPRXINTR */
#define SPI_RIS_TXRIS_Pos                    3            /*!< Interrupt status before masking SSPTXINTR */

/* Bit field masks: */
#define SPI_RIS_RORRIS_Msk                   0x00000001   /*!< Interrupt status before masking SSPRORINTR */
#define SPI_RIS_RTRIS_Msk                    0x00000002   /*!< Interrupt status before masking SSPRTINTR */
#define SPI_RIS_RXRIS_Msk                    0x00000004   /*!< Interrupt status before masking SSPRXINTR */
#define SPI_RIS_TXRIS_Msk                    0x00000008   /*!< Interrupt status before masking SSPTXINTR */

/*-- SPI_MIS: Status register interrupt masking account ----------------------*/

typedef struct {
    uint32_t RORRIS                            :1;          /*!< Masked interrupt status SSPRORINTR */
    uint32_t RTRIS                             :1;          /*!< Masked interrupt status SSPRTINTR */
    uint32_t RXRIS                             :1;          /*!< Masked interrupt status SSPRXINTR */
    uint32_t TXRIS                             :1;          /*!< Masked interrupt status SSPTXINTR */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _SPI_MIS_bits;

/* Bit field positions: */
#define SPI_MIS_RORRIS_Pos                   0            /*!< Masked interrupt status SSPRORINTR */
#define SPI_MIS_RTRIS_Pos                    1            /*!< Masked interrupt status SSPRTINTR */
#define SPI_MIS_RXRIS_Pos                    2            /*!< Masked interrupt status SSPRXINTR */
#define SPI_MIS_TXRIS_Pos                    3            /*!< Masked interrupt status SSPTXINTR */

/* Bit field masks: */
#define SPI_MIS_RORRIS_Msk                   0x00000001   /*!< Masked interrupt status SSPRORINTR */
#define SPI_MIS_RTRIS_Msk                    0x00000002   /*!< Masked interrupt status SSPRTINTR */
#define SPI_MIS_RXRIS_Msk                    0x00000004   /*!< Masked interrupt status SSPRXINTR */
#define SPI_MIS_TXRIS_Msk                    0x00000008   /*!< Masked interrupt status SSPTXINTR */

/*-- SPI_ICR: Register reset interrupt ---------------------------------------*/

typedef struct {
    uint32_t RORIC                             :1;          /*!< Reset interrupt SSPRORINTR */
    uint32_t RTIC                              :1;          /*!< Reset interrupt SSPRTINTR */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _SPI_ICR_bits;

/* Bit field positions: */
#define SPI_ICR_RORIC_Pos                    0            /*!< Reset interrupt SSPRORINTR */
#define SPI_ICR_RTIC_Pos                     1            /*!< Reset interrupt SSPRTINTR */

/* Bit field masks: */
#define SPI_ICR_RORIC_Msk                    0x00000001   /*!< Reset interrupt SSPRORINTR */
#define SPI_ICR_RTIC_Msk                     0x00000002   /*!< Reset interrupt SSPRTINTR */

/*-- SPI_DMACR: Control register DMA -----------------------------------------*/

typedef struct {
    uint32_t RXDMAE                            :1;          /*!< DMA enable bit at reception */
    uint32_t TXDMAE                            :1;          /*!< DMA enable bit transmission */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _SPI_DMACR_bits;

/* Bit field positions: */
#define SPI_DMACR_RXDMAE_Pos                 0            /*!< DMA enable bit at reception */
#define SPI_DMACR_TXDMAE_Pos                 1            /*!< DMA enable bit transmission */

/* Bit field masks: */
#define SPI_DMACR_RXDMAE_Msk                 0x00000001   /*!< DMA enable bit at reception */
#define SPI_DMACR_TXDMAE_Msk                 0x00000002   /*!< DMA enable bit transmission */

/*-- Register map for SPI peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Control register 0 */
        __IO uint32_t CR0;                                    /*!< CR0    : type used for word access */
        __IO _CR0_bits CR0_bit;                               /*!< CR0_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register 1 */
        __IO uint32_t CR1;                                    /*!< CR1    : type used for word access */
        __IO _CR1_bits CR1_bit;                               /*!< CR1_bit: structure used for bit access */
    };
    union {                                                 /*!< Data register */
        __IO uint32_t SPI_DR;                                 /*!< SPI_DR    : type used for word access */
        __IO _SPI_DR_bits SPI_DR_bit;                         /*!< SPI_DR_bit: structure used for bit access */
    };
    union {                                                 /*!< State register */
        __I  uint32_t SR;                                     /*!< SR    : type used for word access */
        __I  _SR_bits SR_bit;                                 /*!< SR_bit: structure used for bit access */
    };
    union {                                                 /*!< Clock division factor register */
        __IO uint32_t CPSR;                                   /*!< CPSR    : type used for word access */
        __IO _CPSR_bits CPSR_bit;                             /*!< CPSR_bit: structure used for bit access */
    };
    union {                                                 /*!< Mask interrupt register */
        __IO uint32_t SPI_IMSC;                               /*!< SPI_IMSC    : type used for word access */
        __IO _SPI_IMSC_bits SPI_IMSC_bit;                     /*!< SPI_IMSC_bit: structure used for bit access */
    };
    union {                                                 /*!< Status register interrupt without mask */
        __I  uint32_t SPI_RIS;                                /*!< SPI_RIS    : type used for word access */
        __I  _SPI_RIS_bits SPI_RIS_bit;                       /*!< SPI_RIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Status register interrupt masking account */
        __I  uint32_t SPI_MIS;                                /*!< SPI_MIS    : type used for word access */
        __I  _SPI_MIS_bits SPI_MIS_bit;                       /*!< SPI_MIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Register reset interrupt */
        __O  uint32_t SPI_ICR;                                /*!< SPI_ICR    : type used for word access */
        __O  _SPI_ICR_bits SPI_ICR_bit;                       /*!< SPI_ICR_bit: structure used for bit access */
    };
    union {                                                 /*!< Control register DMA */
        __IO uint32_t SPI_DMACR;                              /*!< SPI_DMACR    : type used for word access */
        __IO _SPI_DMACR_bits SPI_DMACR_bit;                   /*!< SPI_DMACR_bit: structure used for bit access */
    };
} NT_SPI_TypeDef;

/******************************************************************************/
/*                      USERFLASH controller registers                        */
/******************************************************************************/

/*-- UFMA: Address userflash register ----------------------------------------*/

typedef struct {
    uint32_t ADDR                              :16;         /*!< Address for commands write and page erase */
    uint32_t Reserved0                         :16;         /*!< Reserved */
} _UFMA_bits;

/* Bit field positions: */
#define UFMA_ADDR_Pos                        0            /*!< Address for commands write and page erase */

/* Bit field masks: */
#define UFMA_ADDR_Msk                        0x0000FFFF   /*!< Address for commands write and page erase */

/*-- UFMD: Data byte user flash register -------------------------------------*/

typedef struct {
    uint32_t DATA                              :8;          /*!< User flash data */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _UFMD_bits;

/* Bit field positions: */
#define UFMD_DATA_Pos                        0            /*!< User flash data */

/* Bit field masks: */
#define UFMD_DATA_Msk                        0x000000FF   /*!< User flash data */

/*-- UFMC: Command register --------------------------------------------------*/

typedef struct {
    uint32_t WRITE                             :1;          /*!< Bit writing in main block */
    uint32_t PAGE_ERASE                        :1;          /*!< Bit paged erase the main block */
    uint32_t FULL_ERASE                        :1;          /*!< Bit erase main block */
    uint32_t READ                              :1;
    uint32_t WRITE_IFB                         :1;          /*!< Bit writing on information block */
    uint32_t PAGEERASE_IFB                     :1;          /*!< Bit erase page of information block */
    uint32_t READ_IFB                          :1;
    uint32_t Reserved0                         :9;          /*!< Reserved */
    uint32_t MAGIC_KEY                         :1;          /*!< Code run command. For activate command in MAGIC_KEY write 0xA457 */
    uint32_t FLASH_ACCESS_KEY                  :15;         /*!< Code run command. For activate command in MAGIC_KEY write 0xA456 */
} _UFMC_bits;

/* Bit field positions: */
#define UFMC_WRITE_Pos                       0            /*!< Bit writing in main block */
#define UFMC_PAGE_ERASE_Pos                  1            /*!< Bit paged erase the main block */
#define UFMC_FULL_ERASE_Pos                  2            /*!< Bit erase main block */
#define UFMC_READ_Pos                        3
#define UFMC_WRITE_IFB_Pos                   4            /*!< Bit writing on information block */
#define UFMC_PAGEERASE_IFB_Pos               5            /*!< Bit erase page of information block */
#define UFMC_READ_IFB_Pos                    6
#define UFMC_MAGIC_KEY_Pos                   16           /*!< Code run command. For activate command in MAGIC_KEY write 0xA457 */
#define UFMC_FLASH_ACCESS_KEY_Pos            17           /*!< Code run command. For activate command in MAGIC_KEY write 0xA456 */

/* Bit field masks: */
#define UFMC_WRITE_Msk                       0x00000001   /*!< Bit writing in main block */
#define UFMC_PAGE_ERASE_Msk                  0x00000002   /*!< Bit paged erase the main block */
#define UFMC_FULL_ERASE_Msk                  0x00000004   /*!< Bit erase main block */
#define UFMC_READ_Msk                        0x00000008
#define UFMC_WRITE_IFB_Msk                   0x00000010   /*!< Bit writing on information block */
#define UFMC_PAGEERASE_IFB_Msk               0x00000020   /*!< Bit erase page of information block */
#define UFMC_READ_IFB_Msk                    0x00000040
#define UFMC_MAGIC_KEY_Msk                   0x00010000   /*!< Code run command. For activate command in MAGIC_KEY write 0xA457 */
#define UFMC_FLASH_ACCESS_KEY_Msk            0xFFFE0000   /*!< Code run command. For activate command in MAGIC_KEY write 0xA456 */

/*-- UFCIS: Status register --------------------------------------------------*/

typedef struct {
    uint32_t OP_CMLT                           :1;          /*!< Completion flag operation */
    uint32_t OP_ERROR                          :1;          /*!< Flag write error, erase block write-protected or non-existent, or read from a non-existent block */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _UFCIS_bits;

/* Bit field positions: */
#define UFCIS_OP_CMLT_Pos                    0            /*!< Completion flag operation */
#define UFCIS_OP_ERROR_Pos                   1            /*!< Flag write error, erase block write-protected or non-existent, or read from a non-existent block */

/* Bit field masks: */
#define UFCIS_OP_CMLT_Msk                    0x00000001   /*!< Completion flag operation */
#define UFCIS_OP_ERROR_Msk                   0x00000002   /*!< Flag write error, erase block write-protected or non-existent, or read from a non-existent block */

/*-- UFCIM: Interrupt mask register ------------------------------------------*/

typedef struct {
    uint32_t MASK_OPCMLT                       :1;          /*!< Enables generation of an interrupt upon completion of a read or write, or erase */
    uint32_t Reserved0                         :31;         /*!< Reserved */
} _UFCIM_bits;

/* Bit field positions: */
#define UFCIM_MASK_OPCMLT_Pos                0            /*!< Enables generation of an interrupt upon completion of a read or write, or erase */

/* Bit field masks: */
#define UFCIM_MASK_OPCMLT_Msk                0x00000001   /*!< Enables generation of an interrupt upon completion of a read or write, or erase */

/*-- UFCIC: Command register -------------------------------------------------*/

typedef struct {
    uint32_t CLR_OPCMLT                        :1;          /*!< write in FLASH */
    uint32_t CLR_OPERROR                       :1;          /*!< Write 1 - cleared bit in register FCISTAT */
    uint32_t Reserved0                         :30;         /*!< Reserved */
} _UFCIC_bits;

/* Bit field positions: */
#define UFCIC_CLR_OPCMLT_Pos                 0            /*!< write in FLASH */
#define UFCIC_CLR_OPERROR_Pos                1            /*!< Write 1 - cleared bit in register FCISTAT */

/* Bit field masks: */
#define UFCIC_CLR_OPCMLT_Msk                 0x00000001   /*!< write in FLASH */
#define UFCIC_CLR_OPERROR_Msk                0x00000002   /*!< Write 1 - cleared bit in register FCISTAT */

/*-- Register map for USERFLASH peripheral -----------------------------------*/

typedef struct {
    union {                                                 /*!< Address userflash register */
        __IO uint32_t UFMA;                                   /*!< UFMA    : type used for word access */
        __IO _UFMA_bits UFMA_bit;                             /*!< UFMA_bit: structure used for bit access */
    };
    union {                                                 /*!< Data byte user flash register */
        __IO uint32_t UFMD;                                   /*!< UFMD    : type used for word access */
        __IO _UFMD_bits UFMD_bit;                             /*!< UFMD_bit: structure used for bit access */
    };
    union {                                                 /*!< Command register */
        __O  uint32_t UFMC;                                   /*!< UFMC    : type used for word access */
        __O  _UFMC_bits UFMC_bit;                             /*!< UFMC_bit: structure used for bit access */
    };
    union {                                                 /*!< Status register */
        __I  uint32_t UFCIS;                                  /*!< UFCIS    : type used for word access */
        __I  _UFCIS_bits UFCIS_bit;                           /*!< UFCIS_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt mask register */
        __IO uint32_t UFCIM;                                  /*!< UFCIM    : type used for word access */
        __IO _UFCIM_bits UFCIM_bit;                           /*!< UFCIM_bit: structure used for bit access */
    };
    union {                                                 /*!< Command register */
        __IO uint32_t UFCIC;                                  /*!< UFCIC    : type used for word access */
        __IO _UFCIC_bits UFCIC_bit;                           /*!< UFCIC_bit: structure used for bit access */
    };
    uint32_t Reserved0[26];                                 /*!< Reserved */
    __IO uint32_t UT_ACC;                                   /*!< Register the delay of setting addresses to read data from the flash memory */
    __IO uint32_t UT_NVS;                                   /*!< Register signal delay lifting NVSTR after lifting signal PROG */
    __IO uint32_t UT_NVH;                                   /*!< Register sets the release delay signal NVSTR after releasing signal PROG */
    __IO uint32_t UT_RCV;                                   /*!< Register delay from releasing signal NVSTR to raise it to the next transaction */
    __IO uint32_t UT_PGS;                                   /*!< Register delay lifting signal YE after lifting signal NVSTR */
    __IO uint32_t UT_PROG;                                  /*!< Register YE signal duration in recording transactions */
    __IO uint32_t UT_PGH;                                   /*!< Register delay signal NVSTR after releasing signal YE */
    __IO uint32_t UT_ERASE;                                 /*!< Register duration of the signal in transactions ERASE erasure */
    __IO uint32_t UT_ME;                                    /*!< Register specifies the duration of the signal in transactions ERASE erasure */
    __IO uint32_t UT_NVH1;                                  /*!< Register specifies the duration of the signal in transactions ERASE erasure */
} NT_USERFLASH_TypeDef;

/******************************************************************************/
/*                         RTC controller registers                           */
/******************************************************************************/

/*-- PSECONDS: Part seconds register -----------------------------------------*/

typedef struct {
    uint32_t PART_SEC                          :10;         /*!< Part seconds */
    uint32_t Reserved0                         :22;         /*!< Reserved */
} _PSECONDS_bits;

/* Bit field positions: */
#define PSECONDS_PART_SEC_Pos                0            /*!< Part seconds */

/* Bit field masks: */
#define PSECONDS_PART_SEC_Msk                0x000003FF   /*!< Part seconds */

/*-- SECOND: Seconds register ------------------------------------------------*/

typedef struct {
    uint32_t SECOND                            :7;          /*!< Seconds in BCD format */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _SECOND_bits;

/* Bit field positions: */
#define SECOND_SECOND_Pos                    0            /*!< Seconds in BCD format */

/* Bit field masks: */
#define SECOND_SECOND_Msk                    0x0000007F   /*!< Seconds in BCD format */

/*-- MINUTE: Minute register -------------------------------------------------*/

typedef struct {
    uint32_t MINUTE                            :7;          /*!< Minutes in BCD format */
    uint32_t Reserved0                         :25;         /*!< Reserved */
} _MINUTE_bits;

/* Bit field positions: */
#define MINUTE_MINUTE_Pos                    0            /*!< Minutes in BCD format */

/* Bit field masks: */
#define MINUTE_MINUTE_Msk                    0x0000007F   /*!< Minutes in BCD format */

/*-- HOUR: Hour register -----------------------------------------------------*/

typedef struct {
    uint32_t HOUR                              :6;          /*!< Hours in BCD format */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _HOUR_bits;

/* Bit field positions: */
#define HOUR_HOUR_Pos                        0            /*!< Hours in BCD format */

/* Bit field masks: */
#define HOUR_HOUR_Msk                        0x0000003F   /*!< Hours in BCD format */

/*-- WDAY: Day of week register ----------------------------------------------*/

typedef struct {
    uint32_t DAYWEEK                           :3;          /*!< Day of week in BCD format */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _WDAY_bits;

/* Bit field positions: */
#define WDAY_DAYWEEK_Pos                     0            /*!< Day of week in BCD format */

/* Bit field masks: */
#define WDAY_DAYWEEK_Msk                     0x00000007   /*!< Day of week in BCD format */

/*-- DAY: Day register -------------------------------------------------------*/

typedef struct {
    uint32_t DAY                               :6;          /*!< Day in BCD format */
    uint32_t Reserved0                         :26;         /*!< Reserved */
} _DAY_bits;

/* Bit field positions: */
#define DAY_DAY_Pos                          0            /*!< Day in BCD format */

/* Bit field masks: */
#define DAY_DAY_Msk                          0x0000003F   /*!< Day in BCD format */

/*-- MONTH: Month register ---------------------------------------------------*/

typedef struct {
    uint32_t MONTH                             :5;          /*!< Month in BCD format */
    uint32_t Reserved0                         :27;         /*!< Reserved */
} _MONTH_bits;

/* Bit field positions: */
#define MONTH_MONTH_Pos                      0            /*!< Month in BCD format */

/* Bit field masks: */
#define MONTH_MONTH_Msk                      0x0000001F   /*!< Month in BCD format */

/*-- YEAR: Year register -----------------------------------------------------*/

typedef struct {
    uint32_t YEAR                              :8;          /*!< Year in BCD format */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _YEAR_bits;

/* Bit field positions: */
#define YEAR_YEAR_Pos                        0            /*!< Year in BCD format */

/* Bit field masks: */
#define YEAR_YEAR_Msk                        0x000000FF   /*!< Year in BCD format */

/*-- SHDW: Register Update shadow registers RTC ------------------------------*/

typedef struct {
    uint32_t Reserved0                         :7;          /*!< Reserved */
    uint32_t UPDTEN                            :1;          /*!< Enable update shadow registers RTC */
    uint32_t Reserved1                         :24;         /*!< Reserved */
} _SHDW_bits;

/* Bit field positions: */
#define SHDW_UPDTEN_Pos                      7            /*!< Enable update shadow registers RTC */

/* Bit field masks: */
#define SHDW_UPDTEN_Msk                      0x00000080   /*!< Enable update shadow registers RTC */

/*-- TIME: General register Time ---------------------------------------------*/

typedef struct {
    uint32_t SPLIT_SEC                         :10;         /*!< Split seconds */
    uint32_t SECOND                            :7;          /*!< Seconds */
    uint32_t MINUTE                            :7;          /*!< Minute */
    uint32_t HOUR                              :6;          /*!< Hour */
    uint32_t Reserved0                         :2;          /*!< Reserved */
} _TIME_bits;

/* Bit field positions: */
#define TIME_SPLIT_SEC_Pos                   0            /*!< Split seconds */
#define TIME_SECOND_Pos                      10           /*!< Seconds */
#define TIME_MINUTE_Pos                      17           /*!< Minute */
#define TIME_HOUR_Pos                        24           /*!< Hour */

/* Bit field masks: */
#define TIME_SPLIT_SEC_Msk                   0x000003FF   /*!< Split seconds */
#define TIME_SECOND_Msk                      0x0001FC00   /*!< Seconds */
#define TIME_MINUTE_Msk                      0x00FE0000   /*!< Minute */
#define TIME_HOUR_Msk                        0x3F000000   /*!< Hour */

/*-- Register map for RTC peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Part seconds register */
        __IO uint32_t PSECONDS;                               /*!< PSECONDS    : type used for word access */
        __IO _PSECONDS_bits PSECONDS_bit;                     /*!< PSECONDS_bit: structure used for bit access */
    };
    union {                                                 /*!< Seconds register */
        __IO uint32_t SECOND;                                 /*!< SECOND    : type used for word access */
        __IO _SECOND_bits SECOND_bit;                         /*!< SECOND_bit: structure used for bit access */
    };
    union {                                                 /*!< Minute register */
        __IO uint32_t MINUTE;                                 /*!< MINUTE    : type used for word access */
        __IO _MINUTE_bits MINUTE_bit;                         /*!< MINUTE_bit: structure used for bit access */
    };
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Hour register */
        __IO uint32_t HOUR;                                   /*!< HOUR    : type used for word access */
        __IO _HOUR_bits HOUR_bit;                             /*!< HOUR_bit: structure used for bit access */
    };
    uint32_t Reserved1;                                     /*!< Reserved */
    union {                                                 /*!< Day of week register */
        __IO uint32_t WDAY;                                   /*!< WDAY    : type used for word access */
        __IO _WDAY_bits WDAY_bit;                             /*!< WDAY_bit: structure used for bit access */
    };
    uint32_t Reserved2;                                     /*!< Reserved */
    union {                                                 /*!< Day register */
        __IO uint32_t DAY;                                    /*!< DAY    : type used for word access */
        __IO _DAY_bits DAY_bit;                               /*!< DAY_bit: structure used for bit access */
    };
    union {                                                 /*!< Month register */
        __IO uint32_t MONTH;                                  /*!< MONTH    : type used for word access */
        __IO _MONTH_bits MONTH_bit;                           /*!< MONTH_bit: structure used for bit access */
    };
    union {                                                 /*!< Year register */
        __IO uint32_t YEAR;                                   /*!< YEAR    : type used for word access */
        __IO _YEAR_bits YEAR_bit;                             /*!< YEAR_bit: structure used for bit access */
    };
    union {                                                 /*!< Register Update shadow registers RTC */
        __O  uint32_t SHDW;                                   /*!< SHDW    : type used for word access */
        __O  _SHDW_bits SHDW_bit;                             /*!< SHDW_bit: structure used for bit access */
    };
    union {                                                 /*!< General register Time */
        __I  uint32_t TIME;                                   /*!< TIME    : type used for word access */
        __I  _TIME_bits TIME_bit;                             /*!< TIME_bit: structure used for bit access */
    };
} NT_RTC_TypeDef;

/******************************************************************************/
/*                              SYS registers                                 */
/******************************************************************************/

/*-- ICTR: Interrupt Controller Type Register --------------------------------*/

typedef struct {
    uint32_t INTLINESNUM                       :4;          /*!< The total number of interrupt lines supported by an implementation */
    uint32_t Reserved0                         :28;         /*!< Reserved */
} _ICTR_bits;

/* Bit field positions: */
#define ICTR_INTLINESNUM_Pos                 0            /*!< The total number of interrupt lines supported by an implementation */

/* Bit field masks: */
#define ICTR_INTLINESNUM_Msk                 0x0000000F   /*!< The total number of interrupt lines supported by an implementation */

/*-- ACTLR: Auxiliary Control Register ---------------------------------------*/

typedef struct {
    uint32_t DYSMCYCINT                        :1;          /*!< Disables interruption of multi-cycle instructions */
    uint32_t DISDEFWBUF                        :1;          /*!< Disables write buffer use during default memory map accesses */
    uint32_t DISFOLD                           :1;          /*!< Disables folding of IT instructions */
    uint32_t Reserved0                         :5;          /*!< Reserved */
    uint32_t DISFPCA                           :1;          /*!< Disable automatic update of CONTROL.FPCA */
    uint32_t DISOOFP                           :1;          /*!< Disables floating point instructions completing out of order with respect to integer Instructions. */
    uint32_t Reserved1                         :22;         /*!< Reserved */
} _ACTLR_bits;

/* Bit field positions: */
#define ACTLR_DYSMCYCINT_Pos                 0            /*!< Disables interruption of multi-cycle instructions */
#define ACTLR_DISDEFWBUF_Pos                 1            /*!< Disables write buffer use during default memory map accesses */
#define ACTLR_DISFOLD_Pos                    2            /*!< Disables folding of IT instructions */
#define ACTLR_DISFPCA_Pos                    8            /*!< Disable automatic update of CONTROL.FPCA */
#define ACTLR_DISOOFP_Pos                    9            /*!< Disables floating point instructions completing out of order with respect to integer Instructions. */

/* Bit field masks: */
#define ACTLR_DYSMCYCINT_Msk                 0x00000001   /*!< Disables interruption of multi-cycle instructions */
#define ACTLR_DISDEFWBUF_Msk                 0x00000002   /*!< Disables write buffer use during default memory map accesses */
#define ACTLR_DISFOLD_Msk                    0x00000004   /*!< Disables folding of IT instructions */
#define ACTLR_DISFPCA_Msk                    0x00000100   /*!< Disable automatic update of CONTROL.FPCA */
#define ACTLR_DISOOFP_Msk                    0x00000200   /*!< Disables floating point instructions completing out of order with respect to integer Instructions. */

/*-- SysTick_STCSR: SysTick Control and Status Register ----------------------*/

typedef struct {
    uint32_t EN                                :1;          /*!< Indicates the enabled status of the SysTick counter */
    uint32_t TICINIT                           :1;          /*!< Indicate Count to 0 changes the SysTick exception status to pending */
    uint32_t CLKSOURCE                         :1;          /*!< Indicates the SysTick clock source: 0 = SysTick uses the IMPLEMENTATION DEFINED external reference clock 1 = SysTick uses the processor clock */
    uint32_t Reserved0                         :13;         /*!< Reserved */
    uint32_t COUNTFLAG                         :1;          /*!< Indicate Timer has counted to 0 */
    uint32_t Reserved1                         :15;         /*!< Reserved */
} _SysTick_STCSR_bits;

/* Bit field positions: */
#define SysTick_STCSR_EN_Pos                 0            /*!< Indicates the enabled status of the SysTick counter */
#define SysTick_STCSR_TICINIT_Pos            1            /*!< Indicate Count to 0 changes the SysTick exception status to pending */
#define SysTick_STCSR_CLKSOURCE_Pos          2            /*!< Indicates the SysTick clock source: 0 = SysTick uses the IMPLEMENTATION DEFINED external reference clock 1 = SysTick uses the processor clock */
#define SysTick_STCSR_COUNTFLAG_Pos          16           /*!< Indicate Timer has counted to 0 */

/* Bit field masks: */
#define SysTick_STCSR_EN_Msk                 0x00000001   /*!< Indicates the enabled status of the SysTick counter */
#define SysTick_STCSR_TICINIT_Msk            0x00000002   /*!< Indicate Count to 0 changes the SysTick exception status to pending */
#define SysTick_STCSR_CLKSOURCE_Msk          0x00000004   /*!< Indicates the SysTick clock source: 0 = SysTick uses the IMPLEMENTATION DEFINED external reference clock 1 = SysTick uses the processor clock */
#define SysTick_STCSR_COUNTFLAG_Msk          0x00010000   /*!< Indicate Timer has counted to 0 */

/*-- SysTick_STRVR: SysTick Reload Value Register ----------------------------*/

typedef struct {
    uint32_t RELOAD                            :24;         /*!< The value to load into the SYST_CVR when the counter reaches 0 */
    uint32_t Reserved0                         :8;          /*!< Reserved */
} _SysTick_STRVR_bits;

/* Bit field positions: */
#define SysTick_STRVR_RELOAD_Pos             0            /*!< The value to load into the SYST_CVR when the counter reaches 0 */

/* Bit field masks: */
#define SysTick_STRVR_RELOAD_Msk             0x00FFFFFF   /*!< The value to load into the SYST_CVR when the counter reaches 0 */

/*-- SysTick_STCR: SysTick Calibration Value Register ------------------------*/

typedef struct {
    uint32_t TENMS                             :24;         /*!< Optionally, holds a reload value to be used for 10ms (100Hz) timing, subject to system clock skew errors. If this field is zero, the calibration value is not known */
    uint32_t Reserved0                         :6;          /*!< Reserved */
    uint32_t SKEW                              :1;          /*!< Indicate 10ms calibration value is inexact, because of the clock frequency */
    uint32_t NOREF                             :1;          /*!< Indicate the reference clock is not implemented */
} _SysTick_STCR_bits;

/* Bit field positions: */
#define SysTick_STCR_TENMS_Pos               0            /*!< Optionally, holds a reload value to be used for 10ms (100Hz) timing, subject to system clock skew errors. If this field is zero, the calibration value is not known */
#define SysTick_STCR_SKEW_Pos                30           /*!< Indicate 10ms calibration value is inexact, because of the clock frequency */
#define SysTick_STCR_NOREF_Pos               31           /*!< Indicate the reference clock is not implemented */

/* Bit field masks: */
#define SysTick_STCR_TENMS_Msk               0x00FFFFFF   /*!< Optionally, holds a reload value to be used for 10ms (100Hz) timing, subject to system clock skew errors. If this field is zero, the calibration value is not known */
#define SysTick_STCR_SKEW_Msk                0x40000000   /*!< Indicate 10ms calibration value is inexact, because of the clock frequency */
#define SysTick_STCR_NOREF_Msk               0x80000000   /*!< Indicate the reference clock is not implemented */

/*-- CPUID: CPUID Base Register ----------------------------------------------*/

typedef struct {
    uint32_t REVISION                          :4;          /*!< Indicates patch release: 0x1= Patch 1. */
    uint32_t PARTNO                            :12;         /*!< Indicates part number: 0xC24 = Cortex-M4 */
    uint32_t Reserved0                         :4;          /*!< Reserved */
    uint32_t VARIANT                           :4;          /*!< Indicates processor revision: 0x0 = Revision 0 */
    uint32_t IMPLEMENTER                       :8;          /*!< Indicates implementer: 0x41 = ARM */
} _CPUID_bits;

/* Bit field positions: */
#define CPUID_REVISION_Pos                   0            /*!< Indicates patch release: 0x1= Patch 1. */
#define CPUID_PARTNO_Pos                     4            /*!< Indicates part number: 0xC24 = Cortex-M4 */
#define CPUID_VARIANT_Pos                    20           /*!< Indicates processor revision: 0x0 = Revision 0 */
#define CPUID_IMPLEMENTER_Pos                24           /*!< Indicates implementer: 0x41 = ARM */

/* Bit field masks: */
#define CPUID_REVISION_Msk                   0x0000000F   /*!< Indicates patch release: 0x1= Patch 1. */
#define CPUID_PARTNO_Msk                     0x0000FFF0   /*!< Indicates part number: 0xC24 = Cortex-M4 */
#define CPUID_VARIANT_Msk                    0x00F00000   /*!< Indicates processor revision: 0x0 = Revision 0 */
#define CPUID_IMPLEMENTER_Msk                0xFF000000   /*!< Indicates implementer: 0x41 = ARM */

/*-- ICSR: Interrupt Control and State Register ------------------------------*/

typedef struct {
    uint32_t VECTACTIVE                        :9;          /*!< The exception number of the current executing exception */
    uint32_t Reserved0                         :2;          /*!< Reserved */
    uint32_t RETTOBASE                         :1;          /*!< Indicate active exception other than the exception shown by IPSR */
    uint32_t VECTPENDING                       :9;          /*!< The exception number of the highest priority pending exception */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t ISRPENDING                        :1;          /*!< Indicate external interrupt pending */
    uint32_t ISRPREEMPT                        :1;          /*!< Indicate service a pending exception */
    uint32_t Reserved2                         :1;          /*!< Reserved */
    uint32_t PENDSTCLR                         :1;          /*!< Remove pending status */
    uint32_t PENDSTSET                         :1;          /*!< Enable SysTick is pending */
    uint32_t PENDSVCLR                         :1;          /*!< Remove pending status */
    uint32_t PENDSVSET                         :1;          /*!< Enable PendSV is pending */
    uint32_t Reserved3                         :2;          /*!< Reserved */
    uint32_t NMIPENDSET                        :1;          /*!< Enable NMI active */
} _ICSR_bits;

/* Bit field positions: */
#define ICSR_VECTACTIVE_Pos                  0            /*!< The exception number of the current executing exception */
#define ICSR_RETTOBASE_Pos                   11           /*!< Indicate active exception other than the exception shown by IPSR */
#define ICSR_VECTPENDING_Pos                 12           /*!< The exception number of the highest priority pending exception */
#define ICSR_ISRPENDING_Pos                  22           /*!< Indicate external interrupt pending */
#define ICSR_ISRPREEMPT_Pos                  23           /*!< Indicate service a pending exception */
#define ICSR_PENDSTCLR_Pos                   25           /*!< Remove pending status */
#define ICSR_PENDSTSET_Pos                   26           /*!< Enable SysTick is pending */
#define ICSR_PENDSVCLR_Pos                   27           /*!< Remove pending status */
#define ICSR_PENDSVSET_Pos                   28           /*!< Enable PendSV is pending */
#define ICSR_NMIPENDSET_Pos                  31           /*!< Enable NMI active */

/* Bit field masks: */
#define ICSR_VECTACTIVE_Msk                  0x000001FF   /*!< The exception number of the current executing exception */
#define ICSR_RETTOBASE_Msk                   0x00000800   /*!< Indicate active exception other than the exception shown by IPSR */
#define ICSR_VECTPENDING_Msk                 0x001FF000   /*!< The exception number of the highest priority pending exception */
#define ICSR_ISRPENDING_Msk                  0x00400000   /*!< Indicate external interrupt pending */
#define ICSR_ISRPREEMPT_Msk                  0x00800000   /*!< Indicate service a pending exception */
#define ICSR_PENDSTCLR_Msk                   0x02000000   /*!< Remove pending status */
#define ICSR_PENDSTSET_Msk                   0x04000000   /*!< Enable SysTick is pending */
#define ICSR_PENDSVCLR_Msk                   0x08000000   /*!< Remove pending status */
#define ICSR_PENDSVSET_Msk                   0x10000000   /*!< Enable PendSV is pending */
#define ICSR_NMIPENDSET_Msk                  0x80000000   /*!< Enable NMI active */

/*-- VTOR: Vector Table Offset Register --------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :7;          /*!< Reserved */
    uint32_t TBLOFF                            :25;         /*!< Vector table address */
} _VTOR_bits;

/* Bit field positions: */
#define VTOR_TBLOFF_Pos                      7            /*!< Vector table address */

/* Bit field masks: */
#define VTOR_TBLOFF_Msk                      0xFFFFFF80   /*!< Vector table address */

/*-- AIRCR: Application Interrupt and Reset Control Register -----------------*/

typedef struct {
    uint32_t VECTRESET                         :1;          /*!< Writing 1 to this bit causes a local system reset */
    uint32_t VECTCLRACTIVE                     :1;          /*!< Writing 1 to this bit clears all active state information for fixed and configurable exceptions */
    uint32_t SYSRESETREQ                       :1;          /*!< System Reset Request */
    uint32_t Reserved0                         :5;          /*!< Reserved */
    uint32_t PRIGROUP                          :3;          /*!< Priority grouping */
    uint32_t Reserved1                         :4;          /*!< Reserved */
    uint32_t ENDIANNESS                        :1;          /*!< Indicates the memory system big endianness */
    uint32_t VECTKEY                           :16;         /*!< Vector Key */
} _AIRCR_bits;

/* Bit field positions: */
#define AIRCR_VECTRESET_Pos                  0            /*!< Writing 1 to this bit causes a local system reset */
#define AIRCR_VECTCLRACTIVE_Pos              1            /*!< Writing 1 to this bit clears all active state information for fixed and configurable exceptions */
#define AIRCR_SYSRESETREQ_Pos                2            /*!< System Reset Request */
#define AIRCR_PRIGROUP_Pos                   8            /*!< Priority grouping */
#define AIRCR_ENDIANNESS_Pos                 15           /*!< Indicates the memory system big endianness */
#define AIRCR_VECTKEY_Pos                    16           /*!< Vector Key */

/* Bit field masks: */
#define AIRCR_VECTRESET_Msk                  0x00000001   /*!< Writing 1 to this bit causes a local system reset */
#define AIRCR_VECTCLRACTIVE_Msk              0x00000002   /*!< Writing 1 to this bit clears all active state information for fixed and configurable exceptions */
#define AIRCR_SYSRESETREQ_Msk                0x00000004   /*!< System Reset Request */
#define AIRCR_PRIGROUP_Msk                   0x00000700   /*!< Priority grouping */
#define AIRCR_ENDIANNESS_Msk                 0x00008000   /*!< Indicates the memory system big endianness */
#define AIRCR_VECTKEY_Msk                    0xFFFF0000   /*!< Vector Key */

/*-- SCR: System Control Register --------------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t SLEEPONEXIT                       :1;          /*!< Enable the processor Enter sleep state */
    uint32_t SLEEPDEEP                         :1;          /*!< Enable sleep state is deep sleep */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t SEVONPEND                         :1;          /*!< Enable interrupt transitions from inactive to pending are wakeup events */
    uint32_t Reserved2                         :27;         /*!< Reserved */
} _SCR_bits;

/* Bit field positions: */
#define SCR_SLEEPONEXIT_Pos                  1            /*!< Enable the processor Enter sleep state */
#define SCR_SLEEPDEEP_Pos                    2            /*!< Enable sleep state is deep sleep */
#define SCR_SEVONPEND_Pos                    4            /*!< Enable interrupt transitions from inactive to pending are wakeup events */

/* Bit field masks: */
#define SCR_SLEEPONEXIT_Msk                  0x00000002   /*!< Enable the processor Enter sleep state */
#define SCR_SLEEPDEEP_Msk                    0x00000004   /*!< Enable sleep state is deep sleep */
#define SCR_SEVONPEND_Msk                    0x00000010   /*!< Enable interrupt transitions from inactive to pending are wakeup events */

/*-- CCR: Configuration and Control Register ---------------------------------*/

typedef struct {
    uint32_t NONBASETHRDENA                    :1;          /*!< Controls whether the processor can enter Thread mode at an execution */
    uint32_t USERSETMPEND                      :1;          /*!< Enable unprivileged software can access the STIR */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t UNALIGN_TRP                       :1;          /*!< Enable trapping of unaligned word or halfword accesses */
    uint32_t DIV_0_TRP                         :1;          /*!< Enable the trap on divide by 0 */
    uint32_t Reserved1                         :3;          /*!< Reserved */
    uint32_t BFHFNMIGN                         :1;
    uint32_t STKALIGN                          :1;          /*!< SP alignment */
    uint32_t Reserved2                         :22;         /*!< Reserved */
} _CCR_bits;

/* Bit field positions: */
#define CCR_NONBASETHRDENA_Pos               0            /*!< Controls whether the processor can enter Thread mode at an execution */
#define CCR_USERSETMPEND_Pos                 1            /*!< Enable unprivileged software can access the STIR */
#define CCR_UNALIGN_TRP_Pos                  3            /*!< Enable trapping of unaligned word or halfword accesses */
#define CCR_DIV_0_TRP_Pos                    4            /*!< Enable the trap on divide by 0 */
#define CCR_BFHFNMIGN_Pos                    8
#define CCR_STKALIGN_Pos                     9            /*!< SP alignment */

/* Bit field masks: */
#define CCR_NONBASETHRDENA_Msk               0x00000001   /*!< Controls whether the processor can enter Thread mode at an execution */
#define CCR_USERSETMPEND_Msk                 0x00000002   /*!< Enable unprivileged software can access the STIR */
#define CCR_UNALIGN_TRP_Msk                  0x00000008   /*!< Enable trapping of unaligned word or halfword accesses */
#define CCR_DIV_0_TRP_Msk                    0x00000010   /*!< Enable the trap on divide by 0 */
#define CCR_BFHFNMIGN_Msk                    0x00000100
#define CCR_STKALIGN_Msk                     0x00000200   /*!< SP alignment */

/*-- SHPR1: System Handler Priority Register 1 -------------------------------*/

typedef struct {
    uint32_t PRI_4                             :8;          /*!< Priority of system handler 4, MemManage */
    uint32_t PRI_5                             :8;          /*!< Priority of system handler 5, BusFault */
    uint32_t PRI_6                             :8;          /*!< Priority of system handler 6, UsageFault */
    uint32_t PRI_7                             :8;          /*!< Reserved for priority of system handler 7 */
} _SHPR1_bits;

/* Bit field positions: */
#define SHPR1_PRI_4_Pos                      0            /*!< Priority of system handler 4, MemManage */
#define SHPR1_PRI_5_Pos                      8            /*!< Priority of system handler 5, BusFault */
#define SHPR1_PRI_6_Pos                      16           /*!< Priority of system handler 6, UsageFault */
#define SHPR1_PRI_7_Pos                      24           /*!< Reserved for priority of system handler 7 */

/* Bit field masks: */
#define SHPR1_PRI_4_Msk                      0x000000FF   /*!< Priority of system handler 4, MemManage */
#define SHPR1_PRI_5_Msk                      0x0000FF00   /*!< Priority of system handler 5, BusFault */
#define SHPR1_PRI_6_Msk                      0x00FF0000   /*!< Priority of system handler 6, UsageFault */
#define SHPR1_PRI_7_Msk                      0xFF000000   /*!< Reserved for priority of system handler 7 */

/*-- SHPR2: System Handler Priority Register 2 -------------------------------*/

typedef struct {
    uint32_t PRI_8                             :8;          /*!< Reserved for priority of system handler 8 */
    uint32_t PRI_9                             :8;          /*!< Reserved for priority of system handler 9 */
    uint32_t PRI_10                            :8;          /*!< Reserved for priority of system handler 10 */
    uint32_t PRI_11                            :8;          /*!< Priority of system handler 11, SVCall */
} _SHPR2_bits;

/* Bit field positions: */
#define SHPR2_PRI_8_Pos                      0            /*!< Reserved for priority of system handler 8 */
#define SHPR2_PRI_9_Pos                      8            /*!< Reserved for priority of system handler 9 */
#define SHPR2_PRI_10_Pos                     16           /*!< Reserved for priority of system handler 10 */
#define SHPR2_PRI_11_Pos                     24           /*!< Priority of system handler 11, SVCall */

/* Bit field masks: */
#define SHPR2_PRI_8_Msk                      0x000000FF   /*!< Reserved for priority of system handler 8 */
#define SHPR2_PRI_9_Msk                      0x0000FF00   /*!< Reserved for priority of system handler 9 */
#define SHPR2_PRI_10_Msk                     0x00FF0000   /*!< Reserved for priority of system handler 10 */
#define SHPR2_PRI_11_Msk                     0xFF000000   /*!< Priority of system handler 11, SVCall */

/*-- SHPR3: System Handler Priority Register 3 -------------------------------*/

typedef struct {
    uint32_t PRI_12                            :8;          /*!< Priority of system handler 12, DebugMonitor */
    uint32_t PRI_13                            :8;          /*!< Reserved for priority of system handler 13 */
    uint32_t PRI_14                            :8;          /*!< Priority of system handler 14, PendSV */
    uint32_t PRI_15                            :8;          /*!< Priority of system handler 15, SysTick */
} _SHPR3_bits;

/* Bit field positions: */
#define SHPR3_PRI_12_Pos                     0            /*!< Priority of system handler 12, DebugMonitor */
#define SHPR3_PRI_13_Pos                     8            /*!< Reserved for priority of system handler 13 */
#define SHPR3_PRI_14_Pos                     16           /*!< Priority of system handler 14, PendSV */
#define SHPR3_PRI_15_Pos                     24           /*!< Priority of system handler 15, SysTick */

/* Bit field masks: */
#define SHPR3_PRI_12_Msk                     0x000000FF   /*!< Priority of system handler 12, DebugMonitor */
#define SHPR3_PRI_13_Msk                     0x0000FF00   /*!< Reserved for priority of system handler 13 */
#define SHPR3_PRI_14_Msk                     0x00FF0000   /*!< Priority of system handler 14, PendSV */
#define SHPR3_PRI_15_Msk                     0xFF000000   /*!< Priority of system handler 15, SysTick */

/*-- SHCSR: System Handler Control and State Register ------------------------*/

typedef struct {
    uint32_t MEMFAULTACT                       :1;          /*!< Enable MemManage is active */
    uint32_t BUSFAULTACT                       :1;          /*!< Enable BusFault is active */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t USGFAULTACT                       :1;          /*!< Enable UsageFault is active */
    uint32_t Reserved1                         :3;          /*!< Reserved */
    uint32_t SVCALLACT                         :1;          /*!< Enable SVCall is active */
    uint32_t MONITORACT                        :1;          /*!< Enable Monitor is active */
    uint32_t Reserved2                         :1;          /*!< Reserved */
    uint32_t PENDSACT                          :1;          /*!< Enable PendSV is active */
    uint32_t SYSTICKACT                        :1;          /*!< Enable SysTick is active */
    uint32_t USGFAULTPENDED                    :1;          /*!< Enable UsageFault is pending */
    uint32_t MEMFAULTPENDED                    :1;          /*!< Enable MemManage is pending */
    uint32_t BUSFALTPENDED                     :1;          /*!< Enable BusFault is pending */
    uint32_t SVCALLPENDED                      :1;          /*!< Enable SVCall is pending */
    uint32_t MEMFAULTENA                       :1;          /*!< Enable MemManage fault */
    uint32_t BUSFAULTENA                       :1;          /*!< Enable BusFault */
    uint32_t USGFAULTENA                       :1;          /*!< Enable UsageFault */
    uint32_t Reserved3                         :13;         /*!< Reserved */
} _SHCSR_bits;

/* Bit field positions: */
#define SHCSR_MEMFAULTACT_Pos                0            /*!< Enable MemManage is active */
#define SHCSR_BUSFAULTACT_Pos                1            /*!< Enable BusFault is active */
#define SHCSR_USGFAULTACT_Pos                3            /*!< Enable UsageFault is active */
#define SHCSR_SVCALLACT_Pos                  7            /*!< Enable SVCall is active */
#define SHCSR_MONITORACT_Pos                 8            /*!< Enable Monitor is active */
#define SHCSR_PENDSACT_Pos                   10           /*!< Enable PendSV is active */
#define SHCSR_SYSTICKACT_Pos                 11           /*!< Enable SysTick is active */
#define SHCSR_USGFAULTPENDED_Pos             12           /*!< Enable UsageFault is pending */
#define SHCSR_MEMFAULTPENDED_Pos             13           /*!< Enable MemManage is pending */
#define SHCSR_BUSFALTPENDED_Pos              14           /*!< Enable BusFault is pending */
#define SHCSR_SVCALLPENDED_Pos               15           /*!< Enable SVCall is pending */
#define SHCSR_MEMFAULTENA_Pos                16           /*!< Enable MemManage fault */
#define SHCSR_BUSFAULTENA_Pos                17           /*!< Enable BusFault */
#define SHCSR_USGFAULTENA_Pos                18           /*!< Enable UsageFault */

/* Bit field masks: */
#define SHCSR_MEMFAULTACT_Msk                0x00000001   /*!< Enable MemManage is active */
#define SHCSR_BUSFAULTACT_Msk                0x00000002   /*!< Enable BusFault is active */
#define SHCSR_USGFAULTACT_Msk                0x00000008   /*!< Enable UsageFault is active */
#define SHCSR_SVCALLACT_Msk                  0x00000080   /*!< Enable SVCall is active */
#define SHCSR_MONITORACT_Msk                 0x00000100   /*!< Enable Monitor is active */
#define SHCSR_PENDSACT_Msk                   0x00000400   /*!< Enable PendSV is active */
#define SHCSR_SYSTICKACT_Msk                 0x00000800   /*!< Enable SysTick is active */
#define SHCSR_USGFAULTPENDED_Msk             0x00001000   /*!< Enable UsageFault is pending */
#define SHCSR_MEMFAULTPENDED_Msk             0x00002000   /*!< Enable MemManage is pending */
#define SHCSR_BUSFALTPENDED_Msk              0x00004000   /*!< Enable BusFault is pending */
#define SHCSR_SVCALLPENDED_Msk               0x00008000   /*!< Enable SVCall is pending */
#define SHCSR_MEMFAULTENA_Msk                0x00010000   /*!< Enable MemManage fault */
#define SHCSR_BUSFAULTENA_Msk                0x00020000   /*!< Enable BusFault */
#define SHCSR_USGFAULTENA_Msk                0x00040000   /*!< Enable UsageFault */

/*-- CFSR: Configurable Fault Status Registers -------------------------------*/

typedef struct {
    uint32_t MEMMANAGE                         :8;          /*!< Provides information on MemManage exceptions */
    uint32_t BUSFAULT                          :8;          /*!< Provides information on BusFault exceptions */
    uint32_t USAGEFAULT                        :16;         /*!< Provides information on UsageFault exceptions */
} _CFSR_bits;

/* Bit field positions: */
#define CFSR_MEMMANAGE_Pos                   0            /*!< Provides information on MemManage exceptions */
#define CFSR_BUSFAULT_Pos                    8            /*!< Provides information on BusFault exceptions */
#define CFSR_USAGEFAULT_Pos                  16           /*!< Provides information on UsageFault exceptions */

/* Bit field masks: */
#define CFSR_MEMMANAGE_Msk                   0x000000FF   /*!< Provides information on MemManage exceptions */
#define CFSR_BUSFAULT_Msk                    0x0000FF00   /*!< Provides information on BusFault exceptions */
#define CFSR_USAGEFAULT_Msk                  0xFFFF0000   /*!< Provides information on UsageFault exceptions */

/*-- HFSR: HardFault Status Register -----------------------------------------*/

typedef struct {
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t VECTTBL                           :1;          /*!< Enable Vector table read fault has occurred */
    uint32_t Reserved1                         :28;         /*!< Reserved */
    uint32_t FORCED                            :1;          /*!< Enable Processor has escalated a configurable-priority exception to HardFault */
    uint32_t DEBUGEVT                          :1;          /*!< Enable Debug event has occurred */
} _HFSR_bits;

/* Bit field positions: */
#define HFSR_VECTTBL_Pos                     1            /*!< Enable Vector table read fault has occurred */
#define HFSR_FORCED_Pos                      30           /*!< Enable Processor has escalated a configurable-priority exception to HardFault */
#define HFSR_DEBUGEVT_Pos                    31           /*!< Enable Debug event has occurred */

/* Bit field masks: */
#define HFSR_VECTTBL_Msk                     0x00000002   /*!< Enable Vector table read fault has occurred */
#define HFSR_FORCED_Msk                      0x40000000   /*!< Enable Processor has escalated a configurable-priority exception to HardFault */
#define HFSR_DEBUGEVT_Msk                    0x80000000   /*!< Enable Debug event has occurred */

/*-- CPACR: Coprocessor Access Control Register ------------------------------*/

typedef struct {
    uint32_t Reserved0                         :20;         /*!< Reserved */
    uint32_t CP10                              :2;          /*!< Access privileges for coprocessor FPU. 0b00 = Access denied. Any attempted access generates a NOCP UsageFault. 0b01 = Privileged access only. An unprivileged access generates a NOCP UsageFault. 0b10 = Reserved.0b11 = Full access */
    uint32_t CP11                              :2;
    uint32_t Reserved1                         :8;          /*!< Reserved */
} _CPACR_bits;

/* Bit field positions: */
#define CPACR_CP10_Pos                       20           /*!< Access privileges for coprocessor FPU. 0b00 = Access denied. Any attempted access generates a NOCP UsageFault. 0b01 = Privileged access only. An unprivileged access generates a NOCP UsageFault. 0b10 = Reserved.0b11 = Full access */
#define CPACR_CP11_Pos                       22

/* Bit field masks: */
#define CPACR_CP10_Msk                       0x00300000   /*!< Access privileges for coprocessor FPU. 0b00 = Access denied. Any attempted access generates a NOCP UsageFault. 0b01 = Privileged access only. An unprivileged access generates a NOCP UsageFault. 0b10 = Reserved.0b11 = Full access */
#define CPACR_CP11_Msk                       0x00C00000

/*-- STIR: Software Triggered Interrupt Register -----------------------------*/

typedef struct {
    uint32_t INTID                             :9;          /*!< Indicates the interrupt to be triggered */
    uint32_t Reserved0                         :23;         /*!< Reserved */
} _STIR_bits;

/* Bit field positions: */
#define STIR_INTID_Pos                       0            /*!< Indicates the interrupt to be triggered */

/* Bit field masks: */
#define STIR_INTID_Msk                       0x000001FF   /*!< Indicates the interrupt to be triggered */

/*-- Register map for SYSTEM peripheral --------------------------------------*/

typedef struct {
    uint32_t Reserved0;                                     /*!< Reserved */
    union {                                                 /*!< Interrupt Controller Type Register */
        __I  uint32_t ICTR;                                   /*!< ICTR    : type used for word access */
        __I  _ICTR_bits ICTR_bit;                             /*!< ICTR_bit: structure used for bit access */
    };
    union {                                                 /*!< Auxiliary Control Register */
        __IO uint32_t ACTLR;                                  /*!< ACTLR    : type used for word access */
        __IO _ACTLR_bits ACTLR_bit;                           /*!< ACTLR_bit: structure used for bit access */
    };
    uint32_t Reserved1;                                     /*!< Reserved */
    union {                                                 /*!< SysTick Control and Status Register */
        __IO uint32_t SysTick_STCSR;                          /*!< SysTick_STCSR    : type used for word access */
        __IO _SysTick_STCSR_bits SysTick_STCSR_bit;           /*!< SysTick_STCSR_bit: structure used for bit access */
    };
    union {                                                 /*!< SysTick Reload Value Register */
        __IO uint32_t SysTick_STRVR;                          /*!< SysTick_STRVR    : type used for word access */
        __IO _SysTick_STRVR_bits SysTick_STRVR_bit;           /*!< SysTick_STRVR_bit: structure used for bit access */
    };
    __IO uint32_t SysTick_STCVR;                            /*!< SysTick Current Value Register */
    union {                                                 /*!< SysTick Calibration Value Register */
        __I  uint32_t SysTick_STCR;                           /*!< SysTick_STCR    : type used for word access */
        __I  _SysTick_STCR_bits SysTick_STCR_bit;             /*!< SysTick_STCR_bit: structure used for bit access */
    };
    uint32_t Reserved2[824];                                /*!< Reserved */
    union {                                                 /*!< CPUID Base Register */
        __I  uint32_t CPUID;                                  /*!< CPUID    : type used for word access */
        __I  _CPUID_bits CPUID_bit;                           /*!< CPUID_bit: structure used for bit access */
    };
    union {                                                 /*!< Interrupt Control and State Register */
        __IO uint32_t ICSR;                                   /*!< ICSR    : type used for word access */
        __IO _ICSR_bits ICSR_bit;                             /*!< ICSR_bit: structure used for bit access */
    };
    union {                                                 /*!< Vector Table Offset Register */
        __IO uint32_t VTOR;                                   /*!< VTOR    : type used for word access */
        __IO _VTOR_bits VTOR_bit;                             /*!< VTOR_bit: structure used for bit access */
    };
    union {                                                 /*!< Application Interrupt and Reset Control Register */
        __IO uint32_t AIRCR;                                  /*!< AIRCR    : type used for word access */
        __IO _AIRCR_bits AIRCR_bit;                           /*!< AIRCR_bit: structure used for bit access */
    };
    union {                                                 /*!< System Control Register */
        __IO uint32_t SCR;                                    /*!< SCR    : type used for word access */
        __IO _SCR_bits SCR_bit;                               /*!< SCR_bit: structure used for bit access */
    };
    union {                                                 /*!< Configuration and Control Register */
        __IO uint32_t CCR;                                    /*!< CCR    : type used for word access */
        __IO _CCR_bits CCR_bit;                               /*!< CCR_bit: structure used for bit access */
    };
    union {                                                 /*!< System Handler Priority Register 1 */
        __IO uint32_t SHPR1;                                  /*!< SHPR1    : type used for word access */
        __IO _SHPR1_bits SHPR1_bit;                           /*!< SHPR1_bit: structure used for bit access */
    };
    union {                                                 /*!< System Handler Priority Register 2 */
        __IO uint32_t SHPR2;                                  /*!< SHPR2    : type used for word access */
        __IO _SHPR2_bits SHPR2_bit;                           /*!< SHPR2_bit: structure used for bit access */
    };
    union {                                                 /*!< System Handler Priority Register 3 */
        __IO uint32_t SHPR3;                                  /*!< SHPR3    : type used for word access */
        __IO _SHPR3_bits SHPR3_bit;                           /*!< SHPR3_bit: structure used for bit access */
    };
    union {                                                 /*!< System Handler Control and State Register */
        __IO uint32_t SHCSR;                                  /*!< SHCSR    : type used for word access */
        __IO _SHCSR_bits SHCSR_bit;                           /*!< SHCSR_bit: structure used for bit access */
    };
    union {                                                 /*!< Configurable Fault Status Registers */
        __IO uint32_t CFSR;                                   /*!< CFSR    : type used for word access */
        __IO _CFSR_bits CFSR_bit;                             /*!< CFSR_bit: structure used for bit access */
    };
    union {                                                 /*!< HardFault Status Register */
        __IO uint32_t HFSR;                                   /*!< HFSR    : type used for word access */
        __IO _HFSR_bits HFSR_bit;                             /*!< HFSR_bit: structure used for bit access */
    };
    __IO uint32_t DFSR;                                     /*!< Debug Fault Status Register */
    __IO uint32_t MMFAR;                                    /*!< MemManage Fault Address Register */
    __IO uint32_t BFAR;                                     /*!< BusFault Address Register */
    __IO uint32_t AFSR;                                     /*!< Auxiliary Fault Status Register */
    uint32_t Reserved3[18];                                 /*!< Reserved */
    union {                                                 /*!< Coprocessor Access Control Register */
        __IO uint32_t CPACR;                                  /*!< CPACR    : type used for word access */
        __IO _CPACR_bits CPACR_bit;                           /*!< CPACR_bit: structure used for bit access */
    };
    uint32_t Reserved4[93];                                 /*!< Reserved */
    union {                                                 /*!< Software Triggered Interrupt Register */
        __O  uint32_t STIR;                                   /*!< STIR    : type used for word access */
        __O  _STIR_bits STIR_bit;                             /*!< STIR_bit: structure used for bit access */
    };
} NT_SYSTEM_TypeDef;

/******************************************************************************/
/*                              NVIC registers                                */
/******************************************************************************/

/*-- IPR: Interrupt Priority Registers ---------------------------------------*/

typedef struct {
    uint32_t PRI_N0                            :8;
    uint32_t PRI_N1                            :7;
    uint32_t PRI_N2                            :9;
    uint32_t PRI_N3                            :8;
} _IPR_bits;

/* Bit field positions: */
#define IPR_PRI_N0_Pos                       0
#define IPR_PRI_N1_Pos                       8
#define IPR_PRI_N2_Pos                       15
#define IPR_PRI_N3_Pos                       24

/* Bit field masks: */
#define IPR_PRI_N0_Msk                       0x000000FF
#define IPR_PRI_N1_Msk                       0x00007F00
#define IPR_PRI_N2_Msk                       0x00FF8000
#define IPR_PRI_N3_Msk                       0xFF000000

/*-- Register map for NVIC peripheral ----------------------------------------*/

typedef struct {
    uint32_t Reserved0[64];                                 /*!< Reserved */
    __IO uint32_t ISER[5];                                  /*!< Interrupt Set-Enable Registers */
    uint32_t Reserved1[27];                                 /*!< Reserved */
    __IO uint32_t ICER[5];                                  /*!< Interrupt Clear-Enable Registers */
    uint32_t Reserved2[27];                                 /*!< Reserved */
    __IO uint32_t ISPR[5];                                  /*!< Interrupt Set-Pending Registers */
    uint32_t Reserved3[27];                                 /*!< Reserved */
    __IO uint32_t ICPR[5];                                  /*!< Interrupt Clear-Pending Registers */
    uint32_t Reserved4[27];                                 /*!< Reserved */
    __I  uint32_t IABR[5];                                  /*!< Interrupt Active Bit Registers */
    uint32_t Reserved5[59];                                 /*!< Reserved */
    union {                                                 /*!< Interrupt Priority Registers */
        __IO uint32_t IPR[34];                                /*!< IPR    : type used for word access */
        __IO _IPR_bits IPR_bit[34];                           /*!< IPR_bit: structure used for bit access */
    };
} NT_NVIC_TypeDef;

/******************************************************************************/
/*                              MPU registers                                 */
/******************************************************************************/

/*-- TYPE: MPU Type Register -------------------------------------------------*/

typedef struct {
    uint32_t SEPARATE                          :1;          /*!< Indicates support for separate instruction and data address maps. RAZ. ARMv7-M only supports a unified MPU */
    uint32_t Reserved0                         :7;          /*!< Reserved */
    uint32_t DREGION                           :8;          /*!< Number of regions supported by the MPU. If this field reads-as-zero the processor does not implement an MPU */
    uint32_t IREGION                           :8;          /*!< Instruction region */
    uint32_t Reserved1                         :8;          /*!< Reserved */
} _TYPE_bits;

/* Bit field positions: */
#define TYPE_SEPARATE_Pos                    0            /*!< Indicates support for separate instruction and data address maps. RAZ. ARMv7-M only supports a unified MPU */
#define TYPE_DREGION_Pos                     8            /*!< Number of regions supported by the MPU. If this field reads-as-zero the processor does not implement an MPU */
#define TYPE_IREGION_Pos                     16           /*!< Instruction region */

/* Bit field masks: */
#define TYPE_SEPARATE_Msk                    0x00000001   /*!< Indicates support for separate instruction and data address maps. RAZ. ARMv7-M only supports a unified MPU */
#define TYPE_DREGION_Msk                     0x0000FF00   /*!< Number of regions supported by the MPU. If this field reads-as-zero the processor does not implement an MPU */
#define TYPE_IREGION_Msk                     0x00FF0000   /*!< Instruction region */

/*-- CTRL: MPU Control Register ----------------------------------------------*/

typedef struct {
    uint32_t ENABLE                            :1;          /*!< Enables the MPU */
    uint32_t HFNMIENA                          :1;          /*!< Use the MPU for memory accesses by these handlers */
    uint32_t PRIVDEFENA                        :1;          /*!< Enables the default memory map as a background region for privileged access */
    uint32_t Reserved0                         :29;         /*!< Reserved */
} _CTRL_bits;

/* Bit field positions: */
#define CTRL_ENABLE_Pos                      0            /*!< Enables the MPU */
#define CTRL_HFNMIENA_Pos                    1            /*!< Use the MPU for memory accesses by these handlers */
#define CTRL_PRIVDEFENA_Pos                  2            /*!< Enables the default memory map as a background region for privileged access */

/* Bit field masks: */
#define CTRL_ENABLE_Msk                      0x00000001   /*!< Enables the MPU */
#define CTRL_HFNMIENA_Msk                    0x00000002   /*!< Use the MPU for memory accesses by these handlers */
#define CTRL_PRIVDEFENA_Msk                  0x00000004   /*!< Enables the default memory map as a background region for privileged access */

/*-- RNR: MPU Region Number Register -----------------------------------------*/

typedef struct {
    uint32_t REGION                            :8;          /*!< Indicates the memory region accessed by MPU_RBAR and MPU_RSAR */
    uint32_t Reserved0                         :24;         /*!< Reserved */
} _RNR_bits;

/* Bit field positions: */
#define RNR_REGION_Pos                       0            /*!< Indicates the memory region accessed by MPU_RBAR and MPU_RSAR */

/* Bit field masks: */
#define RNR_REGION_Msk                       0x000000FF   /*!< Indicates the memory region accessed by MPU_RBAR and MPU_RSAR */

/*-- RBAR: MPU Region Base Address Register ----------------------------------*/

typedef struct {
    uint32_t REGION                            :4;          /*!< On writes, can specify the number of the region to update, see VALID field description. On reads, returns bits [3:0] of MPU_RNR. */
    uint32_t VALID                             :1;          /*!< 0 = Update the base address of the region indicated by MPU_RNR, ignoring the value of the REGION field */
    uint32_t ADDR                              :27;         /*!< Base address of the region */
} _RBAR_bits;

/* Bit field positions: */
#define RBAR_REGION_Pos                      0            /*!< On writes, can specify the number of the region to update, see VALID field description. On reads, returns bits [3:0] of MPU_RNR. */
#define RBAR_VALID_Pos                       4            /*!< 0 = Update the base address of the region indicated by MPU_RNR, ignoring the value of the REGION field */
#define RBAR_ADDR_Pos                        5            /*!< Base address of the region */

/* Bit field masks: */
#define RBAR_REGION_Msk                      0x0000000F   /*!< On writes, can specify the number of the region to update, see VALID field description. On reads, returns bits [3:0] of MPU_RNR. */
#define RBAR_VALID_Msk                       0x00000010   /*!< 0 = Update the base address of the region indicated by MPU_RNR, ignoring the value of the REGION field */
#define RBAR_ADDR_Msk                        0xFFFFFFE0   /*!< Base address of the region */

/*-- RASR: MPU Region Attribute and Size Register ----------------------------*/

typedef struct {
    uint32_t ENABLE                            :1;          /*!< Enables this region */
    uint32_t SIZE                              :5;          /*!< Indicates the region size. The region size, in bytes, is 2(SIZE+1) */
    uint32_t Reserved0                         :2;          /*!< Reserved */
    uint32_t SRD                               :8;          /*!< Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled */
    uint32_t B                                 :1;          /*!< The MPU Region Attribute field */
    uint32_t C                                 :1;          /*!< The MPU Region Attribute field */
    uint32_t S                                 :1;          /*!< The MPU Region Attribute field */
    uint32_t TEX                               :3;          /*!< The MPU Region Attribute field */
    uint32_t Reserved1                         :2;          /*!< Reserved */
    uint32_t AP                                :3;          /*!< The MPU Region Attribute field */
    uint32_t Reserved2                         :1;          /*!< Reserved */
    uint32_t XN                                :1;          /*!< The MPU Region Attribute field */
    uint32_t Reserved3                         :3;          /*!< Reserved */
} _RASR_bits;

/* Bit field positions: */
#define RASR_ENABLE_Pos                      0            /*!< Enables this region */
#define RASR_SIZE_Pos                        1            /*!< Indicates the region size. The region size, in bytes, is 2(SIZE+1) */
#define RASR_SRD_Pos                         8            /*!< Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled */
#define RASR_B_Pos                           16           /*!< The MPU Region Attribute field */
#define RASR_C_Pos                           17           /*!< The MPU Region Attribute field */
#define RASR_S_Pos                           18           /*!< The MPU Region Attribute field */
#define RASR_TEX_Pos                         19           /*!< The MPU Region Attribute field */
#define RASR_AP_Pos                          24           /*!< The MPU Region Attribute field */
#define RASR_XN_Pos                          28           /*!< The MPU Region Attribute field */

/* Bit field masks: */
#define RASR_ENABLE_Msk                      0x00000001   /*!< Enables this region */
#define RASR_SIZE_Msk                        0x0000003E   /*!< Indicates the region size. The region size, in bytes, is 2(SIZE+1) */
#define RASR_SRD_Msk                         0x0000FF00   /*!< Subregion Disable. For regions of 256 bytes or larger, each bit of this field controls whether one of the eight equal subregions is enabled */
#define RASR_B_Msk                           0x00010000   /*!< The MPU Region Attribute field */
#define RASR_C_Msk                           0x00020000   /*!< The MPU Region Attribute field */
#define RASR_S_Msk                           0x00040000   /*!< The MPU Region Attribute field */
#define RASR_TEX_Msk                         0x00380000   /*!< The MPU Region Attribute field */
#define RASR_AP_Msk                          0x07000000   /*!< The MPU Region Attribute field */
#define RASR_XN_Msk                          0x10000000   /*!< The MPU Region Attribute field */

/*-- Register map for MPU peripheral -----------------------------------------*/

typedef struct {
    uint32_t Reserved0[868];                                /*!< Reserved */
    union {                                                 /*!< MPU Type Register */
        __I  uint32_t TYPE;                                   /*!< TYPE    : type used for word access */
        __I  _TYPE_bits TYPE_bit;                             /*!< TYPE_bit: structure used for bit access */
    };
    union {                                                 /*!< MPU Control Register */
        __IO uint32_t CTRL;                                   /*!< CTRL    : type used for word access */
        __IO _CTRL_bits CTRL_bit;                             /*!< CTRL_bit: structure used for bit access */
    };
    union {                                                 /*!< MPU Region Number Register */
        __IO uint32_t RNR;                                    /*!< RNR    : type used for word access */
        __IO _RNR_bits RNR_bit;                               /*!< RNR_bit: structure used for bit access */
    };
    union {                                                 /*!< MPU Region Base Address Register */
        __IO uint32_t RBAR;                                   /*!< RBAR    : type used for word access */
        __IO _RBAR_bits RBAR_bit;                             /*!< RBAR_bit: structure used for bit access */
    };
    union {                                                 /*!< MPU Region Attribute and Size Register */
        __IO uint32_t RASR;                                   /*!< RASR    : type used for word access */
        __IO _RASR_bits RASR_bit;                             /*!< RASR_bit: structure used for bit access */
    };
    __IO uint32_t RBAR_A1;                                  /*!< Alias 1 of MPU_RBAR register */
    __IO uint32_t RASR_A1;                                  /*!< Alias 1 of MPU_RASR register */
    __IO uint32_t RBAR_A2;                                  /*!< Alias 2 of MPU_RBAR register */
    __IO uint32_t RASR_A2;                                  /*!< Alias 2 of MPU_RASR register */
    __IO uint32_t RBAR_A3;                                  /*!< Alias 3 of MPU_RBAR register */
    __IO uint32_t RASR_A3;                                  /*!< Alias 3 of MPU_RASR register */
} NT_MPU_TypeDef;

/******************************************************************************/
/*                              FPU registers                                 */
/******************************************************************************/

/*-- FPCCR: Floating-Point Context Control Register --------------------------*/

typedef struct {
    uint32_t LSPACT                            :1;          /*!< Indicates Lazy state preservation is active */
    uint32_t USER                              :1;          /*!< Indicates the privilege level of the software executing when the processor allocated the FP stack frame */
    uint32_t Reserved0                         :1;          /*!< Reserved */
    uint32_t THREAD                            :1;          /*!< Indicates the processor Thread mode when it allocated the FP stack frame */
    uint32_t HFRDY                             :1;          /*!< Indicates whether the software executing when the processor allocated the FP stack frame was ablea to set the HardFault exception to pending */
    uint32_t MMRDY                             :1;          /*!< Indicate Able to set the MemManage exception to pending */
    uint32_t BFRDY                             :1;          /*!< Indicate Able to set the BusFault exception to pending */
    uint32_t Reserved1                         :1;          /*!< Reserved */
    uint32_t MONRDY                            :1;          /*!< Indicate Able to set the DebugMonitor exception to pending */
    uint32_t Reserved2                         :21;         /*!< Reserved */
    uint32_t LSPEN                             :1;          /*!< Enable automatic lazy context save */
    uint32_t ASPEN                             :1;          /*!< Execution of a floating-point instruction sets the CONTROL.FPCA bit to 1 */
} _FPCCR_bits;

/* Bit field positions: */
#define FPCCR_LSPACT_Pos                     0            /*!< Indicates Lazy state preservation is active */
#define FPCCR_USER_Pos                       1            /*!< Indicates the privilege level of the software executing when the processor allocated the FP stack frame */
#define FPCCR_THREAD_Pos                     3            /*!< Indicates the processor Thread mode when it allocated the FP stack frame */
#define FPCCR_HFRDY_Pos                      4            /*!< Indicates whether the software executing when the processor allocated the FP stack frame was ablea to set the HardFault exception to pending */
#define FPCCR_MMRDY_Pos                      5            /*!< Indicate Able to set the MemManage exception to pending */
#define FPCCR_BFRDY_Pos                      6            /*!< Indicate Able to set the BusFault exception to pending */
#define FPCCR_MONRDY_Pos                     8            /*!< Indicate Able to set the DebugMonitor exception to pending */
#define FPCCR_LSPEN_Pos                      30           /*!< Enable automatic lazy context save */
#define FPCCR_ASPEN_Pos                      31           /*!< Execution of a floating-point instruction sets the CONTROL.FPCA bit to 1 */

/* Bit field masks: */
#define FPCCR_LSPACT_Msk                     0x00000001   /*!< Indicates Lazy state preservation is active */
#define FPCCR_USER_Msk                       0x00000002   /*!< Indicates the privilege level of the software executing when the processor allocated the FP stack frame */
#define FPCCR_THREAD_Msk                     0x00000008   /*!< Indicates the processor Thread mode when it allocated the FP stack frame */
#define FPCCR_HFRDY_Msk                      0x00000010   /*!< Indicates whether the software executing when the processor allocated the FP stack frame was ablea to set the HardFault exception to pending */
#define FPCCR_MMRDY_Msk                      0x00000020   /*!< Indicate Able to set the MemManage exception to pending */
#define FPCCR_BFRDY_Msk                      0x00000040   /*!< Indicate Able to set the BusFault exception to pending */
#define FPCCR_MONRDY_Msk                     0x00000100   /*!< Indicate Able to set the DebugMonitor exception to pending */
#define FPCCR_LSPEN_Msk                      0x40000000   /*!< Enable automatic lazy context save */
#define FPCCR_ASPEN_Msk                      0x80000000   /*!< Execution of a floating-point instruction sets the CONTROL.FPCA bit to 1 */

/*-- FPCAR: Floating-Point Context Address Register --------------------------*/

typedef struct {
    uint32_t Reserved0                         :3;          /*!< Reserved */
    uint32_t ADDRESS                           :29;         /*!< The location of the unpopulated floating-point register space allocated on an exception stack frame */
} _FPCAR_bits;

/* Bit field positions: */
#define FPCAR_ADDRESS_Pos                    3            /*!< The location of the unpopulated floating-point register space allocated on an exception stack frame */

/* Bit field masks: */
#define FPCAR_ADDRESS_Msk                    0xFFFFFFF8   /*!< The location of the unpopulated floating-point register space allocated on an exception stack frame */

/*-- FPDSCR: Floating-Point Default Status Control Register ------------------*/

typedef struct {
    uint32_t Reserved0                         :22;         /*!< Reserved */
    uint32_t RMODE                             :2;          /*!< Default value for FPSCR.Rmode */
    uint32_t FZ                                :1;          /*!< Default value for FPSCR.FZ */
    uint32_t DN                                :1;          /*!< Default value for FPSCR.DN */
    uint32_t AHP                               :1;          /*!< Default value for FPSCR.AHP */
    uint32_t Reserved1                         :5;          /*!< Reserved */
} _FPDSCR_bits;

/* Bit field positions: */
#define FPDSCR_RMODE_Pos                     22           /*!< Default value for FPSCR.Rmode */
#define FPDSCR_FZ_Pos                        24           /*!< Default value for FPSCR.FZ */
#define FPDSCR_DN_Pos                        25           /*!< Default value for FPSCR.DN */
#define FPDSCR_AHP_Pos                       26           /*!< Default value for FPSCR.AHP */

/* Bit field masks: */
#define FPDSCR_RMODE_Msk                     0x00C00000   /*!< Default value for FPSCR.Rmode */
#define FPDSCR_FZ_Msk                        0x01000000   /*!< Default value for FPSCR.FZ */
#define FPDSCR_DN_Msk                        0x02000000   /*!< Default value for FPSCR.DN */
#define FPDSCR_AHP_Msk                       0x04000000   /*!< Default value for FPSCR.AHP */

/*-- MVFR0: Media and FP Feature Register 0 ----------------------------------*/

typedef struct {
    uint32_t A_SIMD                            :4;          /*!< Indicates the size of the FP register bank */
    uint32_t SINGLEPREC                        :4;          /*!< Indicates the hardware support for FP single-precision operations */
    uint32_t DOUBLEPREC                        :4;          /*!< Indicates the hardware support for FP double-precision operations */
    uint32_t FPEXCEPT                          :4;          /*!< Indicates whether the FP hardware implementation supports exception trapping */
    uint32_t DIVIDE                            :4;          /*!< Indicates the hardware support for FP divide operations */
    uint32_t SQUAREROOT                        :4;          /*!< Indicates the hardware support for FP square root operations */
    uint32_t SHORTVEC                          :4;          /*!< Indicates the hardware support for FP short vectors */
    uint32_t FPRMODE                           :4;          /*!< Indicates the rounding modes supported by the FP floating-point hardware */
} _MVFR0_bits;

/* Bit field positions: */
#define MVFR0_A_SIMD_Pos                     0            /*!< Indicates the size of the FP register bank */
#define MVFR0_SINGLEPREC_Pos                 4            /*!< Indicates the hardware support for FP single-precision operations */
#define MVFR0_DOUBLEPREC_Pos                 8            /*!< Indicates the hardware support for FP double-precision operations */
#define MVFR0_FPEXCEPT_Pos                   12           /*!< Indicates whether the FP hardware implementation supports exception trapping */
#define MVFR0_DIVIDE_Pos                     16           /*!< Indicates the hardware support for FP divide operations */
#define MVFR0_SQUAREROOT_Pos                 20           /*!< Indicates the hardware support for FP square root operations */
#define MVFR0_SHORTVEC_Pos                   24           /*!< Indicates the hardware support for FP short vectors */
#define MVFR0_FPRMODE_Pos                    28           /*!< Indicates the rounding modes supported by the FP floating-point hardware */

/* Bit field masks: */
#define MVFR0_A_SIMD_Msk                     0x0000000F   /*!< Indicates the size of the FP register bank */
#define MVFR0_SINGLEPREC_Msk                 0x000000F0   /*!< Indicates the hardware support for FP single-precision operations */
#define MVFR0_DOUBLEPREC_Msk                 0x00000F00   /*!< Indicates the hardware support for FP double-precision operations */
#define MVFR0_FPEXCEPT_Msk                   0x0000F000   /*!< Indicates whether the FP hardware implementation supports exception trapping */
#define MVFR0_DIVIDE_Msk                     0x000F0000   /*!< Indicates the hardware support for FP divide operations */
#define MVFR0_SQUAREROOT_Msk                 0x00F00000   /*!< Indicates the hardware support for FP square root operations */
#define MVFR0_SHORTVEC_Msk                   0x0F000000   /*!< Indicates the hardware support for FP short vectors */
#define MVFR0_FPRMODE_Msk                    0xF0000000   /*!< Indicates the rounding modes supported by the FP floating-point hardware */

/*-- MVFR1: Media and FP Feature Register 1 ----------------------------------*/

typedef struct {
    uint32_t FTZMODE                           :4;          /*!< Indicates whether the FP hardware implementation supports only the Flush-to-Zero mode of operation */
    uint32_t DNANMODE                          :4;          /*!< Indicates whether the FP hardware implementation supports only the Default NaN mode */
    uint32_t Reserved0                         :16;         /*!< Reserved */
    uint32_t FPHPFP                            :4;          /*!< Indicates whether the FP supports half-precision floating-point conversion operations */
    uint32_t FPFUSEMAC                         :4;          /*!< Indicates whether the FP supports fused multiply accumulate operations */
} _MVFR1_bits;

/* Bit field positions: */
#define MVFR1_FTZMODE_Pos                    0            /*!< Indicates whether the FP hardware implementation supports only the Flush-to-Zero mode of operation */
#define MVFR1_DNANMODE_Pos                   4            /*!< Indicates whether the FP hardware implementation supports only the Default NaN mode */
#define MVFR1_FPHPFP_Pos                     24           /*!< Indicates whether the FP supports half-precision floating-point conversion operations */
#define MVFR1_FPFUSEMAC_Pos                  28           /*!< Indicates whether the FP supports fused multiply accumulate operations */

/* Bit field masks: */
#define MVFR1_FTZMODE_Msk                    0x0000000F   /*!< Indicates whether the FP hardware implementation supports only the Flush-to-Zero mode of operation */
#define MVFR1_DNANMODE_Msk                   0x000000F0   /*!< Indicates whether the FP hardware implementation supports only the Default NaN mode */
#define MVFR1_FPHPFP_Msk                     0x0F000000   /*!< Indicates whether the FP supports half-precision floating-point conversion operations */
#define MVFR1_FPFUSEMAC_Msk                  0xF0000000   /*!< Indicates whether the FP supports fused multiply accumulate operations */

/*-- Register map for FPU peripheral -----------------------------------------*/

typedef struct {
    union {                                                 /*!< Floating-Point Context Control Register */
        __IO uint32_t FPCCR;                                  /*!< FPCCR    : type used for word access */
        __IO _FPCCR_bits FPCCR_bit;                           /*!< FPCCR_bit: structure used for bit access */
    };
    union {                                                 /*!< Floating-Point Context Address Register */
        __IO uint32_t FPCAR;                                  /*!< FPCAR    : type used for word access */
        __IO _FPCAR_bits FPCAR_bit;                           /*!< FPCAR_bit: structure used for bit access */
    };
    union {                                                 /*!< Floating-Point Default Status Control Register */
        __IO uint32_t FPDSCR;                                 /*!< FPDSCR    : type used for word access */
        __IO _FPDSCR_bits FPDSCR_bit;                         /*!< FPDSCR_bit: structure used for bit access */
    };
    union {                                                 /*!< Media and FP Feature Register 0 */
        __I  uint32_t MVFR0;                                  /*!< MVFR0    : type used for word access */
        __I  _MVFR0_bits MVFR0_bit;                           /*!< MVFR0_bit: structure used for bit access */
    };
    union {                                                 /*!< Media and FP Feature Register 1 */
        __I  uint32_t MVFR1;                                  /*!< MVFR1    : type used for word access */
        __I  _MVFR1_bits MVFR1_bit;                           /*!< MVFR1_bit: structure used for bit access */
    };
} NT_FPU_TypeDef;

/******************************************************************************/
/*                          Peripheral memory map                             */
/******************************************************************************/

#define NT_ADC_BASE              (0x80000000UL)
#define NT_GPIOA_BASE            (0x80010000UL)
#define NT_GPIOB_BASE            (0x80011000UL)
#define NT_GPIOC_BASE            (0x80012000UL)
#define NT_GPIOD_BASE            (0x80013000UL)
#define NT_GPIOE_BASE            (0x80014000UL)
#define NT_GPIOF_BASE            (0x80015000UL)
#define NT_GPIOG_BASE            (0x80016000UL)
#define NT_GPIOH_BASE            (0x80017000UL)
#define NT_COMMON_REG_BASE       (0x80030000UL)
#define NT_CAN_BASE              (0x80070000UL)
#define NT_ETHERNET_BASE         (0x80080000UL)
#define NT_USBHost_BASE          (0x80090000UL)
#define NT_USBDevice_BASE        (0x80090000UL)
#define NT_WDT_BASE              (0xA0000000UL)
#define NT_I2C0_BASE             (0xA0001000UL)
#define NT_I2C1_BASE             (0xA0002000UL)
#define NT_TIMER0_BASE           (0xA0003000UL)
#define NT_TIMER1_BASE           (0xA0004000UL)
#define NT_TIMER2_BASE           (0xA0005000UL)
#define NT_DMA_BASE              (0xA0006000UL)
#define NT_UART0_BASE            (0xA0007000UL)
#define NT_UART1_BASE            (0xA0008000UL)
#define NT_UART2_BASE            (0xA0009000UL)
#define NT_UART3_BASE            (0xA000A000UL)
#define NT_PWM0_BASE             (0xA000B000UL)
#define NT_PWM1_BASE             (0xA000C000UL)
#define NT_PWM2_BASE             (0xA000D000UL)
#define NT_PWM3_BASE             (0xA000E000UL)
#define NT_PWM4_BASE             (0xA000F000UL)
#define NT_PWM5_BASE             (0xA0010000UL)
#define NT_PWM6_BASE             (0xA0011000UL)
#define NT_PWM7_BASE             (0xA0012000UL)
#define NT_PWM8_BASE             (0xA0013000UL)
#define NT_CAP0_BASE             (0xA0014000UL)
#define NT_CAP1_BASE             (0xA0015000UL)
#define NT_CAP2_BASE             (0xA0016000UL)
#define NT_CAP3_BASE             (0xA0017000UL)
#define NT_CAP4_BASE             (0xA0018000UL)
#define NT_CAP5_BASE             (0xA0019000UL)
#define NT_QEP0_BASE             (0xA001A000UL)
#define NT_QEP1_BASE             (0xA001B000UL)
#define NT_BOOTFLASH_BASE        (0xA001C000UL)
#define NT_CMP_BASE              (0xA001D000UL)
#define NT_SPI0_BASE             (0xA001E000UL)
#define NT_SPI1_BASE             (0xA001F000UL)
#define NT_SPI2_BASE             (0xA0020000UL)
#define NT_SPI3_BASE             (0xA0021000UL)
#define NT_USERFLASH_BASE        (0xA0022000UL)
#define NT_RTC_BASE              (0xA0023000UL)
#define NT_SYSTEM_BASE           (0xE000E000UL)
#define NT_NVIC_BASE             (0xE000E000UL)
#define NT_MPU_BASE              (0xE000E000UL)
#define NT_FPU_BASE              (0xE000EF34UL)

/******************************************************************************/
/*                          Peripheral declaration                            */
/******************************************************************************/

#define NT_ADC                   ((NT_ADC_TypeDef         *) NT_ADC_BASE)
#define NT_GPIOA                 ((NT_GPIO_TypeDef        *) NT_GPIOA_BASE)
#define NT_GPIOB                 ((NT_GPIO_TypeDef        *) NT_GPIOB_BASE)
#define NT_GPIOC                 ((NT_GPIO_TypeDef        *) NT_GPIOC_BASE)
#define NT_GPIOD                 ((NT_GPIO_TypeDef        *) NT_GPIOD_BASE)
#define NT_GPIOE                 ((NT_GPIO_TypeDef        *) NT_GPIOE_BASE)
#define NT_GPIOF                 ((NT_GPIO_TypeDef        *) NT_GPIOF_BASE)
#define NT_GPIOG                 ((NT_GPIO_TypeDef        *) NT_GPIOG_BASE)
#define NT_GPIOH                 ((NT_GPIO_TypeDef        *) NT_GPIOH_BASE)
#define NT_COMMON_REG            ((NT_COMMON_REG_TypeDef  *) NT_COMMON_REG_BASE)
#define NT_CAN                   ((NT_CAN_TypeDef         *) NT_CAN_BASE)
#define NT_ETHERNET              ((NT_ETHERNET_TypeDef    *) NT_ETHERNET_BASE)
#define NT_USBHost               ((NT_USBHost_TypeDef     *) NT_USBHost_BASE)
#define NT_USBDevice             ((NT_USBDevice_TypeDef   *) NT_USBDevice_BASE)
#define NT_WDT                   ((NT_WDT_TypeDef         *) NT_WDT_BASE)
#define NT_I2C0                  ((NT_I2C_TypeDef         *) NT_I2C0_BASE)
#define NT_I2C1                  ((NT_I2C_TypeDef         *) NT_I2C1_BASE)
#define NT_TIMER0                ((NT_TIMER_TypeDef       *) NT_TIMER0_BASE)
#define NT_TIMER1                ((NT_TIMER_TypeDef       *) NT_TIMER1_BASE)
#define NT_TIMER2                ((NT_TIMER_TypeDef       *) NT_TIMER2_BASE)
#define NT_DMA                   ((NT_DMA_TypeDef         *) NT_DMA_BASE)
#define NT_UART0                 ((NT_UART_TypeDef        *) NT_UART0_BASE)
#define NT_UART1                 ((NT_UART_TypeDef        *) NT_UART1_BASE)
#define NT_UART2                 ((NT_UART_TypeDef        *) NT_UART2_BASE)
#define NT_UART3                 ((NT_UART_TypeDef        *) NT_UART3_BASE)
#define NT_PWM0                  ((NT_PWM_TypeDef         *) NT_PWM0_BASE)
#define NT_PWM1                  ((NT_PWM_TypeDef         *) NT_PWM1_BASE)
#define NT_PWM2                  ((NT_PWM_TypeDef         *) NT_PWM2_BASE)
#define NT_PWM3                  ((NT_PWM_TypeDef         *) NT_PWM3_BASE)
#define NT_PWM4                  ((NT_PWM_TypeDef         *) NT_PWM4_BASE)
#define NT_PWM5                  ((NT_PWM_TypeDef         *) NT_PWM5_BASE)
#define NT_PWM6                  ((NT_PWM_TypeDef         *) NT_PWM6_BASE)
#define NT_PWM7                  ((NT_PWM_TypeDef         *) NT_PWM7_BASE)
#define NT_PWM8                  ((NT_PWM_TypeDef         *) NT_PWM8_BASE)
#define NT_CAP0                  ((NT_CAP_TypeDef         *) NT_CAP0_BASE)
#define NT_CAP1                  ((NT_CAP_TypeDef         *) NT_CAP1_BASE)
#define NT_CAP2                  ((NT_CAP_TypeDef         *) NT_CAP2_BASE)
#define NT_CAP3                  ((NT_CAP_TypeDef         *) NT_CAP3_BASE)
#define NT_CAP4                  ((NT_CAP_TypeDef         *) NT_CAP4_BASE)
#define NT_CAP5                  ((NT_CAP_TypeDef         *) NT_CAP5_BASE)
#define NT_QEP0                  ((NT_QEP_TypeDef         *) NT_QEP0_BASE)
#define NT_QEP1                  ((NT_QEP_TypeDef         *) NT_QEP1_BASE)
#define NT_BOOTFLASH             ((NT_BOOTFLASH_TypeDef   *) NT_BOOTFLASH_BASE)
#define NT_CMP                   ((NT_CMP_TypeDef         *) NT_CMP_BASE)
#define NT_SPI0                  ((NT_SPI_TypeDef         *) NT_SPI0_BASE)
#define NT_SPI1                  ((NT_SPI_TypeDef         *) NT_SPI1_BASE)
#define NT_SPI2                  ((NT_SPI_TypeDef         *) NT_SPI2_BASE)
#define NT_SPI3                  ((NT_SPI_TypeDef         *) NT_SPI3_BASE)
#define NT_USERFLASH             ((NT_USERFLASH_TypeDef   *) NT_USERFLASH_BASE)
#define NT_RTC                   ((NT_RTC_TypeDef         *) NT_RTC_BASE)
#define NT_SYSTEM                ((NT_SYSTEM_TypeDef      *) NT_SYSTEM_BASE)
#define NT_NVIC                  ((NT_NVIC_TypeDef        *) NT_NVIC_BASE)
#define NT_MPU                   ((NT_MPU_TypeDef         *) NT_MPU_BASE)
#define NT_FPU                   ((NT_FPU_TypeDef         *) NT_FPU_BASE)

#ifdef __cplusplus
}
#endif

#endif /* __K1921VK01T_H */

/******************* (C) COPYRIGHT 2015 Angioscan Electronics ******************
*
* END OF FILE K1921VK01T.h */


