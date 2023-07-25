#include "main.h"

/**
 * puts2 - prints even number characters of a string
 * @str: string to be printed
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	/*print the string*/
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
}
