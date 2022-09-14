#include "main.h"
/**
 * main - Entry point
 * _islower: func to check for lowercase
 * @c: argument function
 * Return: Always 0 (Success)

int  _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
