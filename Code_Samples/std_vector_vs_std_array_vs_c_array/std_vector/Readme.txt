// Compile
arm-none-eabi-g++ -c -Os stdVector.cpp

//Analyse
arm-none-eabi-size -A stdVactor.o
arm-none-eabi-nm stdVector.o --print-size
