 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_FEATHER52840_
#define _VARIANT_FEATHER52840_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (48)
#define NUM_DIGITAL_PINS     (48)
#define NUM_ANALOG_INPUTS    (3)
#define NUM_ANALOG_OUTPUTS   (0)

// NOTE:
//
// BATTERY VOLTAGE IS READ VIA VDDH/5 BY CALLING
//
// analogReadVDDHDIV5() // returns uint32_t

// 3V3 Regulator Disable
#define PIN_EXT_VCC          (13) // EXT_VCC is P0.13 (set low to disable 3v3)
#define EXT_VCC              (PIN_EXT_VCC)

// LEDs
#define PIN_LED              (15) // USR LED is P0.15
#define LED_PWR              (PINS_COUNT) // no LED_PWR
#define PIN_NEOPIXEL         (PINS_COUNT) // no neopixel
#define NEOPIXEL_NUM         0
#define LED_BLUE             PIN_LED // required by bluefruit library

#define LED_BUILTIN          PIN_LED

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Buttons
 */
#define PIN_BUTTON1          (PINS_COUNT) // no button


// P identifiers for the digital pins
#define PIN_002 (2)  // P0.02 (D19, A0)
#define PIN_006 (6)  // P0.06 (D1, TX)
#define PIN_008 (8)  // P0.08 (D0, RX)
#define PIN_009 (9)  // P0.09 (D10)
#define PIN_010 (10) // P0.10 (D16)
#define PIN_011 (11) // P0.11 (D7)
#define PIN_013 (13) // P0.13 (EXT_VCC)
#define PIN_015 (15) // P0.15 (D17, LED_BUILTIN)
#define PIN_017 (17) // P0.17 (D2, SDA)
#define PIN_020 (20) // P0.20 (D3, SCL)
#define PIN_022 (22) // P0.22 (D4, SCLK)
#define PIN_024 (24) // P0.24 (D5, MISO)
#define PIN_029 (29) // P0.29 (D20, A1)
#define PIN_031 (31) // P0.31 (D21, A2)
#define PIN_100 (32) // P1.00 (D6, MOSI)
#define PIN_101 (33) // P1.01 (D11)
#define PIN_102 (34) // P1.02 (D12)
#define PIN_104 (36) // P1.04 (D8)
#define PIN_106 (38) // P1.06 (D9)
#define PIN_107 (39) // P1.07 (D13)
#define PIN_111 (43) // P1.11 (D14)
#define PIN_113 (45) // P1.13 (D15)


// Digital PINs

// left side (top to bottom)
#define D0 PIN_008 // P0.08 (RX)
#define D1 PIN_006 // P0.06 (TX)
#define D2 PIN_017 // P0.17 (SDA)
#define D3 PIN_020 // P0.20 (SCL)
#define D4 PIN_022 // P0.22 (SCLK)
#define D5 PIN_024 // P0.24 (MISO)
#define D6 PIN_100 // P1.00 (MOSI)
#define D7 PIN_011 // P0.11
#define D8 PIN_104 // P1.04
#define D9 PIN_106 // P1.06

// right side (bottom to top)
#define D10 PIN_009 // P0.09 (A10)

//extra center pins (left to right)
#define D11 PIN_101 // P1.01
#define D12 PIN_102 // P1.02
#define D13 PIN_107 // P1.07

// right side (bottom to top)
#define D14 PIN_111 // P1.11
#define D15 PIN_113 // P1.13
#define D16 PIN_010 // P0.10
#define D17 PIN_015 // P0.15 (Internal LED)
#define D18 PIN_115 // P1.15
#define D19 PIN_002 // P0.02 (A0)
#define D20 PIN_029 // P0.29 (A1)
#define D21 PIN_031 // P0.31 (A2)

/*
 * Analog pins
 */
#define PIN_A0 PIN_002 // P0.02 (D19)
#define PIN_A1 PIN_029 // P0.29 (D20)
#define PIN_A2 PIN_031 // P0.31 (D21)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
#define ADC_RESOLUTION    12

/*
 * Other pins
 */
#define PIN_NFC1 PIN_009 // P0.09 - also D10
#define PIN_NFC2 PIN_010 // P0.10 - also D16

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX PIN_008 // P0.08 - also D0
#define PIN_SERIAL1_TX PIN_006 // P0.06 - also D1

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO  PIN_024 // P0.24 - D5
#define PIN_SPI_SCK   PIN_022 // P0.22 - D4
#define PIN_SPI_MOSI  PIN_100 // P1.00 - D6

static const uint8_t SS   = PIN_011; // P0.11 - D7
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA  PIN_017 // P0.17 - D2
#define PIN_WIRE_SCL  PIN_020 // P0.20 - D3

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
