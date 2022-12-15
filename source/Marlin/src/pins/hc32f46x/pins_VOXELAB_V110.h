/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/**
 * Voxelab V1.1.0 H32 (HC32F460PETB) board pin assignments - This board is commonly found in the Aquila C2 with H32 chip
 */

#ifndef HC32F46x
  #error "Oops! Select an HC32F46x board in 'options > c/c++->defines.'"
#endif

#if defined(CR10_STOCKDISPLAY) && !defined RET6_12864_LCD && !definedVET6_12864_LCD
  #error "Define RET6_12864_LCD or VET6_12864_LCD to select pins for CR10_STOCKDISPLAY with the Creality V4 controller."
#endif

#if HOTENDS > 1 || E_STEPPERS > 1
  #error "Aquila C2 H32 board only supports one hotend / E-stepper. Comment out this line to continue."
#endif

#define BOARD_INFO_NAME      "Voxlab V1.1.0 H32"
#define DEFAULT_MACHINE_NAME "Voxelab H32"



#define BOARD_NO_NATIVE_USB
/* LED0 Port/Pin definition */
#define  LED0          PA3 // TEST
/*
 * SPI3 Pins
 */
#define SPI_NSS			PB15  //SPI3_NSS
#define SPI_SCK                  	PB14 // SPI3_CLK
#define SPI_MISO			PB13// SPI3_MISO
#define SPI_MOSI			PB12 // SPI3_MOSI
/*
 * SDIO Pins
 */
#define BOARD_SDIO_D0 			PC8
#define BOARD_SDIO_D1 			PC9
#define BOARD_SDIO_D2 			PC10
#define BOARD_SDIO_D3 			PC11
#define BOARD_SDIO_CLK 			PC12
#define BOARD_SDIO_CMD 			PD2
#define BOARD_SDIO_DET 			PA10

// USARTS

#define BOARD_USART2_TX_PIN     PA9
#define BOARD_USART2_RX_PIN     PA15

#define BOARD_USART1_TX_PIN     PC0
#define BOARD_USART1_RX_PIN     PC1
// EEPROM
//


//
// EEPROM
//
  #define IIC_BL24CXX_EEPROM                      // EEPROM on I2C-0
  //#define SDCARD_EEPROM_EMULATION

#ifdef IIC_BL24CXX_EEPROM
#define IIC_EEPROM_SDA       PA11
#define IIC_EEPROM_SCL       PA12
  #define MARLIN_EEPROM_SIZE               0x800  // 2Kb (24C16)
#endif

//
// Servos
//
#ifndef SERVO0_PIN
#define SERVO0_PIN		 PB1  // BLTouch OUT PIN
#endif

//
// Limit Switches
//
#define X_STOP_PIN                          PA6
#define Y_STOP_PIN                          PA7
#define Z_STOP_PIN                          PC4
//#define X_MAX_PIN          PE12
//#define Y_MAX_PIN          PE13
//#define Z_MAX_PIN          PE14

#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN                   PB0   // BLTouch IN
#endif

//
// Filament Runout Sensor
//
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN                    PA4   // "Pulled-high"
#endif


//
// Steppers
//
#define X_ENABLE_PIN       PC3
#define X_STEP_PIN         PC2
#define X_DIR_PIN          PB9

#define Y_ENABLE_PIN       PC3
#define Y_STEP_PIN         PB8
#define Y_DIR_PIN          PB7

#define Z_ENABLE_PIN       PC3
#define Z_STEP_PIN         PB6
#define Z_DIR_PIN          PB5

#define E0_ENABLE_PIN      PC3
#define E0_STEP_PIN        PB4
#define E0_DIR_PIN         PB3

//
// Temperature Sensors
//
#define TEMP_0_PIN		PA5   // HEATER1 
#define TEMP_BED_PIN       PA4   // HOT BED 
#define  ADC_CHANNEL_COUNT 2u

//
// Heaters / Fans
//
#define HEATER_0_PIN                        PA1   // HEATER1
#define HEATER_BED_PIN                      PA0   // HOT BED

#ifndef FAN_PIN
#define FAN_PIN                             PA2   // FAN
#endif
#if PIN_EXISTS(FAN)
  #define FAN_SOFT_PWM
#endif

//
// SD Card
//
#define SD_DETECT_PIN                       PA10
#define SDCARD_CONNECTION                ONBOARD
#define ONBOARD_SPI_DEVICE                     1
#define ONBOARD_SD_CS_PIN                   PC15   // SDSS
#define SDIO_SUPPORT
#define NO_SD_HOST_DRIVE                          // This board's SD is only seen by the printer


#if ENABLED(RET6_12864_LCD)

  /* RET6 12864 LCD */
#define LCD_PINS_RS 	  	 PB12//RS(CS)
#define LCD_PINS_ENABLE    PB15// RW(SID)
#define LCD_PINS_D4 	   PB13//  E(SCLK)
  
#define BTN_ENC 		   PB1	//SW-3
#define BTN_EN1 		   PC6	// SW-2(TX)
#define BTN_EN2 		   PB14	// SW-1
  
#define BEEPER_PIN		   PB0 //BEEP
#elif ENABLED(VET6_12864_LCD)

  /* VET6 12864 LCD */
  #define LCD_PINS_RS                       PA4
  #define LCD_PINS_ENABLE                   PA7
  #define LCD_PINS_D4                       PA5

  #define BTN_ENC                           PC5
  #define BTN_EN1                           PB10
  #define BTN_EN2                           PA6

#elif ENABLED(DWIN_CREALITY_LCD)

  // RET6 DWIN ENCODER LCD
  #define BTN_ENC                           PB14
  #define BTN_EN1                           PB15
  #define BTN_EN2                           PB12

  //#define LCD_LED_PIN                     PB2
  #ifndef BEEPER_PIN
    #define BEEPER_PIN                      PB13
    #undef SPEAKER
  #endif

#elif ENABLED(DWIN_VET6_CREALITY_LCD)

  // VET6 DWIN ENCODER LCD
  #define BTN_ENC                           PA6
  #define BTN_EN1                           PA7
  #define BTN_EN2                           PA4

  #define BEEPER_PIN                        PA5

#endif

