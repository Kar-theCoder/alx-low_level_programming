#include "main.h"

/**
 * print_array - A function that prints n elements of an array of int
 *
 * @a: the name of the array
 *
 * @n: the number of elements in the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}

	if (p == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
