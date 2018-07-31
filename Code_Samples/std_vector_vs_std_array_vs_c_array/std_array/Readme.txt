// Compile
arm-none-eabi-g++ -c -Os stdArray.cpp

//Analyse
arm-none-eabi-size -A stdArray.o
arm-none-eabi-nm stdArray.o --print-size
arm-none-eabi-objdump -d stdArray.o