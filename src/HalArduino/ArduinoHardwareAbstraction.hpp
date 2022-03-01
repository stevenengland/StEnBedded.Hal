#ifndef LIB_HALARDUINO_ARDUINOHARDWAREABSTRACTION
#define LIB_HALARDUINO_ARDUINOHARDWAREABSTRACTION

#include <Hal/IHardwareAbstraction.hpp>

namespace hal {
class ArduinoHardwareAbstraction final : public IHardwareAbstraction {
 public:
  uint32_t ElapsedMilliseconds() override;
  void WaitSync(int milliseconds) override;
};
}  // namespace hal

#endif /* LIB_HALARDUINO_ARDUINOHARDWAREABSTRACTION */
