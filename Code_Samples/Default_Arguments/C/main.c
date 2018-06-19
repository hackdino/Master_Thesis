#define NULL ( (void *) 0)

int add(int *a, int *b){
  
  // Set default arguments for a&b
  if(a==NULL)
    *a=3;
  if(b==NULL)
    *b=4;
  
  return *a + *b;
}

int main() {
    
  int ival_a, ival_b, iret;

  iret = add(NULL, NULL);

  return 0;
}