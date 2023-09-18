# Dynamic Libraries and Library Management in Linux

## What is a Dynamic Library?

A dynamic library, often called a shared library in Linux, is a collection of precompiled code that can be used by multiple programs. These libraries contain functions and code that programs can call upon when needed, making it easier to manage code and save memory.

### How Does a Dynamic Library Work?

Dynamic libraries work by allowing multiple programs to share the same code in memory. When a program starts, it checks which dynamic libraries it needs and loads them into memory. This reduces memory usage and allows for easier updates of shared code.

## Creating a Dynamic Library

To create a dynamic library:

1. Write the functions you want to share in a C file, e.g., `mylib.c`.
   
   ```c
   // mylib.c
   #include <stdio.h>
   
   void say_hello() {
       printf("Hello from the dynamic library!\n");
   }
   ```

2. Compile the C file into a shared library using `gcc`:

   ```bash
   gcc -shared -o libmylib.so mylib.c
   ```

## Using a Dynamic Library

To use a dynamic library in your program:

1. Include the library in your code.

   ```c
   // main.c
   #include <stdio.h>
   #include "mylib.h"
   
   int main() {
       say_hello();
       return 0;
   }
   ```

2. Compile your program with the shared library:

   ```bash
   gcc -o my_program main.c -L. -lmylib
   ```

3. Run your program:

   ```bash
   ./my_program
   ```

## Environment Variable: `$LD_LIBRARY_PATH`

The `$LD_LIBRARY_PATH` environment variable tells the system where to look for shared libraries at runtime. You can set it to include directories where your libraries are located.

### How to Use `$LD_LIBRARY_PATH`

Set `$LD_LIBRARY_PATH` before running your program:

```bash
export LD_LIBRARY_PATH=/path/to/your/library/directory
./your_program
```

## Differences Between Static and Shared Libraries

- **Static Libraries (.a files):**
  - Linked at compile-time.
  - Code is copied into the executable.
  - Larger executable size.
  - No runtime dependencies.
  - Code duplication if used by multiple programs.
  
- **Shared Libraries (.so files):**
  - Linked at runtime.
  - Code is loaded into memory when needed.
  - Smaller executable size.
  - Runtime dependencies on shared libraries.
  - Can be used by multiple programs without code duplication.

## Basic Usage of `nm`, `ldd`, and `ldconfig`

- **nm (Symbol Name Utility):**
  - Displays symbol information from object files, shared libraries, and executables.
  - Example: `nm -D libmylib.so`

- **ldd (List Dynamic Dependencies):**
  - Lists shared library dependencies for an executable or shared library.
  - Example: `ldd ./my_program`

- **ldconfig (Library Configuration Utility):**
  - Updates the shared library cache to find new libraries.
  - Example: `sudo ldconfig`

