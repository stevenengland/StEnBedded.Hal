#include <HalArduino/ArduinoHardwareAbstraction.hpp>

hal::ArduinoHardwareAbstraction halInstance{};

void setup() {  // NOLINT(llvmlibc-implementation-in-namespace,readability-identifier-naming,-warnings-as-errors)
  // put your setup code here, to run once:
}

void loop() {  // NOLINT(llvmlibc-implementation-in-namespace,readability-identifier-naming,-warnings-as-errors)
  // put your main code here, to run repeatedly:
  halInstance.WaitSync(1000);
  auto elapsed = halInstance.ElapsedMilliseconds();
}