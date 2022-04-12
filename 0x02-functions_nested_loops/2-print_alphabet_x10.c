#include "main.h"
/* adding header files */

/**
 *  print_alphabet_x10 - this program print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	/* variable declarations */
	int n = 10;

	/* loop through the letters */
	while (n < 10)
	{
		/* second loop for printing */
		char s;

		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		n++;
	}
	_putchar('\n');
}
