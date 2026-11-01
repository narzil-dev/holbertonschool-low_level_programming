
#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int nombre;
	int ligne;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (nombre = 0; nombre <= 14; nombre++)
		{
			if (nombre >= 10)
			{
				_putchar((nombre / 10) + '0');
			}
			_putchar((nombre % 10) + '0');
		}
		_putchar('\n');
	}
}
