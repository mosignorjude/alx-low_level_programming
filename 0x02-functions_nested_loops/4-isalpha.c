#include "main.h"
/**
  * _isalpha- checks for alphabet characters
  * Return: 1 if lower case otherwise 0
  * @c: takes the character parameter
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
