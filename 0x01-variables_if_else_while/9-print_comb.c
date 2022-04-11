#include <stdio.h>
/* adding header files */

/**
 *  main - this program print possible combinations of 0-9
 *
 *  Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	int i;
	int j;

	/* loop for numbers 0-9 */
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(j + "%i",i);
		}
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
