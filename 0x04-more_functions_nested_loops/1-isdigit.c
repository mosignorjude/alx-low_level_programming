#include "main.h"

/**
 * _isdigit - checks for integer value.
 * @c: parameter
 * Return: 1 if c is an integer otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

