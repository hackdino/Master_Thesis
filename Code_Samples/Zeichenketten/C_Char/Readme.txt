// Compile
arm-none-eabi-g++ -c -Os main.cpp

//Analyse
arm-none-eabi-size main.o
arm-none-eabi-nm main.o --print-size