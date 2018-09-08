#include "com.h"

class Serial : public Com{
  
  public:
  // ctors
  Serial():Serial(9600, 1){};
  Serial(int _baud, int _mode);
  ~Serial();
  
  void set_baudrate(int baudate);
  void set_mode(int mode);
  
  private:
  int baudrate;
  int mode;
  char *buffer;
};