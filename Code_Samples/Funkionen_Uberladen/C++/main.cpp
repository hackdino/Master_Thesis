int add(int a, int b){
  return a + b;
}

double add(double a, double b){
  return a + b;
}

int main() {
    
  int ival_a=3, ival_b=4, iret;
  double dval_a=3, dval_b=4, dret;

  iret = add(ival_a, ival_b);
  dret = add(dval_a, dval_b);

  return 0;
}