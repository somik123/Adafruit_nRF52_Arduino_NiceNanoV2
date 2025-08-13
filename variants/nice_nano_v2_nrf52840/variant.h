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
#define PINS_COUNT           (23)
#define NUM_DIGITAL_PINS     (23)
#define NUM_ANALOG_INPUTS    (3)
#define NUM_ANALOG_OUTPUTS   (0)

// NOTE:
//
// BATTERY VOLTAGE IS READ VIA VDDH/5 BY CALLING
//
// analogReadVDDHDIV5() // returns uint32_t

// 3V3 Regulator Disable
#define PIN_EXT_VCC          (22) // EXT_VCC is P0.13 (set low to disable 3v3)
#define EXT_VCC              (PIN_EXT_VCC)

// LEDs
#define PIN_LED              (17) // USR LED is P0.15
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

// Digital PINs
// NOTE: THIS IS A RENUMBERING OF THE PINS
// AND DOES NOT CORRESPOND TO THE NICENANO DIAGRAM

// left side (top to bottom)
#define D0 (1ul) // P0.08 (RX)
#define D1 (0ul) // P0.06 (TX)
#define D2 (2ul) // P0.17 (SDA)
#define D3 (3ul) // P0.20 (SCL)
#define D4 (4ul) // P0.22 (SCLK)
#define D5 (5ul) // P0.24 (MISO)
#define D6 (6ul) // P1.00 (MOSI)
#define D7 (7ul) // P0.11
#define D8 (8ul) // P1.04
#define D9 (9ul) // P1.06

// right side (bottom to top)
#define D10 (10ul) // P0.09 (A10)

//extra center pins (left to right)
#define D11 (11ul) // P1.01
#define D12 (12ul) // P1.02
#define D13 (13ul) // P1.07

// right side (bottom to top)
#define D14 (14ul) // P1.11
#define D15 (15ul) // P1.13
#define D16 (16ul) // P0.10
#define D17 (17ul) // P0.15 (Internal LED)
#define D18 (18ul) // P1.15
#define D19 (19ul) // P0.02 (A0)
#define D20 (20ul) // P0.29 (A1)
#define D21 (21ul) // P0.31 (A2)

/*
 * Analog pins
 */
#define PIN_A0               (19) // P0.02 (D19)
#define PIN_A1               (20) // P0.29 (D20)
#define PIN_A2               (21) // P0.31 (D21)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
#define ADC_RESOLUTION    12

/*
 * Other pins
 */
#define PIN_NFC1             (10) // P0.09 - also D10
#define PIN_NFC2             (16) // P0.10 - also D16

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX       (1) // P0.08 - also D0
#define PIN_SERIAL1_TX       (0) // P0.06 - also D1

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (4) // P0.20 - D4
#define PIN_SPI_SCK          (5) // P1.13 - D5
#define PIN_SPI_MOSI         (6) // P0.10 - D6

static const uint8_t SS   = (7); // P0.11 - D7
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (2) // P0.17 - D2
#define PIN_WIRE_SCL         (3) // P0.20 - D3

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
