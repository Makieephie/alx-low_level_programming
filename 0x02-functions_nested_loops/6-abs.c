#include "main.h"
/* adding header files */

/**
 *  _abs - this program returns absolute value
 *
 * @a: number to be checked
 *
 *  Return: Absolute Value
 */
int _abs(int a)
{
	/* check if a is an absolute value */
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
