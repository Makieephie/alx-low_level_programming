#include <stdio.h>
/* adding header files */

/**
 *  main - this program print 0-9
 *
 *  Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	int s;

	/* loop for numbers 0-9 */
	for (s = 0; s <= 9; s++)
	{
		putchar(s + '0');
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
