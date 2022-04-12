#include "main.h"
/* adding header files */

/**
 *  _islower - this program checks if a character is lowercase  or not
 *
 * @c: number to be checked
 *
 *  Return: 1 (success) or 0 (failure)
 */
int _islower(int c)
{
	/* check if c is lowercases */
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
