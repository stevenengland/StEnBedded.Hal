#include <Arduino.h>

#include <HalArduino/ArduinoHardwareAbstraction.hpp>

namespace hal {
uint32_t ArduinoHardwareAbstraction::ElapsedMilliseconds() { return millis(); }

void ArduinoHardwareAbstraction::WaitSync(int milliseconds) {
  delay(milliseconds);
}
}  // namespace hal