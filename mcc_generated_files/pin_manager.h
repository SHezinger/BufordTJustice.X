/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.5
        Device            :  PIC18F46K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_A aliases
#define IO_A_TRIS                 TRISAbits.TRISA0
#define IO_A_LAT                  LATAbits.LATA0
#define IO_A_PORT                 PORTAbits.RA0
#define IO_A_ANS                  ANSELAbits.ANSA0
#define IO_A_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_A_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_A_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_A_GetValue()           PORTAbits.RA0
#define IO_A_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_A_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_A_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define IO_A_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_B aliases
#define IO_B_TRIS                 TRISAbits.TRISA1
#define IO_B_LAT                  LATAbits.LATA1
#define IO_B_PORT                 PORTAbits.RA1
#define IO_B_ANS                  ANSELAbits.ANSA1
#define IO_B_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_B_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_B_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_B_GetValue()           PORTAbits.RA1
#define IO_B_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_B_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_B_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_B_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_C aliases
#define IO_C_TRIS                 TRISAbits.TRISA2
#define IO_C_LAT                  LATAbits.LATA2
#define IO_C_PORT                 PORTAbits.RA2
#define IO_C_ANS                  ANSELAbits.ANSA2
#define IO_C_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_C_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_C_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_C_GetValue()           PORTAbits.RA2
#define IO_C_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_C_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_C_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_C_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_D aliases
#define IO_D_TRIS                 TRISAbits.TRISA3
#define IO_D_LAT                  LATAbits.LATA3
#define IO_D_PORT                 PORTAbits.RA3
#define IO_D_ANS                  ANSELAbits.ANSA3
#define IO_D_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_D_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_D_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_D_GetValue()           PORTAbits.RA3
#define IO_D_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_D_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_D_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_D_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IO_E aliases
#define IO_E_TRIS                 TRISAbits.TRISA4
#define IO_E_LAT                  LATAbits.LATA4
#define IO_E_PORT                 PORTAbits.RA4
#define IO_E_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_E_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_E_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_E_GetValue()           PORTAbits.RA4
#define IO_E_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_E_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set IO_F aliases
#define IO_F_TRIS                 TRISAbits.TRISA5
#define IO_F_LAT                  LATAbits.LATA5
#define IO_F_PORT                 PORTAbits.RA5
#define IO_F_ANS                  ANSELAbits.ANSA5
#define IO_F_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_F_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_F_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_F_GetValue()           PORTAbits.RA5
#define IO_F_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_F_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_F_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_F_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_G aliases
#define IO_G_TRIS                 TRISAbits.TRISA6
#define IO_G_LAT                  LATAbits.LATA6
#define IO_G_PORT                 PORTAbits.RA6
#define IO_G_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_G_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_G_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_G_GetValue()           PORTAbits.RA6
#define IO_G_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_G_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set IO_H aliases
#define IO_H_TRIS                 TRISAbits.TRISA7
#define IO_H_LAT                  LATAbits.LATA7
#define IO_H_PORT                 PORTAbits.RA7
#define IO_H_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IO_H_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IO_H_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IO_H_GetValue()           PORTAbits.RA7
#define IO_H_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IO_H_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set IO_C0 aliases
#define IO_C0_TRIS                 TRISCbits.TRISC0
#define IO_C0_LAT                  LATCbits.LATC0
#define IO_C0_PORT                 PORTCbits.RC0
#define IO_C0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_C0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_C0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_C0_GetValue()           PORTCbits.RC0
#define IO_C0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_C0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set IO_C1 aliases
#define IO_C1_TRIS                 TRISCbits.TRISC1
#define IO_C1_LAT                  LATCbits.LATC1
#define IO_C1_PORT                 PORTCbits.RC1
#define IO_C1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_C1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_C1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_C1_GetValue()           PORTCbits.RC1
#define IO_C1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_C1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set IO_EN573 aliases
#define IO_EN573_TRIS                 TRISCbits.TRISC2
#define IO_EN573_LAT                  LATCbits.LATC2
#define IO_EN573_PORT                 PORTCbits.RC2
#define IO_EN573_ANS                  ANSELCbits.ANSC2
#define IO_EN573_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_EN573_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_EN573_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_EN573_GetValue()           PORTCbits.RC2
#define IO_EN573_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_EN573_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_EN573_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_EN573_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set IO_DP aliases
#define IO_DP_TRIS                 TRISDbits.TRISD0
#define IO_DP_LAT                  LATDbits.LATD0
#define IO_DP_PORT                 PORTDbits.RD0
#define IO_DP_ANS                  ANSELDbits.ANSD0
#define IO_DP_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_DP_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_DP_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_DP_GetValue()           PORTDbits.RD0
#define IO_DP_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_DP_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_DP_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define IO_DP_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set IO_K1 aliases
#define IO_K1_TRIS                 TRISDbits.TRISD1
#define IO_K1_LAT                  LATDbits.LATD1
#define IO_K1_PORT                 PORTDbits.RD1
#define IO_K1_ANS                  ANSELDbits.ANSD1
#define IO_K1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_K1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_K1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_K1_GetValue()           PORTDbits.RD1
#define IO_K1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_K1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_K1_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_K1_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set IO_K2 aliases
#define IO_K2_TRIS                 TRISDbits.TRISD2
#define IO_K2_LAT                  LATDbits.LATD2
#define IO_K2_PORT                 PORTDbits.RD2
#define IO_K2_ANS                  ANSELDbits.ANSD2
#define IO_K2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_K2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_K2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_K2_GetValue()           PORTDbits.RD2
#define IO_K2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_K2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_K2_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_K2_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set IO_K3 aliases
#define IO_K3_TRIS                 TRISDbits.TRISD3
#define IO_K3_LAT                  LATDbits.LATD3
#define IO_K3_PORT                 PORTDbits.RD3
#define IO_K3_ANS                  ANSELDbits.ANSD3
#define IO_K3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_K3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_K3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_K3_GetValue()           PORTDbits.RD3
#define IO_K3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_K3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_K3_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define IO_K3_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set IO_K4 aliases
#define IO_K4_TRIS                 TRISDbits.TRISD4
#define IO_K4_LAT                  LATDbits.LATD4
#define IO_K4_PORT                 PORTDbits.RD4
#define IO_K4_ANS                  ANSELDbits.ANSD4
#define IO_K4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_K4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_K4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_K4_GetValue()           PORTDbits.RD4
#define IO_K4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_K4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_K4_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define IO_K4_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IO_K5 aliases
#define IO_K5_TRIS                 TRISDbits.TRISD5
#define IO_K5_LAT                  LATDbits.LATD5
#define IO_K5_PORT                 PORTDbits.RD5
#define IO_K5_ANS                  ANSELDbits.ANSD5
#define IO_K5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_K5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_K5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_K5_GetValue()           PORTDbits.RD5
#define IO_K5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_K5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_K5_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define IO_K5_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IO_K6 aliases
#define IO_K6_TRIS                 TRISDbits.TRISD6
#define IO_K6_LAT                  LATDbits.LATD6
#define IO_K6_PORT                 PORTDbits.RD6
#define IO_K6_ANS                  ANSELDbits.ANSD6
#define IO_K6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_K6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_K6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_K6_GetValue()           PORTDbits.RD6
#define IO_K6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_K6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_K6_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define IO_K6_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IO_K7 aliases
#define IO_K7_TRIS                 TRISDbits.TRISD7
#define IO_K7_LAT                  LATDbits.LATD7
#define IO_K7_PORT                 PORTDbits.RD7
#define IO_K7_ANS                  ANSELDbits.ANSD7
#define IO_K7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_K7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_K7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_K7_GetValue()           PORTDbits.RD7
#define IO_K7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_K7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_K7_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define IO_K7_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/