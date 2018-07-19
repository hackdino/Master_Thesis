#include <stdint.h>

uint8_t add_i(uint8_t a, uint8_t b){
  return a + b;
}

uint16_t add_d(uint16_t a, uint16_t b){
  return a + b;
}

int main() {
    
  volatile uint8_t ival_a=3, ival_b=4, iret;
  volatile uint16_t dval_a=3, dval_b=4, dret;

  iret = add_i(ival_a, ival_b);
  dret = add_d(dval_a, dval_b);

  return 0;
}