# _printf

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)
## Prototype 
Recreation of function printf from the **C** standard library.

```c
int _printf(const char *format, ...)
```
## Description
Prints **ARGUMENTS** according to **FORMAT** especified, returns the numbers of characters printed on success, If an output throws an error a negative value is returned.

## Usage

  - Includes `holberton.h`
  - Calls the function: `_printf` passed in a string with optional arguments
  - Use format specifiers for desired output
  - Function returns `-1` upon error and `(null)` if a string argument is **NULL**

### Format Specifiers

**_printf** has several options to print a especific type of data, here are the followig options available:

| Format Specifier | Description |
| ------ | ------ |
| %c | prints a character to stdout. |
| %s | prints a string to stdout. |
| %i | prints an integer to stdout. |
| %d | prints an integer to stdout.  |
| %b | converts a number to binary. |
| %r | reverses a string. |
| %u | prints an unsigned integer. |
| %o | converts a number to octal base. |
| %x %X | converts a number to hexadecimal. |
| %p | prints the memory address of an argument. |


### Example Usage

- `_printf("Positive:[%d]\n", 762534);` Prints an integer followed by a new line.
- `_printf("String:[%s]\n", "I am a string !");` Prints a string followed by a new line.
- `_printf("Character:[%c]\n", 'H');` Prints a character followed by a new line.
- `_printf("Unknown:[%r]\n", "Reverse me");` Prints a string in reverse followed by a new line.

#### About
This project was created by - [Andres Martin](https://github.com/andres-martin) and [Heimer Rojas](https://github.com/HeimerR) at Holberton School Colombia cohort 0.
