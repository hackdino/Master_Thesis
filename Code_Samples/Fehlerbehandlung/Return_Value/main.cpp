#include "serial.h"

int main(void){
  
  Serial ser;
  
  if(ser.set_baudrate(-1) == -1){
    return -1;
  }
  
  return 1;
}


/*EOF*/