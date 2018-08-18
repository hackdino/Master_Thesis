Compile:
arm-none-eabi-gcc -c -O0 main.c

Analyse:
arm-none-eabi-nm main.o --print-size
arm-none-eabi-objdump.exe -d main.o