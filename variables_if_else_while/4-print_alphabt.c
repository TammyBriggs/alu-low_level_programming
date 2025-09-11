#include <stdio.h>
/**
 * Betty style
 *
 *
 */
int main()
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
