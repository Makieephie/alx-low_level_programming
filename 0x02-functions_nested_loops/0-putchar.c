#include "main.h"
/* adding header files */
int _putchar(char c);

/**
 *  main - this program print _putchar
 *
 *  Return: 0 if everything goes well
 */
int main(void)
{
	/* variable declarations */
	char s[] = '_putchar';
	int i = 0;

	/* loop through the letters */
	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');

	/* return 0 if it is successful */
	return (0);
}
