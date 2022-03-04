#include <gtest/gtest.h>

#include <Mocks/HardwareAbstractionMock.hpp>

using namespace testing;  // NOLINT(google-build-using-namespace)

namespace time_tests {
class ArduinoHardwareAbstractionShould : public Test {
 public:
  hal::HardwareAbstractionMock hardware_abstraction{};
};

TEST_F(  // NOLINT(cppcoreguidelines-avoid-non-const-global-variables)
    ArduinoHardwareAbstractionShould, ReturnValueGt0) {
  ON_CALL(hardware_abstraction, ElapsedMilliseconds).WillByDefault(Return(1));

  ASSERT_TRUE(hardware_abstraction.ElapsedMilliseconds() > 0);
}
}  // namespace time_tests