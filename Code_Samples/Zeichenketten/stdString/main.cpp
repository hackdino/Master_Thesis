#include <string>

std::string str{"C++ ist eine ", 50};

int main() {
  
  str.append("schöne ");
  str.append("Programmiersprache ");
  int start_pos = str.find("schöne ");
  str.replace(start_pos, 7, "cooole ");
  
  return 0;
}

/*EOF*/