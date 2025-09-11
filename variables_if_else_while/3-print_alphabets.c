#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	char highCase;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (highCase = 'A'; highCase <= 'Z'; highCase++)
	{
		putchar(highCase);
	}

	putchar('\n');
	return (0);
}
