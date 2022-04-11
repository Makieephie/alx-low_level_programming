#include <stdio.h>
/* header file declaration */


/* this program print alphabets in lower case */
int main(void)
{
	/* variable declarations */
	char s;

	/* looping over alphabets */
	for (s = 'a'; s <= 'z'; s++)
	{	/* printing output */
		putchar(s);
	}
	putchar('\n');
	/* return 0 if it is successful */
	return (0);
}
