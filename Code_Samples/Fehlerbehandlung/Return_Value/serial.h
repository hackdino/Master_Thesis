class Serial {
  
  public:
  int set_baudrate(int baudate){
    if(baudate <= 0)
      return -1;

    this->baudrate = baudrate;
    return 1;
  }
  
  private:
  int baudrate;
};