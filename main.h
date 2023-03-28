#ifndef MAIN_H /* Header guard to prevent multiple inclusions of this header */
#define MAIN_H

#include <stdarg.h> /* Required for using variable argument lists with va_list, va_start, va_arg, and va_end */

/* Function prototypes */

int _putchar(char c);
/*
 * Writes a character to stdout.
 * Returns the number of characters written on success, -1 on failure.
 */

int _printf(const char *format, ...);
/*
 * Receives the main string and all the necessary parameters to print a formatted string.
 * Returns a total count of the characters printed.
 */

int print_char(va_list args);
/*
 * Prints a single character from the variable argument list.
 * Returns the number of characters printed.
 */

int print_string(va_list args);
/*
 * Prints a string of characters from the variable argument list.
 * Returns the number of characters printed.
 */

int print_percent(va_list args);
/*
 * Prints a '%' character.
 * Returns the number of characters printed.
 */

int print_int(va_list args);
/*
 * Prints a decimal (base 10) integer from the variable argument list.
 * Returns the number of characters printed.
 */

#endif /* MAIN_H */

