#!/bin/bash

# Compile .c files into a dynamic library named liball.so
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o liball.so *.c
