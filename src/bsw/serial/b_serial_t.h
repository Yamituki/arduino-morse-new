#ifndef B_SERIAL_T_H
#define B_SERIAL_T_H

#include "../../constants/constant.h"

typedef struct {
  global_err_t (*init)(void* ctx);
  global_err_t (*available)(void* ctx);
  global_err_t (*read)(void* ctx);
  global_err_t (*flush)(void* ctx);
} bserial_serial_device_ops_t;

typedef struct {
  const void* ctx;
  const bserial_serial_device_ops_t* ops;
} bserial_serial_device_t;

global_err_t bswRegisterSerialDevice(const bserial_serial_device_t* device);

#endif  // B_SERIAL_T_H