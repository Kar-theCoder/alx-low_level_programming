#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int password[100];
	int a, summ, num;

	summ = 0;

	srand(time(NULL));

	for ( a = 0; a < 100; a++)
	{
		password[a] = rand() % 78;
		summ += (password[a] + '0');
		putchar(password[a] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - summ - '0';
			summ += num;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}