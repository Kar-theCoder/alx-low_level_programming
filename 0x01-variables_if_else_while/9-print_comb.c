#include <stdio.h>

/**
 * main - A program that prints all combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers ++)
	{
		putchar(numbers + '0');

		if (numbers == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
