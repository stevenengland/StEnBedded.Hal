#ifndef LIB_HAL_IHARDWAREABSTRACTION
#define LIB_HAL_IHARDWAREABSTRACTION

#include <stdint.h>  // NOLINT

namespace hal {
class
    IHardwareAbstraction {  // NOLINT(cppcoreguidelines-special-member-functions,hicpp-special-member-functions)
 public:
  virtual ~IHardwareAbstraction() = default;

  virtual uint32_t ElapsedMilliseconds() = 0;
  virtual void WaitSync(int milliseconds) = 0;
};
}  // namespace hal

#endif /* LIB_HAL_IHARDWAREABSTRACTION */
