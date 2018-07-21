
static int uart_init(int baudrate=9600, int data_bits=8, int parity=0, int stop=1){
  
  return baudrate+data_bits+parity+stop;
}

volatile int ret=0;

int main() {

  ret = uart_init();
  ret += uart_init(57600);
  ret += uart_init(57600, 7);
  ret += uart_init(57600, 7, 1);
  ret += uart_init(57600, 7, 1, 0);

  return 0;
}
