#include "stm32f4xx.h"
#include "my_lib.h"

int main()
{
  uint32_t value = my_lib_get_value();
  (void)value;
  
  for (;;);

  return 0;
}