#include <stdio.h>

/**
 * main - A function that prints first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bfr = 1;
	unsigned long int aftr = 2;
	unsigned long int l = 1000000000;
	unsigned long int bfr1, bfr2;
	unsigned long int aftr1, aftr2;

	printf("%lu", bfr);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aftr);
		aftr += bfr;
		bfr = aftr - bfr;
	}
	bfr1 = (bfr / l);
	bfr2 = (bfr % l);
	aftr1 = (aftr / l);
	aftr2 = (aftr % l);

	for ( i = 92; i < 99; i++)
	{
		printf(", %lu", aftr1 + (aftr2 / l));
		printf("%lu",aftr2 % l);
		aftr1 = aftr1 + bfr1;
		bfr1 = aftr1 - bfr1;
		aftr2 = aftr2 + bfr2;
		bfr2 = aftr2 - bfr2;
	}
	printf("\n");
	return (0);
}
