#include "main.h"
/* adding header files */

/**
 * print_last_digit - this program prints the last digit of a number
 *
 * @n: number to be checked
 *
 *  Return: last digit
 */
int print_last_digit(int n)
{
	/* check for last digit */
	int last_digit;
	if (n < 0)
	{
		last_digit = (n % 10) * -1
	}
	else
	{
		last_digit = (n % 10);
	}
	_putchar(last_digit + '0';
	
	
	return (last_digit);
}
