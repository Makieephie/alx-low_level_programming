#include "main.h"
/* adding header files */

/**
 *  _isalpha - this program checks if a character is alphabet
 *
 * @c: number to be checked
 *
 *  Return: 1 (success) or 0 (failure)
 */
int _isalpha(int c)
{
	/* check if c is lowercases */
	if ((c > 97 && c <= 122) || (c > 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
