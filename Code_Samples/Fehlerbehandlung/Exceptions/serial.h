class Serial {
  
  public:
  void set_baudrate(int baudate){
    if(baudate <= 0)
      throw (int)-1;
      
    this->baudrate = baudrate;
  }
  
  
  private:
  int baudrate;
};

