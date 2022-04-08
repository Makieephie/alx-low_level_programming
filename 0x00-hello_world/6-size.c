#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longint;
	long long int longlongint;
	float floatType;

	printf("Size of char: %lu byte(s)\n", sizeof(charType));
	printf("Size of int: %lu byte(s)\n", sizeof(intType));
	printf("Size of long int: %lu byte(s)\n", sizeof(longint));
	printf("Size of long long int: %lu byte(s)\n", sizeof(longlongint));
	printf("Size of float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
