#include "main.h"

/**
 * swap_int - A function that swaps values of two integers
 *
 * @a: value of integer
 *
 * @b: value of integer
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
