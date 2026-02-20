/******************************************************************************
 ******************************************************************************
 **                                                                          **
 **                          ファイルヘッダー                                  **
 **                          File: d_serial.cpp                              **
 **                                                                          **
 ******************************************************************************
 ******************************************************************************/

#include "d_serial.h"

#include "../../constants/constant.h"
#include "../../bsw/serial/b_serial.h"

typedef struct {
  int baudRate;
  // 受信バッファのサイズは未定、初期化時に使用する可能性あり
  int rxBufferSize;
} serial_ctx_t;

serial_device_t* dSerialCreate(int baudRate) {
  return new serial_device_t{
      .ctx = nullptr,
      .ops = nullptr,
  };
}