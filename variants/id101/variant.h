/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
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

#ifndef _ID101_
#define _ID101_

/** Master clock frequency */
#define VARIANT_MCK       (16000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (26u)
#define NUM_DIGITAL_PINS     (20u)
#define NUM_ANALOG_INPUTS    (4u)
#define NUM_ANALOG_OUTPUTS   (0u)

#define UNUSED               (18)
// #define UNUSED               (19)
// #define UNUSED               (20)
// #define UNUSED               (24)
// #define UNUSED               (25)

#define TP1              (21)
#define TP2              (22)

#define MOTOR_PIN         (7)
#define USB_PIN           (6)
#define CHARGE_STATUS     (23)
#define BATTERY_PIN       (1)

#define CAP_TOUCH_SDA      (4)
#define CAP_TOUCH_SCL      (3)
#define CAP_TOUCH_RDY      (5)

// LEDs
#define PIN_LED              (MOTOR_PIN)
#define LED_BUILTIN          PIN_LED

/*
 * Analog pins
 */
#define PIN_A0               (BATTERY_PIN)
#define PIN_A1               (6)
#define PIN_A2               (TP1)
#define PIN_A3               (TP2)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
#define ADC_RESOLUTION    10

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (UNUSED)
#define PIN_SERIAL_TX       (UNUSED)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (30)
#define PIN_SPI_MOSI         (28)
#define PIN_SPI_SCK          (29)

static const uint8_t SS_FLASH   = 17 ;
static const uint8_t SS_SCREEN  = 2 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;


/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (CAP_TOUCH_SDA)
#define PIN_WIRE_SCL         (CAP_TOUCH_SCL)


#ifdef __cplusplus
}
#endif

#endif
