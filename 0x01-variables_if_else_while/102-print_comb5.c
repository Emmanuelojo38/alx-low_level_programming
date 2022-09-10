#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int no1, no2;

	for (no1 = 0; no1 <= 98; num1++)
	{
		for(no2 = no1 + 1; no2 <= 99; no2++)
		{
			putchar((no1 / 10) + '0');
			putchar((no1 % 10) + '0');
			putchar('\n');
			putchar((no2 /10) + '0');
			putchar((no2 % 10) + '0');
			
			if (no1 == 98 && no2 == 99)
				continue;
			putchar(',');
			putchar(' ')
		}
	}
	putchar('\n');
	return (0);
}
