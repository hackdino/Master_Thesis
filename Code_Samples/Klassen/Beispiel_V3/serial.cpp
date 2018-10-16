#include "serial.h"
// Konstruktor
Serial::Serial(int _baud, int _mode)
: baudrate{_baud}, mode{_mode} {

    buffer = new char[100];
}
// Destruktor
Serial::~Serial(){

    delete[] buffer;
}
// Method
void Serial::set_baudrate(int baudate){
  
  this->baudrate = baudrate;
}
// Method
void Serial::set_mode(int mode){
  
  this->mode = mode;
}