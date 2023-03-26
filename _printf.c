#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints a formatted string
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte used
 *         to end output to strings)
 */
int _printf(const char *format, ...)
{
    int printed_chars;
    va_list arg_list;

    /* Define an array of structures, containing format specifiers and their
     * corresponding functions to be called by format_reciever function
     */
    conver_t f_list[] = {
        {"s", print_string},
        {"d", print_integer},
        {"i", print_integer},
        {NULL, NULL} /* End of the array */
    };

    /* Check if format is NULL */
    if (format == NULL)
        return (-1);

    /* Initialize arg_list to retrieve variable number of arguments */
    va_start(arg_list, format);

    /* Call the format_reciever function, which uses the format string and
     * the array of format specifiers and their corresponding functions to
     * print the formatted string
     */
    printed_chars = format_reciever(format, f_list, arg_list);

    /* Clean up the argument list */
    va_end(arg_list);

    /* Return the total number of characters printed */
    return (printed_chars);
}

