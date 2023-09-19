#include "main.h"

/**
 * puts_half - A function that prints half of the string
 *
 * @str: The string to be printed 
 *
 */

void puts_half(char *str)
{
	int s;
	int n;
	int length;

	for ( s = 0; str [s] != '\0'; s++)
		length++;
	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (s = n; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
