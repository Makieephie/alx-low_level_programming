#include <unistd.h>

/**
 * _putchar - write the character c to stdio
 *
 * Return: On success 1
 */
int _putchar(c)
{
	return (write(1, &c, 1));
}
