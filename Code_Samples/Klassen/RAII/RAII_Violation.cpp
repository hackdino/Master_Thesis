void func(void)
{
  char* buffer = new char[2];
  buffer[0] = 'A';
  buffer[1] = 'B';

  // buffer verwenden

  delete[] buffer;
}