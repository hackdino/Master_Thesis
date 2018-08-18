int i_1=3, i_2=4, i_3=0;
double d_1=5, d_2=6, d_3=0;

int add_i(int a, int b){
  return a + b;
}

double add_d(double a, double b){
  return a + b;
}

int main() {

  i_3 = add_i(i_1, i_2);
  d_3 = add_d(d_1, d_2);

  return 0;
}