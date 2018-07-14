#include <array>

std::array<int, 10> a = { 0 };

int main() {
  
  for(int i=0; i<=a.size(); i++){
    a[i] = i;
  }
  
  return 0;
}

/*EOF*/