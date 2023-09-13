#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic char
 *
 * @c: character to be checked
 *
 * Return: 1 if c is char, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
