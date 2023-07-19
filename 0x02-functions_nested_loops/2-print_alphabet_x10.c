#include "main.h"
/**
  * print_alphabet_x10 - prints alphabet 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i;
	char letters;

	for (i = 0; i < 10; i++)
	{
		for(letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}

}
