#include <stdio.h>
/* adding header files */

/**
 *  main - this program print base 16 numbers
 *
 *  Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	char s;

	/* loop for numbers 0-9 */
	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
	}
	/* loop for a-f */
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
