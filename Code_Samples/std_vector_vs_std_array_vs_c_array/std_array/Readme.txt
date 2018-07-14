// Compile
arm-none-eabi-g++ -Os --specs=nosys.specs stdArray.cpp

//Analyse
arm-none-eabi-size a.out
arm-none-eabi-size-nm a.out --print-size