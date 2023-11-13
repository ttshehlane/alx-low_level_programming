# 0x18. C - Dynamic libraries

## Overview

This project demonstrates the creation and usage of dynamic libraries in C, exploring the concepts of dynamic linking, environment variables, and library-related tools. The README.md file provides an in-depth explanation of dynamic libraries, how to create and use them, the significance of the `$LD_LIBRARY_PATH` environment variable, and the distinctions between static and shared libraries. Additionally, basic usage of `nm`, `ldd`, and `ldconfig` tools is covered.

## Table of Contents

- [Dynamic Libraries](#dynamic-libraries)
  - [What is a Dynamic Library?](#what-is-a-dynamic-library)
  - [How Does it Work?](#how-does-it-work)
  - [How to Create a Dynamic Library](#how-to-create-a-dynamic-library)
  - [How to Use a Dynamic Library](#how-to-use-a-dynamic-library)
- [Environment Variable: $LD_LIBRARY_PATH](#environment-variable-ld_library_path)
  - [Usage of $LD_LIBRARY_PATH](#usage-of-ld_library_path)
- [Differences Between Static and Shared Libraries](#differences-between-static-and-shared-libraries)
- [Basic Usage of nm, ldd, and ldconfig](#basic-usage-of-nm-ldd-and-ldconfig)

## Dynamic Libraries

### What is a Dynamic Library?

A dynamic library, also known as a shared library, is a compiled binary file containing code and data that multiple programs can use simultaneously. Unlike static libraries, dynamic libraries are loaded into memory during program execution, allowing for efficient code reuse and smaller executable sizes.

### How Does it Work?

Dynamic linking is the process of connecting a program with a library at run-time. When a program is executed, the dynamic linker loads the necessary shared libraries into memory and resolves symbols, enabling the program to access the library's functions and data.

### How to Create a Dynamic Library

To create a dynamic library, you can use the following commands:

```bash
gcc -c -fPIC library.c -o library.o
gcc -shared -o liblibrary.so library.o
```

Here, `library.c` is your source code file.

### How to Use a Dynamic Library

To use a dynamic library in your program, compile with the following:

```bash
gcc -o my_program my_program.c -L/path/to/library -llibrary
```

Ensure the library path is included in `$LD_LIBRARY_PATH` or specify it during compilation.

## Environment Variable: $LD_LIBRARY_PATH

### Usage of $LD_LIBRARY_PATH

`$LD_LIBRARY_PATH` is an environment variable that specifies the directories where the dynamic linker looks for shared libraries. To add a directory to this path, use:

```bash
export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
```

This allows the dynamic linker to find libraries in the specified directory.

## Differences Between Static and Shared Libraries

- **Static Libraries:**
  - Linked at compile-time.
  - Increases executable size.
  - Every program has its own copy of the library.

- **Shared Libraries:**
  - Linked at run-time.
  - Smaller executable size.
  - Multiple programs can share the same library in memory.

## Basic Usage of nm, ldd, and ldconfig

- **nm:** Displays symbol information from object files or binaries.
  ```bash
  nm my_program
  ```

- **ldd:** Shows shared library dependencies.
  ```bash
  ldd my_program
  ```

- **ldconfig:** Configures dynamic linker run-time bindings.
  ```bash
  sudo ldconfig
  ```
