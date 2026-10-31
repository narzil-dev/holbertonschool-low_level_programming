
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
}
