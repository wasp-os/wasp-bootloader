/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _P8_NRF52832_H
#define _P8_NRF52832_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER     1
#define BUTTON_1           17
#define BUTTON_PULL        NRF_GPIO_PIN_NOPULL
#define BUTTON_ACTIVE      1
#define BUTTON_ON_RIGHT

/*------------------------------------------------------------------*/
/* UART
 *------------------------------------------------------------------*/
#define RX_PIN_NUMBER      15 /* not connected */
#define TX_PIN_NUMBER      11
#define CTS_PIN_NUMBER     0
#define RTS_PIN_NUMBER     0
#define HWFC               false

#define ST7789_SPI_DISPLAY

// Used as model string in OTA mode
#define BLEDIS_MANUFACTURER   "COLMI P8"
#define BLEDIS_MODEL          "P8"
#define BLEDIS_DEVICE_NAME    "P8DFU"

#endif // _P8_NRF52832_H
