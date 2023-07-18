#include "main.h"
/**
  * print_alphabet - prints alphabet in lowercase
  * Return: void
  * prints alphabet on lower case
  */
void print_alphabet(void)
{
	int c;
	c = 97;

	while (c <= 122)
	{
		_putchar(c);

		c++;
	}
	_putchar('\n');
}
