#ifndef SERIAL_H
#define SERIAL_H

#include "../../bsw/serial/b_serial_t.h"
#include "../../constants/constant.h"

bserial_serial_device_t* createSerialDevice(int boudRate, int rxBufferSize);

#endif  // SERIAL_H