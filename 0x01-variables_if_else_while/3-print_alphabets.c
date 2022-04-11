#include <stdio.h>
/* adding header files */

/**
 *  main - this program print alphabets in lower case
 *  and uppercase letters
 *
 *  Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	char s;

	/* first loop for lowercase letters */
	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	/* second loop for capital letters */
	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
