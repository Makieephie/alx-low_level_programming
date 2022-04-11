#include <stdio.h>


/* main - this program print alphabets in lower case */
int main(void)
{
	/* variable declarations */
	char s;

	/* looping over alphabets */
	for(s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
