#include "main.h"
#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */

int main(void)
{
	unsigned long int fib1 = 0, bik1 = 1, fib2 = 0, bik2 = 2;
	unsigned long int temp1, temp2, temp3;
	int i_count;

	printf("%lu, %lu, ", bik1, bik2);
	for (i_count = 2; i_count < 98; i_count++)
	{
		if (bik1 + bik2 > LARGEST || fib2 > 0 || fib1 > 0)
		{
			temp1 = (bik1 + bik2) / LARGEST;
			temp2 = (bik1 + bik2) % LARGEST;
			temp3 = fib1 + fib2 + temp1;
			fib1 = fib2, fib2 = temp3;
			bik1 = bik2, bik2 = temp2;
			printf("%lu%010lu", fib2, bik2);
		}

		else
		{
			bik1 = bik2, bik2 = temp2;
			printf("%lu", bik2);
		}

		if (i_count != 97)
		{
			printf(", ");
		}
	printf("\n");
	return (0);
	}
}
