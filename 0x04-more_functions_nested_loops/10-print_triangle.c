#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;
	int k = size;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		k--;
		for (j = 0; j < size; j++)
		{
			if (j >= k)
				putchar('#');
			else
				putchar(' ');
		}
		putchar(10);
	}
}
