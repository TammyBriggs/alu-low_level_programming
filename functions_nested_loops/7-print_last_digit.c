#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: integer whose last digit we want to find
 * Return: int
 */

int print_last_digit(int n)
{
	int last_digit;
	int n_positive;

	if (n < 0)
	{
		n_positive = (n % 10) * -1;
		last_digit = n_positive;
		_putchar(last_digit + 48);
		return (last_digit);
	}

	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
