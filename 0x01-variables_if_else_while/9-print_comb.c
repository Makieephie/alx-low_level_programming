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
	int s;

	/* loop for numbers 0-9 */
	for (s = 0; s <= 9; s++)
	{
		putchar(s + '0');
	}
	/* second loop */
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			putchar(i + j + '0');
		}
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
