#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 *
 * @s: string to be printed
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int length = 0;
	int a;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (a = length; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
