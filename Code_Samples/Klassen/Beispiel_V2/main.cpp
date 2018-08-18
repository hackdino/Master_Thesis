#include "serial.h"

Serial ser;

int main(void){
  
  ser.set_baudrate(9600);
  ser.set_mode(1);
  
  return 1;
}