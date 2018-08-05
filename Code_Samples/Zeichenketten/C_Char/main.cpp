#include <string.h>
#include <stdlib.h>

int main() {
  
  char *str = (char *)
              malloc(sizeof(char)*50);
  
  strcpy((char *)str, "C++ ist eine ");
  strcat((char *)str, "schoene ");
  strcat((char *)str, "Sprache");
  
  char *help = strstr(str, "schoene ");
  strncpy (help, "coooole ", 8);
   
  return 0;
}