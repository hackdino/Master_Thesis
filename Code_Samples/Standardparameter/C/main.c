int uart_init(int baud,
              int Ndata,
              int parity,
              int stop){
  
  if(baud < 0)
    baud = 9600;
  if(Ndata < 0)
    Ndata = 8;
  if(parity < 0)
    parity = 0;
  if(stop < 0)
    stop = 1;
  
  return 0;
}

int ret=0;

int main() {

  ret = uart_init(-1, -1, -1, -1);
  ret += uart_init(57600, -1, -1, -1);
  ret += uart_init(57600, 7, -1, -1);
  ret += uart_init(57600, 7, 1, -1);
  ret += uart_init(57600, 7, 1, 0);
  return 0;
}