#include <stdio.h>

/**
 * main - A function that lists all natural numbers below 1024 and multiples
 * of 3 and 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n" , sum);
	return (0);
}
