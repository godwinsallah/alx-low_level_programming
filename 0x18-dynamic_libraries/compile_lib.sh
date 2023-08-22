#!/bin/bash

# List of files to be ignored during compilation
ignored_files=("file_to_ignore.c" "another_file_to_ignore.c")

# Compile .c files into a shared library excluding ignored files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o libdynamic.so $(ls *.c | grep -vF "${ignored_files[@]}")

