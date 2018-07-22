static int __attribute__ ((noinline)) 
uart_init(int baud=9600,
          int Ndata=8,
          int parity=0,
          int stop=1){
  
  return baud+Ndata+parity+stop;
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