Compile:
arm-none-eabi-gcc --specs=nosys.specs main.c

Analyse:
arm-none-eabi-nm.exe a.out --print-size