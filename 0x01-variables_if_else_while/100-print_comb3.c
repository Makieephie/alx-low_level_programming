#include <stdio.h>
/* adding header files */

/**
 *  main - this program print possible combinations of 0-9 too 99
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
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
