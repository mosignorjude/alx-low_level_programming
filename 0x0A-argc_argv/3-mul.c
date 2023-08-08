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
	int i;
	int mul = 1;

	if (argc < 3)
	{
		for (i = 1; i < argc; i++)
		{
			int num_eqv = atoi(argv[i]);

			mul *= num_eqv;
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
