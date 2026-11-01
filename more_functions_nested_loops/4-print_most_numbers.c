
#include "main.h"

/**
 * print_most_numbers - Prints digits from 0 to 9, except 2 and 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int nombre;

	for (nombre = 0; nombre <= 9; nombre++)
	{
		if (nombre != 2 && nombre != 4)
		{
			_putchar(nombre + '0');
		}
	}
	_putchar('\n');
}
