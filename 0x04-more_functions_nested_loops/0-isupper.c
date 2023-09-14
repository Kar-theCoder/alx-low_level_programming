#include "main.h"

/**
 * _isupper - A function that checks for uppercase char
 *
 * @c: the char to be checked
 *
 * Return: 1 when upper , else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
