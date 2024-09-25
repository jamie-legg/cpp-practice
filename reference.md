# Chapter 1 - Getting Started

## The Standard Library

- `std::cout` - Outputs to the console
- `std::cin` - Inputs from the console
- `std::endl` - Ends the line and flushes the buffer
- `std::string` - A data type that stores a sequence of characters
- `std::stoi` - A function that converts a string to an integer (string to integer - s to i)
- `std::isdigit` - A function that checks if a character is a digit (0-9)
- `std::substr` - A function that returns a substring of a string (start_index, length)
- `std::pow` - A function that returns the power of a number (base, exponent)
- `std::numeric_limits` - A library that provides the maximum and minimum values for a given type
- `std::numeric_limits<int>::max()` - The maximum value for an integer
- `std::numeric_limits<int>::min()` - The minimum value for an integer
- `std::numeric_limits<int>::max()` - The maximum value for an integer


## C Standard Library (stdlib.h)

> This header defines several general purpose functions, including dynamic memory management, random number generation, communication with the environment, integer arithmetics, searching, sorting and converting.

> Functions - String conversion

- `atof` - Converts a string to a floating point number
- `atoi` - Converts a string to an integer
- `atol` - Converts a string to a long integer
- `atoll` - Converts a string to a long long integer
- `strtod` - Converts a string to a double
- `strtof` - Converts a string to a float
- `strtol` - Converts a string to a long integer
- `strtold` - Converts a string to a long double
- `strtoll` - Converts a string to a long long integer
- `strtoul` - Converts a string to an unsigned long integer
- `strtoull` - Converts a string to an unsigned long long integer

> What is the difference between Float and Double?

- Float is a single precision floating point number
- Double is a double precision floating point number
- This means that double can store more information than float, since it takes up more memory
- A float is 4 bytes, while a double is 8 bytes
- With 4 bytes, a float can store up to 7 decimal digits
- With 8 bytes, a double can store up to 15 decimal digits
- This is why doubles are more accurate than floats
- In most cases, double is the better choice

> What is the difference between exit and quick exit?

- `exit` - This will call any atexit registered functions and then terminate the program.
- `Ctrl - C` acts as an interrupt and will not call any atexit registered functions.
- `quick_exit` - This will not call any atexit registered functions and will terminate the program immediately
- `_Exit` - This will not call any atexit registered functions and will terminate the program immediately
- This is why `_Exit` is used in the signal handler, since it will not call any atexit registered functions.


> Functions - Pseudo random sequence generation

- `rand` - Generates a random number
- `srand` - Seeds the random number generator

> Functions - Dynamic memory management

- `malloc` - Allocates memory
- `calloc` - Allocates memory and initializes it to zero
- `realloc` - Reallocates memory
- `free` - Frees memory

> Functions - Environment

- `abort` - Terminates the program
- `atexit` - Registers a function to be called at program exit
- `at_quick_exit` - Registers a function to be called at quick exit
- `exit` - Terminates the program
- `getenv` - Gets the value of an environment variable
- `quick_exit` - Terminates the program immediately
- `system` - Executes a command in a subshell
- `_Exit` - Terminates the program immediately

> Functions - Searching and sorting

- `bsearch` - Searches an array using binary search
- `qsort` - Sorts an array

> Functions - Integer arithmetics
- `abs` - Returns the absolute value of an integer
- `div` - Performs division and returns the quotient and remainder
- `labs` - Returns the absolute value of a long integer
- `ldiv` - Performs division and returns the quotient and remainder
- `llabs` - Returns the absolute value of a long long integer
- `lldiv` - Performs division and returns the quotient and remainder


> Functions - Multibyte characters

- `mblen` - Returns the length of a multibyte character
- `mbtowc` - Converts a multibyte character to a wide character
- `wctomb` - Converts a wide character to a multibyte character

> Functions - Multibyte strings

- `mbstowcs` - Converts a multibyte string to a wide string
- `wcstombs` - Converts a wide string to a multibyte string

> Functions - Memory

- `memchr` - Searches an area of memory for a character
- `memcmp` - Compares two areas of memory
