#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * starting with the first character 
 *
 * @str: The string to be printed
 *
 */

void puts2(char *str)
{
	int length = 0;
	int a = 0;
	char *p = str;
	int l;

	while (*p != '\0')
	{
		p++;
		length++;
	}
	a = length - 1;

	for (l = 0; l <= a; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}
