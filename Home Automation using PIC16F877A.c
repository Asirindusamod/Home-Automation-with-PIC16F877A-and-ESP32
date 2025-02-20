
#define _XTAL_FREQ             20000000
#include <xc.h>
#include "config.h"
#include "I2C.h"

//// Configuration settings for PIC16F877A
//#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
//#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
//#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
//#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
//#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has digital I/O function; HV on MCLR must be used for programming)
//#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
//#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)
//
//#define _XTAL_FREQ 20000000    // Define oscillator frequency (20MHz in this case)

void main(void) {
    TRISB0 = 1; // Configure RB0, RB1, RB2, RB3 as inputs
    TRISB1 = 1;
    TRISB2 = 1;
    TRISB3 = 1;
    TRISB4 = 1;
    
    TRISD0 = 0; // Configure RD0, RD1, RD2, RD3 as outputs
    TRISD1 = 0;
    TRISD2 = 0;
    TRISD3 = 0;
    
        I2C__Init();
        LCD_Init(0x4E); 
        LCD_Clear();
        LCD_Set_Cursor(1, 1);
        LCD_Write_String("HOME AUTOMATION ");
        LCD_Set_Cursor(2, 5);
        LCD_Write_String("SYSTEM");
         __delay_ms(3000);
        LCD_Clear();
       

    while (1) {
        
        int input0 = RB0;
        int input1 = RB1;
        int input2 = RB2;
        int input3 = RB3;
        int input4 = RB4;
        
        if(input4==1){
              LCD_Set_Cursor(1, 1);
        LCD_Write_String("WIFI ");
        LCD_Set_Cursor(2, 5);
        LCD_Write_String("ON");
         __delay_ms(3000);
        LCD_Clear();
        
        }else {
                 LCD_Set_Cursor(1, 1);
        LCD_Write_String("WIFI ");
        LCD_Set_Cursor(2, 5);
        LCD_Write_String("OFF");
         __delay_ms(3000);
        LCD_Clear();
            
        }
      
        
        if (input0 == 1) {
           
            
         RD0 = 1; 
        LCD_Set_Cursor(1, 1);
        LCD_Write_String("L1:ON ");
         __delay_ms(100);
            
            
        } else {
       
            
            RD0 = 0; 
        LCD_Set_Cursor(1, 1);
        LCD_Write_String("L1:OFF");
          __delay_ms(100);
         
        }

        if (input1 == 1) {
           
            RD1 = 1;
        LCD_Set_Cursor(1, 9);
        LCD_Write_String("L2:ON ");
         __delay_ms(100);
         
         
        } else {
           
            RD1 = 0; 
        LCD_Set_Cursor(1, 9);
        LCD_Write_String("L2:OFF");
        
          __delay_ms(100);
        }

        if (input2 == 1) {
            
            RD2 = 1; 
        LCD_Set_Cursor(2, 1);
        LCD_Write_String("L3:ON ");
         __delay_ms(100);
        } else {
            // Digital input channel 2 is low (0)
            // Take some other action if needed
          
            
            RD2 = 0;
        LCD_Set_Cursor(2, 1);
        LCD_Write_String("L3:OFF");
          __delay_ms(100);
        }

        if (input3 == 1) {
           
            RD3 = 1; 
        LCD_Set_Cursor(2, 9);
        LCD_Write_String("L4:ON ");
         __delay_ms(100);
         
            
        } else {
           
         RD3 = 0;  
        LCD_Set_Cursor(2, 9);
        LCD_Write_String("L4:OFF");
        
          __delay_ms(100);
        }
    }

    return;
}

