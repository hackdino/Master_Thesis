#include "stdio.h"

typedef struct {
  int age;
  int size;
} Person;


void print_info(Person *per, int cnt){

  for(int i=0; i<cnt; i++){
    printf("Age: %d\n", per->age);
    printf("Size: %d\n", per->size);
  }
}

int main(void){
  
  Person per[100];
  
  print_info(per, 100);
}