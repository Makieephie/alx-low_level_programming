#include <stdio.h>
/* adding header files */

/**
 * main - this program print lowercase 
 * letter in reverse order
 *
 * Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	int s;

	/* loop for printing lowercase letter in reverse */
	for (s = 25; s >= 0; s--)
	{
		putchar('a' + s);
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
