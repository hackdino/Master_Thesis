#include "com.h"
#include "serial.h"

void send(Com& arg) {
  arg.send_byte('A');
}

int main(void){
  
  Serial ser;
  
  send(ser);
  
  return 1;
}