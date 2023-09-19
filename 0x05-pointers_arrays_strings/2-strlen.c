#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: the string being measured
 *
 * Return: the value of the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
