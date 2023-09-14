#include <stdio.h>

/**
 * main - A function that finds and prints sum of even-valued terms
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long fibsum;
	float total;

	while (1)
	{
		fibsum = fib1 + fib2;

		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			total += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", total);

	return (0);
}
