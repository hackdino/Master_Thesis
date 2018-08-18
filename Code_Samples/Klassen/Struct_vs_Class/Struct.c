struct Base{
  int id;
};

struct Serial{
  struct Base base;
  int baudrate;
  int mode;
};