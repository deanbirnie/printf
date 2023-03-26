#include "main.h"

/*
 * This function, named print_string, is used to print a string. It takes in a list of arguments.
 * 
 * @list: the list of arguments passed to the function
 * 
 * The function returns an integer value which indicates the number of characters printed.
 */
int print_string(va_list list)
{
    /* Declare a counter variable i and a char pointer str */
    int i;
    char *str;

    /* Get the next argument from the va_list as a char pointer */
    str = va_arg(list, char *);

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

