#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longint;
	long long int longlongint;
	float floatType;

	printf("Size of char: %lu bytes\n", sizeof(charType));
	printf("Size of int: %lu bytes\n", sizeof(intType));
	printf("Size of long int: %lu bytes\n", sizeof(longint));
	printf("Size of long long int: %lu bytes\n", sizeof(longlongint));
	printf("Size of float: %lu bytes\n", sizeof(floatType));
	return (0);
}
