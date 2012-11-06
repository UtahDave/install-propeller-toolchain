//
// automatically generated by spin2cpp on Tue Nov  6 19:00:20 2012
// spin2cpp --elf -o blink.elf -O -mfcache blink.spin 
//

#include <propeller.h>
#include "blink.h"

#ifdef __GNUC__
#define INLINE__ static inline
#define PostEffect__(X, Y) __extension__({ int32_t tmp__ = (X); (X) = (Y); tmp__; })
#else
#define INLINE__ static
static int32_t tmp__;
#define PostEffect__(X, Y) (tmp__ = (X), (X) = (Y), tmp__)
#endif

int32_t blinkSpin::Ledonoff(void)
{
  int32_t result = 0;
  DIRA |= (1<<16);
  while (1) {
    OUTA |= (1<<16);
    waitcnt(((CLKFREQ / 4) + CNT));
    OUTA &= ~(1<<16);
    waitcnt(((CLKFREQ / 4) + CNT));
  }
  return result;
}


blinkSpin MainObj__;

int main() {
  return MainObj__.Ledonoff();
}
