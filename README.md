# Unhandled NULL Pointer Dereference in C

This repository demonstrates a common error in C programming: dereferencing a NULL pointer without proper error handling.  The code attempts to modify a variable through a pointer, but if the pointer is NULL (not pointing to a valid memory location), this leads to undefined behavior, often resulting in program crashes or segmentation faults.  The solution demonstrates the importance of adding NULL pointer checks before dereferencing.

## Bug Description
The `bug.c` file contains a simple C program that assigns a value to an integer using a pointer.  However, this code lacks error handling for the case where the pointer might be NULL. This could easily lead to a segmentation fault if the pointer is uninitialized or becomes NULL during execution.