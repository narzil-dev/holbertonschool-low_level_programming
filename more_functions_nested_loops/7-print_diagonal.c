
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line.
 * @n: Number of lines in the diagonal.
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int espaces;
	int lignes;

	for (lignes = 1; lignes <= n; lignes++)
	{
		for (espaces = 1; espaces < lignes; espaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
