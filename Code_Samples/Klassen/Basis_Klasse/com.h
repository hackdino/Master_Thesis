class Com {

  public:
  void set_status(int status){
    this->status = status;
  };
  
  int get_status(void){
    return status;
  };

  virtual void send_byte(char byte){
      printf("Com: %c \n", byte);
  }

  private:
  int status;
};