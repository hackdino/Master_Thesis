class Class {
  
  public:
  int a{0};
  int b{0};
   
  Class add(const Class& val) {
    Class tmp;
    tmp.a = a + val.a;
    tmp.b = b + val.b;
    return tmp;
  }
};

int main(void){
  
  Class class_a, class_b;
  Class class_c;
  
  class_a.a = 2;
  class_b.b = 5;
  
  class_c = class_a.add(class_b);
  
  return 1;
}