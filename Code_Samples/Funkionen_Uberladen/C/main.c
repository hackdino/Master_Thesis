int add_i(int a, int b){
  return a + b;
}

double add_d(double a, double b){
  return a + b;
}

int main() {
    
  int ival_a=3, ival_b=4, iret;
  double dval_a=3, dval_b=4, dret;

  iret = add_i(ival_a, ival_b);
  dret = add_d(dval_a, dval_b);

  return 0;
}