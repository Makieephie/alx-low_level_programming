#include <stdio.h>
/* adding header files */

/**
 *  main - this program print alphabets in lowercase
 *
 *  Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	char s;

	/* loop for lowercase letters */
	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
