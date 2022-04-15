#include "main.h"
/** 
 * jack_bauer - Print every minute of the day from 0:00 to 23:59
 *
 * Return: (void)
 */

void jack_bauer(void)
{
	int hr1 = 0;
	int hr2 = 0;
	int min1 = 0;
	int min2 = 0;

	while (hr1 < 3)
	{
		while (hr2 <= 9)
		{
			if (hr1 == 2 && hr2 == 4)
				break;
			while (min1 < 6)
			{
				while (min2 <= 9)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');

					min2++;
				}
				min2 = 0;
				min1++;
			}
			min1 = 0;
			hr2++;
		}
		hr2 = 0;
		hr1++;
	}
}
