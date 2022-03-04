#ifndef TEST_MOCKS_HARDWAREABSTRACTIONMOCK
#define TEST_MOCKS_HARDWAREABSTRACTIONMOCK

#include <gmock/gmock.h>

#include "Hal/IHardwareAbstraction.hpp"

namespace hal {
class HardwareAbstractionMock final : public IHardwareAbstraction {  // NOLINT
 public:
  MOCK_METHOD(uint32_t, ElapsedMilliseconds, (), (override));   // NOLINT
  MOCK_METHOD(void, WaitSync, (int milliseconds), (override));  // NOLINT
};
}  // namespace hal

#endif /* TEST_MOCKS_HARDWAREABSTRACTIONMOCK */
