#include "serial.h"

Serial::Serial(int _baud, int _mode)
: baudrate{_baud}, mode{_mode} {

    buffer = new char[100];
}

Serial::~Serial(){

    delete[] buffer;
}

void Serial::set_baudrate(int baudate){
  
  this->baudrate = baudrate;
}
 
void Serial::set_mode(int mode){
  
  this->mode = mode;
}