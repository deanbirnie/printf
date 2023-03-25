#include "main.h"

/**
 * print_integer - Function to print an integer
 * @list: list of arguments
 * Return: Will return the number of characters printed.
 */
/* This function prints an integer, and takes in a va_list argument list */
int print_integer(va_list list)
{
	/* Declaring an integer variable num_length to store the number of characters printed */
	int num_length;

	/* Calling the print_number() function to print the integer value, and storing the number of characters printed in num_length */
	num_length = print_number(list);

	/* Return the value of num_length */
	return (num_length);
}

/**
 * print_number - Function to print a number
 * @args: List of arguments
 * Return: The number of arguments printed
 */
/* This function prints a number, and takes in a va_list argument args */
int print_number(va_list args)
{
	/* Declaring integer variables n, div, len and unsigned integer variable num */
	int n; /* n is the number that needs to be printed */
	int div; /* div is used to find the divisor to get the leftmost digit */
	int len; /* len stores the number of characters printed */
	unsigned int num; /* num stores the absolute value of the number n */

	/* Initializing the value of n to the argument passed through va_arg */
	n  = va_arg(args, int);

	/* Initializing the values of div and len to 1 and 0 respectively */
	div = 1;
	len = 0;

	/* If n is negative, print a '-' and multiply n by -1 and assign it to num */
	if (n < 0)
	{
		len += _putchar('-'); /* Print the negative sign */
		num = n * -1; /* Get the absolute value of the number */
	}
	/* If n is positive, assign n to num */
	else
		num = n;

	/* Loop to find the divisor which can divide the given number to get the leftmost digit */
	for (; num / div > 9; )
		div *= 10;

	/* Loop to print the digits of the number starting from the leftmost digit */
	for (; div != 0; )
	{
		len += _putchar('0' + num / div); /* Print the leftmost digit */
		num %= div; /* Get the remainder */
		div /= 10; /* Get the divisor for the next digit */
	}

	/* Return the value of len, which is the number of characters printed */
	return (len);
}

