#include <string>
std::string str1{80, '\0'};

int main() {
  
  str1.append("strings ");
  str1.append("have been ");
  str1.append("concatenated.");
  
  return 0;
}

/*EOF*/