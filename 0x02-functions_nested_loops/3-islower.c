#include "main.h"
/**
  * _islower- prints alphabet 10 times
  * Return: 1 if lower case otherwise 0
  * @int c: takes the character parameter
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

