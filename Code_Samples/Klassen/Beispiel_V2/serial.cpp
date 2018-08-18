#include "serial.h"

Serial::Serial()
: baudrate{115000}, mode{2} { }

Serial::Serial(int _baud, int _mode)
: baudrate{_baud}, mode{_mode} { }

void Serial::set_baudrate(int baudate){
  
  this->baudrate = baudrate;
}
 
void Serial::set_mode(int mode){
  
  this->mode = mode;
}