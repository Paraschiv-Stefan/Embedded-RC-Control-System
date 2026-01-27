 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include<stdio.h>
  void UART1_Write_Text(const char *text)
     {
         while(*text != '\0')
         {
             while(!EUSART1_IsTxReady());
             EUSART1_Write(*text++);
         }
     }
/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    EUSART1_Initialize();
    EUSART1_Enable();
    EUSART1_TransmitEnable();
    EUSART1_ReceiveEnable();
    

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 
    ADC_Initialize();
    ADC_Enable();
    //Initialization LED(ON-OFF-ON)
    IO_RD6_SetHigh(); 
    __delay_ms(2500);
    IO_RD6_SetLow(); 
    __delay_ms(2500);
    IO_RD6_SetHigh(); 
      

    
    while(1)
    {



        adc_result_t value0, value1, value2, value3,value4, value5;

        // --- Read RA0 ---
        ADC_ChannelSelect(IO_RA0);
        ADC_ConversionStart();
        while (!ADC_IsConversionDone());
        value0 = ADC_ConversionResultGet();

        // --- Read RA1 ---
        ADC_ChannelSelect(IO_RA1);
        ADC_ConversionStart();
        while (!ADC_IsConversionDone());
        value1 = ADC_ConversionResultGet();

        // --- Read RA5 ---
        ADC_ChannelSelect(IO_RA5);
        ADC_ConversionStart();
        while (!ADC_IsConversionDone());
        value2 = ADC_ConversionResultGet();
        
         // --- Read RB3 ---
        ADC_ChannelSelect(IO_RB3);
        ADC_ConversionStart();
        while (!ADC_IsConversionDone());
        value3 = ADC_ConversionResultGet();
        
        // --- Read RE0 ---
        ADC_ChannelSelect(IO_RA2);
        ADC_ConversionStart();
        while (!ADC_IsConversionDone());
        value4 = ADC_ConversionResultGet();
        
        // --- Read RE1 ---
        ADC_ChannelSelect(IO_RA3);
        ADC_ConversionStart();
        while (!ADC_IsConversionDone());
        value5 = ADC_ConversionResultGet();
        
            char msg[64];
         sprintf(msg,
             "%u,%u,%u,%u,%u,%u\n",
             value0, value1, value2, value3, value4, value5
         );

         UART1_Write_Text(msg);

        //Threshold logic test
         /*
        if (value4> 550 || value5> 550 || value3> 550 || value2> 550 || value1> 550 || value0> 550)
        {
            IO_RD6_SetHigh();
        } else {
            IO_RD6_SetLow();
        }
       */



        __delay_ms(100);
    }

}