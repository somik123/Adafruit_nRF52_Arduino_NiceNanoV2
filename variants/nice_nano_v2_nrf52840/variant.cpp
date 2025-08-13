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

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
    {
   0,  // P0.00
   1,  // P0.01
   2,  // P0.02 (D19, A0)
   3,  // P0.03
   4,  // P0.04
   5,  // P0.05
   6,  // P0.06 (D0, TX)
   7,  // P0.07
   8,  // P0.08 (D1, RX)
   9,  // P0.09 (D10)
  10,  // P0.10 (D16)
  11,  // P0.11 (D7)
  12,  // P0.12
  13,  // P0.13 (EXT_VCC)
  14,  // P0.14
  15,  // P0.15 (D17, LED_BUILTIN)
  16,  // P0.16
  17,  // P0.17 (D2, SDA)
  18,  // P0.18
  19,  // P0.19
  20,  // P0.20 (D3, SCL)
  21,  // P0.21
  22,  // P0.22 (D4, SCLK)
  23,  // P0.23
  24,  // P0.24 (D5, MISO)
  25,  // P0.25
  26,  // P0.26
  27,  // P0.27
  28,  // P0.28
  29,  // P0.29 (D20, A1)
  30,  // P0.30
  31,  // P0.31 (D21,A2)
  32,  // P1.00 (D6, MOSI)
  33,  // P1.01 (D11)
  34,  // P1.02 (D12)
  35,  // P1.03
  36,  // P1.04 (D8)
  37,  // P1.05
  38,  // P1.06 (D9)
  39,  // P1.07 (D13)
  40,  // P1.08
  41,  // P1.09
  42,  // P1.10
  43,  // P1.11 (D14)
  44,  // P1.12
  45,  // P1.13 (D15)
  46,  // P1.14
  47,  // P1.15
};

void initVariant()
{

  // enable EXT_VCC by default
  pinMode(EXT_VCC, OUTPUT);
  digitalWrite(EXT_VCC, HIGH);

  // LED1 & LED2
  pinMode(LED_BUILTIN, OUTPUT);
  ledOff(LED_BUILTIN);
}
