// Compile
arm-none-eabi-g++ -c -Os stdArray.cpp

//Analyse
arm-none-eabi-size stdArray.out
arm-none-eabi-nm stdArray.out --print-size