
static int uart_init(int baudrate, int data_bits, int parity, int stop){
  
  if(baudrate < 0)
    baudrate = 9600;
  if(data_bits < 0)
    data_bits = 8;
  if(parity < 0)
    parity = 0;
  if(stop < 0)
    stop = 1;
  
  return baudrate+data_bits+parity+stop;
}

volatile int ret=0;

int main() {

  ret = uart_init(-1, -1, -1, -1);
  ret += uart_init(57600, -1, -1, -1);
  ret += uart_init(57600, 7, -1, -1);
  ret += uart_init(57600, 7, 1, -1);
  ret += uart_init(57600, 7, 1, 0);

  return 0;
}
