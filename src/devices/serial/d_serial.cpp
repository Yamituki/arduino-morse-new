#include "d_serial.h"

#include "../../bsw/serial/b_serial_t.h"
#include "../../constants/constant.h"

typedef struct {
  int baudRate;
  // 受信バッファのサイズは未定、初期化時に使用する可能性あり
  int rxBufferSize;
} serial_ctx_t;

bserial_serial_device_t* createSerialDevice(int boudRate, int rxBufferSize) {
  // Implementation to create and return a serial device based on the baud rate
  // This is a placeholder implementation
  return new bserial_serial_device_t{
      .ctx = nullptr,
      .ops = nullptr,
  };
}