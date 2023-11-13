#!/bin/bash

# Compile each function into an object file
for file in *.c; do
    filename="${file%.c}"  # Remove the .c extension
    gcc -c -fPIC "$file" -o "${filename}.o"
done

# Create the dynamic library
gcc -shared -o libdynamic.so *.o
