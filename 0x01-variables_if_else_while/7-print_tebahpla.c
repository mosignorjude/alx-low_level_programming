#include <stdio.h>
/**
 * main- entry point
 * Return: always return 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
