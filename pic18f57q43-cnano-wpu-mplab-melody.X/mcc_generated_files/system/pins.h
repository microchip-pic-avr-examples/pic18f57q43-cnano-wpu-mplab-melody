/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

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

#ifndef PINS_H
#define PINS_H

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

// get/set RA1 aliases
#define SW1_TRIS                 TRISAbits.TRISA1
#define SW1_LAT                  LATAbits.LATA1
#define SW1_PORT                 PORTAbits.RA1
#define SW1_WPU                  WPUAbits.WPUA1
#define SW1_OD                   ODCONAbits.ODCA1
#define SW1_ANS                  ANSELAbits.ANSELA1
#define SW1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define SW1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define SW1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define SW1_GetValue()           PORTAbits.RA1
#define SW1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define SW1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define SW1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define SW1_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define SW1_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define SW1_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define SW2_TRIS                 TRISAbits.TRISA2
#define SW2_LAT                  LATAbits.LATA2
#define SW2_PORT                 PORTAbits.RA2
#define SW2_WPU                  WPUAbits.WPUA2
#define SW2_OD                   ODCONAbits.ODCA2
#define SW2_ANS                  ANSELAbits.ANSELA2
#define SW2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SW2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SW2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SW2_GetValue()           PORTAbits.RA2
#define SW2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SW2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SW2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SW2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SW2_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define SW2_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define SW2_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define SW2_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA5 aliases
#define LED1_TRIS                 TRISAbits.TRISA5
#define LED1_LAT                  LATAbits.LATA5
#define LED1_PORT                 PORTAbits.RA5
#define LED1_WPU                  WPUAbits.WPUA5
#define LED1_OD                   ODCONAbits.ODCA5
#define LED1_ANS                  ANSELAbits.ANSELA5
#define LED1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED1_GetValue()           PORTAbits.RA5
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RF3 aliases
#define LED0_TRIS                 TRISFbits.TRISF3
#define LED0_LAT                  LATFbits.LATF3
#define LED0_PORT                 PORTFbits.RF3
#define LED0_WPU                  WPUFbits.WPUF3
#define LED0_OD                   ODCONFbits.ODCF3
#define LED0_ANS                  ANSELFbits.ANSELF3
#define LED0_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED0_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED0_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED0_GetValue()           PORTFbits.RF3
#define LED0_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED0_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

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



#endif // PINS_H
/**
 End of File
*/