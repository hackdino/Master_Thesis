class Serial {
  
  public:
  // ctors
  Serial();
  Serial(int _baud, int _mode);
  
  void set_baudrate(int baudate);
  void set_mode(int mode);
  
  private:
  int baudrate;
  int mode;
  
};

/*EOF*/