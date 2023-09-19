#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to src
 *
 * @dest: Where the string is being copied to
 *
 * @src: The string which is being copied
 *
 * Return: the value of the copied string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int b = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for (b = 0; b < length; b++)
	{
		dest[b] = src[b];
	}
	dest[length] = '\0';
	return (dest);
}
