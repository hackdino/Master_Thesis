#include "serial.h"

int main(void){
  
  Serial ser;
  
  try{
    ser.set_baudrate(-1);
  }
  catch(int exception){
    return exception;
  }
  
  return 1;
}