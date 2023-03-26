#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/* This function writes a character to the standard output and returns
 * the number of characters written.
 */
int _putchar(char c);

/* This function prints a formatted string to the standard output and
 * returns the number of characters printed.
 */
int _printf(const char *format, ...);

/* This function prints a string argument to the standard output and
 * returns the number of characters printed.
 */
int print_string(va_list arg_list);

/* This function prints an integer argument to the standard output and
 * returns the number of characters printed.
 */
int print_integer(va_list arg_list);

#endif

