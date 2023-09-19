#include "main.h"

/**
 * _atoi - A function that convrts a string to an int
 *
 * @s: The string to be converted 
 *
 * Return: The integer value
 *
 */

int _atoi(char*s)
{
	int i;
	int neg;
	int n;
	int length;
	int v;
	int num;

	i = 0;
	neg = 0;
	n = 0;
	length = 0;
	v = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && v == 0)
	{
		if (s[i] == '-')
			++neg;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';

			if (neg % 2)
				num = -num;
			n = n * 10 + num;
			v = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			v = 0;
		}
		i++;
	}
	if (v == 0)
		return (0);

	return (n);
}


