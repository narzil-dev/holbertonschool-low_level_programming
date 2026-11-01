
#include "main.h"

/**
 * print_square - Prints a square using the character #.
 * @size: Size of the square.
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	int col;
	int line;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
