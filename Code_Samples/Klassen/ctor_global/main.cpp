#include "serial"

// Create Serial Object global
Serial com(9600, 2);

int main(void){
  
  // Init System
  SystemInit();
  
  // Send Byte
  com.sendByte(0xAA); //Error
  
  return 0;
}