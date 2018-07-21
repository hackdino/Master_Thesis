#include <stdint.h>
volatile uint8_t a_1=3, a_2=4, a_3=0;
volatile int16_t b_1=5, b_2=6, b_3=0;

static uint8_t a(uint8_t a, uint8_t b){
  return a + b;
}

static int16_t b(int16_t a, int16_t b){
  return a + b;
}

int main() {

  a_3 = a(a_1, a_2);
  b_3 = b(b_1, b_2);

  return 0;
}