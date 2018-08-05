#include <string>


int main() {

  std::string str{"C++ ist eine "};
  
  str += "schoene ";
  str += "Sprache";
  int pos = str.find("schoene ");
  str.replace(pos, 8, "coooole ");
  
  return 0;
}


/*EOF*/