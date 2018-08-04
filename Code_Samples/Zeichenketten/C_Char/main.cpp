#include <string.h>
#include <stdlib.h>

int main() {
  
  char *str = (char *)malloc(sizeof(char) * 50);
  
  strcpy((char *)str, "C++ ist eine ");
  strcat((char *)str, "schöne ");
  strcat((char *)str, "Programmiersprache.");
  
  char *help = strstr (str, "schöne ");
  strncpy (help, "cooole ", 7);
   
  return 0;
}

/*EOF*/