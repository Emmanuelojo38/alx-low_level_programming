#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main: Entry point
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	int tens, units, k;

	k = '1';
	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = k; units <= '9'; units++)
		{
			putchar(tens);
			putchar(units);
			if (tens == '8' && units == '9')
				break;
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
