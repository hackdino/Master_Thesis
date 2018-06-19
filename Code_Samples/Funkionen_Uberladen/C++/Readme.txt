Compile:
arm-none-eabi-c++ --specs=nosys.specs main.cpp

Analyse:
arm-none-eabi-nm.exe a.out --print-size