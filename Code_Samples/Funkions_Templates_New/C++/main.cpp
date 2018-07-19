#include <stdint.h>
template <typename T> T add(T a, T b) {
  return a + b;
}

int main() {
    
  volatile uint8_t ival_a=3, ival_b=4, iret;
  volatile uint16_t dval_a=3, dval_b=4, dret;

  iret = add(ival_a, ival_b);
  dret = add(dval_a, dval_b);

  return 0;
}



/*EOF*/
