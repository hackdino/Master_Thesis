

const char str[] = {"HALLO WELT"};

int main() {
  
  for(size_t i=0; i<sizeof(str); i++){
    str[i] += 32;
  }
  
  return 0;
}

/*EOF*/