#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	// Getting the last digit of n
	last_digit = n % 10;

	// CHecking the conditions
	if(last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last			_digit);
	}
	else if(last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else if(last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",				 n, last_digit);
	}
	/* Return 0 if the program is successful */
	return 0;
}	
