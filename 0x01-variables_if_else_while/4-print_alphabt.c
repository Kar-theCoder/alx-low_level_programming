#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
		int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
			continue;
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
