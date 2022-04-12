#include "main.h"
/* adding header files */

/**
 *  print_sign - this program prints the sign of a number n
 *
 * @n: number to be checked
 *
 *  Return: 1 (n is greater than or equals 1) 
 *  or 0 (n is equals 0)
 *  or -1 (n is less than 0)
 */
int print_sign(int n)
{
	/* check the value of n*/
	if (n >= 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
