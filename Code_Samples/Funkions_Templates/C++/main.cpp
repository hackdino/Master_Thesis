template <typename T> T add(T a, T b) {
  return a + b;
}

int main() {
    
  volatile int ival_a=3, ival_b=4, iret;
  volatile double dval_a=3.0, dval_b=5.0, dret;

  iret = add(ival_a, ival_b);
  dret = add(dval_a, dval_b);

  return iret+dret;
}



/*EOF*/
