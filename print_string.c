#include "main.h"

#include <stdio.h>

/*
 * This function, named print_string, is used to print a string. It takes in a
 * char pointer.
 *
 * @str: the string to print
 *
 * The function returns an integer value which indicates the number of
 * characters printed.
 */
int print_string(char *str)
{
    /* Declare a counter variable i */
    int i;

    /* If the string is null, then print a default string */
    if (str == NULL)
    {
        str = "(null)";
    }

    /* Loop through each character in the string and print it to the console */
    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    /* Return the number of characters printed */
    return (i);
}

