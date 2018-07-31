#include <string.h>

int main() {
  
  char str[80] = {'\0'};
  
  strcpy((char *)str, "strings ");
  strcat((char *)str, "have been ");
  strcat((char *)str, "concatenated.");
  
  return 0;
}

/*EOF*/