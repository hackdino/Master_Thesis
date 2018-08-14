#include "serial.h"

// Private Namespace
namespace {
  
  typedef enum {INIT, NOT_INIT} state;
  state is_init = NOT_INIT;
  
  void send_byte(char byte){
    // Do something
  }
}

namespace driver {
  
  void serial_init(void){
    
    is_init = INIT;
    // Do something
  }
 
  void serial_send(char *data,
                   int len){
    
    if(is_init == NOT_INIT)
      return;
    
    for(int i=0; i<len; i++)
      send_byte(data[i]);
  }
} //namespace driver