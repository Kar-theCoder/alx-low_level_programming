#include "main.h"

/**
 * print_alphabet_x10 - A function that prints alphabet in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char new_line;
	char alphabet;

	for (new_line = 0; new_line < 10; new_line++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
