Compile:
arm-none-eabi-g++ -c -Os main.cpp

Analyse:
arm-none-eabi-nm main.o --print-size
arm-none-eabi-objdump.exe -d main.o