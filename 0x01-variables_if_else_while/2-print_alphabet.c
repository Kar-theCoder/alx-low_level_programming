#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
