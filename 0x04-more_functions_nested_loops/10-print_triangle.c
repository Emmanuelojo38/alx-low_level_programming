#include <stdio.h>
#include "main.h"

/*
 * main - function that prints a triangle, followed by a new line
 *
 * Return: Always 0
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
