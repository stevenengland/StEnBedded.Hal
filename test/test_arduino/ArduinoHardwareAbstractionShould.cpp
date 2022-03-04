#include <gtest/gtest.h>

#include <HalArduino/ArduinoHardwareAbstraction.hpp>

using namespace testing;  // NOLINT(google-build-using-namespace)

namespace time_tests {
class ArduinoHardwareAbstractionShould : public Test {
 public:
  hal::ArduinoHardwareAbstraction hardware_abstraction{};
};

TEST_F(  // NOLINT(cppcoreguidelines-avoid-non-const-global-variables)
    ArduinoHardwareAbstractionShould, ReturnValueGt0) {
  ASSERT_TRUE(hardware_abstraction.ElapsedMilliseconds() > 0);
}
}  // namespace time_tests