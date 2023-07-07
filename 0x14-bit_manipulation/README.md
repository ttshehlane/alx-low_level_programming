# Bit Manipulation in C

This repository provides examples and explanations of bit manipulation in the C programming language. Bit manipulation is a powerful technique used to manipulate individual bits within a byte or word, allowing for efficient storage and retrieval of data.

## Contents

1. [Introduction to Bit Manipulation](#introduction-to-bit-manipulation)
2. [Bitwise Operators](#bitwise-operators)
3. [Bitwise Operations](#bitwise-operations)
4. [Common Bit Manipulation Techniques](#common-bit-manipulation-techniques)
5. [Examples](#examples)

## Introduction to Bit Manipulation

Bit manipulation involves performing operations at the individual bit level, rather than on the entire byte or word. It provides a way to perform complex operations efficiently and compactly. By manipulating individual bits, we can set or clear specific flags, perform bitwise operations, extract or insert specific bit patterns, and much more.

## Bitwise Operators

C provides several bitwise operators that allow you to manipulate individual bits. These operators include:

- **AND (`&`):** Performs a bitwise AND operation between two operands.
- **OR (`|`):** Performs a bitwise OR operation between two operands.
- **XOR (`^`):** Performs a bitwise XOR (exclusive OR) operation between two operands.
- **NOT (`~`):** Performs a bitwise complement operation (flips the bits) on a single operand.
- **Left Shift (`<<`):** Shifts the bits of the left operand to the left by a specified number of positions.
- **Right Shift (`>>`):** Shifts the bits of the left operand to the right by a specified number of positions.

## Bitwise Operations

Bitwise operations can be used for various purposes, including:

- **Setting a Bit:** Use the OR (`|`) operator to set a particular bit to 1.
- **Clearing a Bit:** Use the AND (`&`) operator to clear a particular bit to 0.
- **Toggling a Bit:** Use the XOR (`^`) operator to toggle a particular bit (0 to 1 or 1 to 0).
- **Checking a Bit:** Use the AND (`&`) operator to check the state of a particular bit.
- **Shifting Bits:** Use the left shift (`<<`) or right shift (`>>`) operators to shift the bits in a given direction.

## Common Bit Manipulation Techniques

This section provides examples of common bit manipulation techniques, including:

- **Bit Flag Manipulation:** Setting, clearing, and checking individual flags within a bit field.
- **Bit Packing and Unpacking:** Storing multiple values within a single byte or word using bit fields.
- **Bit Masking and Bit Testing:** Using masks to extract specific bits or test for particular bit patterns.
- **Bit Counting and Parity Checking:** Counting the number of set bits or checking the parity (even/odd) of a value.

## Examples

The `examples` directory contains several C programs demonstrating various bit manipulation techniques. Each example includes comments explaining the purpose and steps involved in the manipulation.

- `bit_flags.c`: Demonstrates how to manipulate individual flags within a bit field.
- `bit_packing.c`: Shows how to pack and unpack multiple values within a single byte.
- `bit_masking.c`: Illustrates the use of masks to extract specific bits or patterns.
- `bit_counting.c`: Provides examples of counting set bits and checking the parity of a value.
