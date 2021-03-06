/*
;    Project:       Open Vehicle Monitor System
;    Date:          14th March 2017
;
;    Changes:
;    1.0  Initial release
;
;    (C) 2011       Michael Stegen / Stegen Electronics
;    (C) 2011-2017  Mark Webb-Johnson
;    (C) 2011        Sonny Chen @ EPRO/DX
;
; Permission is hereby granted, free of charge, to any person obtaining a copy
; of this software and associated documentation files (the "Software"), to deal
; in the Software without restriction, including without limitation the rights
; to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
; copies of the Software, and to permit persons to whom the Software is
; furnished to do so, subject to the following conditions:
;
; The above copyright notice and this permission notice shall be included in
; all copies or substantial portions of the Software.
;
; THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
; IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
; FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
; AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
; LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
; OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
; THE SOFTWARE.
*/

#ifndef __ESP32BLUETOOTH_SVC_METRICS_H__
#define __ESP32BLUETOOTH_SVC_METRICS_H__

#include "esp32bluetooth.h"
#include "esp32bluetooth_gatts.h"

#define GATTS_APP_UUID_OVMS_METRICS       0x55
#define GATTS_SERVICE_UUID_OVMS_METRICS   0x5551
#define GATTS_CHAR_UUID_OVMS_METRICS      0x5552
#define GATTS_DESCR_UUID_OVMS_METRICS     0x5553
#define GATTS_NUM_HANDLE_OVMS_METRICS     4

extern struct gatts_profile_inst ovms_gatts_profile_metrics;

void ovms_ble_gatts_profile_metrics_init();

#endif //#ifndef __ESP32BLUETOOTH_SVC_METRICS_H__
