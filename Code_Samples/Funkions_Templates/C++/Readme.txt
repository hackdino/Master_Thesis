Compile:
arm-none-eabi-g++ -c -O0 main.cpp

Analyse:
arm-none-eabi-nm main.o --print-size
arm-none-eabi-objdump.exe -d main.o