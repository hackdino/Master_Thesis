#include <string>

std::string str{"HALLO WELT"};

int main() {
  
  for(auto elem : str){
    elem += 32;
  }
  
  return 0;
}

/*EOF*/