int i_1=3, i_2=4, i_3=0;
double d_1=5, d_2=6, d_3=0;

template <typename T> T add(T a, T b) {
  return a + b;
}





int main() {

  i_3 = add(i_1, i_2);
  d_3 = add(d_1, d_2);

  return 0;
}
