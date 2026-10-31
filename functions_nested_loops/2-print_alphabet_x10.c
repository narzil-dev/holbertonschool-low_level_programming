
#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
	int l;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
