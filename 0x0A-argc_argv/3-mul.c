#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num of args
 * @argv: array of args
 *
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int num, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	i = atoi(argv[2]);
	printf("%d\n", num * i);
	return (0);
}
