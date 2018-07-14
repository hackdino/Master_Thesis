#include <vector>

typedef struct random_data_type_s {
  int a;
  int b;
} random_data_type_t;

int main() {
    
  std::vector<random_data_type_t> random_array(10);
  
  for(auto elem : random_array){
    elem.a = 5;
    elem.b = 10;
  }
  return 0;
}



/*EOF*/
