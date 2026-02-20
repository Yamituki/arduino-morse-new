/******************************************************************************
 ******************************************************************************
 **                                                                          **
 **                          ファイルヘッダー                                  **
 **                          File: d_serial.h                                **
 **                                                                          **
 ******************************************************************************
 ******************************************************************************/

#ifndef D_SERIAL_H
#define D_SERIAL_H

#include "../../bsw/serial/b_serial_t.h"
#include "../../constants/constant.h"

bserial_serial_device_t* createSerialDevice(int boudRate, int rxBufferSize);

#endif  // D_SERIAL_H