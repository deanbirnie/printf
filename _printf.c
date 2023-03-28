#include "main.h"
#include <stdarg.h>

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
    int printed_chars = 0;

    /* The f_list array contains a list of conversion specifiers and their corresponding function pointers. */
    conver_t f_list[] = {
        {"c", print_char},    /* 'c' conversion specifier for printing a single character */
        {"s", print_string},  /* 's' conversion specifier for printing a string of characters */
        {"%", print_percent}, /* '%' conversion specifier for printing a '%' character */
        {"d", print_int},     /* 'd' conversion specifier for printing a decimal (base 10) integer */
        {"i", print_int},     /* 'i' conversion specifier for printing a signed decimal (base 10) integer */
    };

    va_list arg_list; /* The va_list type is used for traversing the variable argument list passed to a function */

    /* Check if format string is NULL */
    if (format == NULL)
        return (-1);

    /* Initialize arg_list to the first optional argument after the format string */
    va_start(arg_list, format);

    /* Calls format_receiver() with format string, conversion specifier list, and arg_list as arguments */
    printed_chars = format_receiver(format, f_list, arg_list);

    /* Clean up arg_list */
    va_end(arg_list);

    /* Return the total number of characters printed */
    return (printed_chars);
}

