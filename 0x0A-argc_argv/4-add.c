#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: count.
 * @argv: command line argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j, num_eqv;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		/*Input validation: Check if each character in argv[i] is a digit*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error");
				return (1);
			}
		}
		num_eqv = atoi(argv[i]);
		sum += num_eqv;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

