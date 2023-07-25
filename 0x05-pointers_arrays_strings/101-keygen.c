#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - randomly generates password
 * @N: len of the pswd 2 b generated
 *
 * Return: 0
 */

void keygen(int N);

int main(void)
{
	int N = 10;

	keygen(N);

	printf("\n");

	return (0);
}

void keygen(int N)
{
	int i = 0;
	int generator = 0;
	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&*?";
	char password[N];

	generator = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (generator == 1)
		{
			password[i] = numbers[rand() % 10];
			generator = rand() % 4;
			printf("%c", password[i]);
		}
		else if (generator == 2)
		{
			password[i] = symbols[rand() % 8];
			generator = rand() % 4;
			printf("%c", password[i]);
		}
		else if (generator == 3)
		{
			password[i] = alpha[rand() % 26];
			generator = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			generator = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
