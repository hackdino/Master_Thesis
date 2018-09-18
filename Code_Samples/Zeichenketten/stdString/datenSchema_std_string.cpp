char      *data;          // 4 byte
size_t    string_length;  // 4 byte

union {                   // 16 byte
  char local_data[16];
  size_t allocated_data;
}