#include "main.h"
/* adding header files */

/**
 *  print_alphabet_x10 - this program print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	/* variable declarations */
	int n;

	/* loop through the letters */
	for (n = 0; n < 10; n++)
	{
		/* second loop for printing */
		char s;

		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
