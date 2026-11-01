
#include "main.h"

/**
 * print_numbers - Prints the digits from 0 to 9.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int chiffre;

	for (chiffre = 0; chiffre <= 9; chiffre++)
	{
		_putchar(chiffre + '0');
	}
	_putchar('\n');
}
