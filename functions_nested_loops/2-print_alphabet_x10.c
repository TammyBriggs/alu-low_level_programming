#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times on new lines
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char mycha = 'a';
	int iyk, jak;

	for (iyk = 0; iyk < 10; iyk++)
	{
		for (jak = 0; jak < 26; jak++)
		{
			_putchar(mycha + jak);
		}
		_putchar(10);
	}
}
