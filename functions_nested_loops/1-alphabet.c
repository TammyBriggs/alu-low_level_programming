#include "main.h"
/**
 * print_alphabet -  prints the lowercase alphabet
 *
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';
	int icount;

	for (icount = 0; icount < 26; icount++)
	{
		_putchar(c + icount);
	}
	_putchar(10);
}
