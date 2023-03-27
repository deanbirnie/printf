#include "../main.h"
#include <stdio.h>

int main(void)
{
    int res1, res2;
    char *str1 = "This is a test";
    char *str2 = NULL;

    /* Testing the print_string function with a valid string */
    res1 = print_string(str1);
    printf("Number of characters printed: %d\n", res1);

    /* Testing the print_string function with a null string */
    res2 = print_string(str2);
    printf("Number of characters printed: %d\n", res2);

    return (0);
}


