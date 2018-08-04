void print_string_info(std::string &str){
  
  printf("String: %s\n", str.c_str());
  printf("Size() = %d\n", str.size());
  printf("Length() = %d\n", str.length());
  printf("Max Size() = %d\n", str.max_size());
  printf("Capacity() = %d\n\n", str.capacity());
}

int main(void){
  
  std::string msg("Hallo Welt");
  print_string_info(msg);
  
  msg.reserve(500);
  print_string_info(msg);

  msg.resize(5);
  print_string_info(msg);

  msg.reserve(50);
  print_string_info(msg);

  msg.clear();
  print_string_info(msg);

  if(msg.empty()){
      device.printf("String_is_empty\n");
  }else{
      device.printf("String_is_not_empty\n");
  }
}