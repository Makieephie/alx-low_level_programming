#include "main.h"
/* adding header files */

/**
 *  print_alphabet - this program print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	/* variable declarations */
	int n = 10;

	/* loop through the letters */
	while (n < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
	}
	_putchar('\n');
}
