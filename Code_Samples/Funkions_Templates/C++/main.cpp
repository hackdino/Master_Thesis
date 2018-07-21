#include <stdint.h>
volatile uint8_t a_1=3, a_2=4, a_3=0;
volatile int16_t b_1=5, b_2=6, b_3=0;

template <typename T> T add(T a, T b) {
  return a + b;
}





int main() {

  a_3 = add(a_1, a_2);
  b_3 = add(b_1, b_2);

  return 0;
}
