

int a[10] = { 0 };

int main() {
  
  for(int i=0; i<sizeof(a); i++){
    a[i] = i;
  }
  
  return 0;
}

/*EOF*/
