#include "main.h"

/**
 * _islower - A function that checks for lowercase char
 *
 * @c: the char to be checked
 *
 * Return: 1 if c is lowercase, else 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
