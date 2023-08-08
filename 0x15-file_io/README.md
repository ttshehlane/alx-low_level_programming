# File I/O in C

This README.md file provides an explanation of File I/O operations in the C
programming language. It covers topics such as creating, opening, closing,
reading, and writing files, file descriptors, standard file descriptors, POSIX
names, file permissions, system calls, and the difference between functions and
system calls.

## Table of Contents
- [File I/O Basics](#file-io-basics)
- [File Descriptors](#file-descriptors)
- [Standard File Descriptors](#standard-file-descriptors)
- [I/O System Calls](#io-system-calls)
- [File Flags](#file-flags)
- [File Permissions](#file-permissions)
- [System Calls vs Functions](#system-calls-vs-functions)
- [Function Explanation](#function-explanation)

## File I/O Basics

File I/O (Input/Output) is a fundamental concept in programming that allows you
to interact with files on a computer's file system. In C, File I/O operations
are performed using the standard I/O library functions and system calls.

The basic operations involved in File I/O are as follows:
- **Creating a File**: The process of creating a new file on the file system.
- **Opening a File**: The process of establishing a connection between a file
  and a program to perform read and/or write operations.
  - **Closing a File**: The process of terminating the connection between a file
    and a program.
    - **Reading from a File**: The process of retrieving data from a file.
    - **Writing to a File**: The process of storing data into a file.

## File Descriptors

In C, a file descriptor is an integer value that represents an open file within
a process. It serves as a reference to the file for performing I/O operations.
The operating system maintains a table of open file descriptors for each
process.

## Standard File Descriptors

There are three standard file descriptors available in most operating systems:
1. **Standard Input (STDIN)**: File descriptor 0, which represents the input
stream where a program can read data. Its POSIX name is `stdin`.
2. **Standard Output (STDOUT)**: File descriptor 1, which represents the output
stream where a program can write data. Its POSIX name is `stdout`.
3. **Standard Error (STDERR)**: File descriptor 2, which represents the output
stream where a program can write error messages. Its POSIX name is `stderr`.

## I/O System Calls

In C, I/O operations are performed using system calls, which are low-level
functions provided by the operating system. These system calls allow programs to
interact with files and perform various operations.

The commonly used I/O system calls are:
- **open**: Opens a file and returns a file descriptor.
- **close**: Closes a file identified by its file descriptor.
- **read**: Reads data from a file into a buffer.
- **write**: Writes data from a buffer to a file.

## File Flags

When using the `open` system call to open a file, you can specify additional
flags to control the file's behavior. The flags are represented by predefined
constants and can be combined using bitwise OR (`|`) operator. Some commonly
used flags are:
- **O_RDONLY**: Opens the file in read-only mode.
- **O_WRONLY**: Opens the file in write-only mode.
- **O_RDWR**: Opens the file in read-write mode.

## File Permissions

File permissions control who can access a file and the type of access allowed.
When creating a file using the `open` system call, you can specify the
permissions using the `mode` parameter. The permissions are represented by octal
numbers and can be combined using bitwise OR (`|`) operator. For example, `0644`
represents read and write permissions for the owner and read-only permissions
for others.

## System Calls vs Functions

In C, system calls and functions serve different purposes:
- **Functions**: Functions are higher-level operations provided by libraries or
  the C standard library. They are usually implemented using one or more system
  calls and provide an abstraction for easier programming.
  - **System Calls**: System calls are low-level operations provided by the
    operating system. They allow programs to interact directly with the
    operating system kernel and perform operations such as I/O, process
    management, memory management, etc.

## Function Explanation

Now, let's explain the purpose of the functions mentioned:

### `ssize_t read_textfile(const char *filename, size_t letters);`

This function reads a text file specified by the `filename` parameter and prints
its content to the POSIX standard output. It reads a maximum of `letters`
characters from the file. The function returns the number of characters read or
-1 if an error occurs.

### `int create_file(const char *filename, char *text_content);`

This function creates a file with the given `filename` and writes the content
specified by the `text_content` parameter into the file. If the file already
exists, its content is overwritten. The function returns 1 on success or -1 if
an error occurs.

### `int wappend_text_to_file(const char *filename, char *text_content);`

This function appends the `text_content` at the end of the file specified by the
`filename` parameter. If the file does not exist, it is created. The function
returns 1 on success or -1 if an error occurs.

### `cp file_from file_to`

This command copies the content of the file `file_from` to a new file called
`file_to`. If `file_to` already exists, it is overwritten. This is not a
function but a shell command often used in UNIX-like operating systems.
