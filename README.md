# stage2_libmx
Very big and very useful library of useful functions 
to work with arrays, strings, arrays of strings, numbers, lists.

## Code style
This code match to standart C11.

## Compiler
This libmx compiling with `clang` and `-std=c11 -Wall -Wpedantic -Werror -Wextra` flags.

## How to use?
* `make` to compile and link **libmx.a**.
* `make clean` to remove _obj_-files and **obj** directory.
* `make uninstall` to remove linked **libmx.a** and _obj_-files with **obj** directory.
* `make reinstall` to full rebuilding of **libmx.a**.
