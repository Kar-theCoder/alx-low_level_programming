#include <stdio.h>

/**
 * main - A program that prints the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;
	char letters;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
	}
	for (letters = 'a'; letters < 'g'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
