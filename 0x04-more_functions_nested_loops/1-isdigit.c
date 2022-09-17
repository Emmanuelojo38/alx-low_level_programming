#include "main.h"

/**
 * _isdigit - checks whether or not a character is a digit
 * @c: tested character
 * Return: 1 if it is, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
