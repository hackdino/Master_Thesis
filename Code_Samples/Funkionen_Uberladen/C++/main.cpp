int add(int a, int b){
  return a + b;
}

double add(double a, double b){
  return a + b;
}

int i_1=3, i_2=4, i_3=0;
double d_1=3, d_2=4, d_3=0;

int main() {
  
  i_3 = add(i_1, i_2);
  d_3 = add(d_1, d_2);

  return 0;
}