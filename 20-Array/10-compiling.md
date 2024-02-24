"Compiling" actually contains 4 steps:

- **Preprocessing**: this finds all the `#include <***.h>` statements and copy all the relavant function DECLARATIONS (not the actualy function body) to your target file
  - The .h header files typically don't have the actualy implementation; they are contained in separate "xxx.c" files
  - e.g. `#include <stdio.h>` --> `int printf(string str, ...);`
- **Compiling**: convert your C code to **assembly code** (still readable but very verbose; not 10101010 machine code)
- **Assembling**: convert assembly to 1010101 machine code
  - These have to be done to all the included `.c` files from the `#include` statements as well
- **Linking** just links all the compiled machine codes from the above together
