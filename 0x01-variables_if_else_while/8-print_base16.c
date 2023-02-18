#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * prints all the numbers of base 16 in lowwercase
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
