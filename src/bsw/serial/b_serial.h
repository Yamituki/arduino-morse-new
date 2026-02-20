/******************************************************************************
 ******************************************************************************
 **                                                                          **
 **                          ファイルヘッダー                                  **
 **                          File: b_serial.h                                **
 **                                                                          **
 ******************************************************************************
 ******************************************************************************/

#ifndef B_SERIAL_H
#define B_SERIAL_H

#include "../../constants/constant.h"

// シリアルデバイス型定義
typedef struct {
  global_err_t (*init)(void* ctx);
  global_err_t (*read)(void* ctx, char* out);
  global_err_t (*available)(void* ctx, bool* out);
} serial_device_ops_t;

typedef struct {
  void* ctx;
  const serial_device_ops_t* ops;
} serial_device_t;

// 関数プロトタイプ
global_err_t bSerialRegisterDevice(serial_device_t* device);
void bSerialProcess(void);
global_err_t bSerialIsReceived(bool* out);
global_err_t bSerialGetBuffer(char* out, int size);

#endif  // B_SERIAL_H