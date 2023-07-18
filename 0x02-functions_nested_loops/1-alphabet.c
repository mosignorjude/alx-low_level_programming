#include "main.h"
/**
  * main - entry point
  * Return: void
  * prints alphabet on lower case
  */
int main(void)
{
	print_alphabet();
	return (0);
}

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
