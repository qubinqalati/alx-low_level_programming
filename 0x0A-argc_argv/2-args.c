#include <stdio.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int num;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (num = 1; num < argc; num++)
		{
			printf("%s\n", argv[num]);
		}
	}
	return (0);
}
