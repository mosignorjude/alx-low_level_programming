#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count.
 * @argv: command line argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

