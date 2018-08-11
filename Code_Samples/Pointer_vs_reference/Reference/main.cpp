#include <array>

struct data {
  int age;
  int size;
};
typedef std::array<data, 100> Person;

void print_info(Person &per){

  for(auto &elem : per){
    printf("Age: %d\n", elem.age);
    printf("Size: %d\n", elem.size);
  }
}

int main(void){
  
  Person per;
  
  print_info(per);
}