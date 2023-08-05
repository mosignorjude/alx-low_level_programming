#include "main.h"
/**
  * _abs- print absolute numbers
  * Return: a postive number always
  * @n: takes the character parameter
  */
int _abs(int n)
{
	if (n > 0)
	{

		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
