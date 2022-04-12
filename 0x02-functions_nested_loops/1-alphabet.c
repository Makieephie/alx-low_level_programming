#include "main.h"
/* adding header files */

/**
 *  print_alphabet - this program print lowercase alphabets
 */
void print_alphabet(void)
{
	/* variable declarations */
	char s;

	/* loop through the letters */
	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
