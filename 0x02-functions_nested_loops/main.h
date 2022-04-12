#include <unistd.h>

int _putchar(char c);
/**
 * _putchar - write the character c to stdio
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
