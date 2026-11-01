
#include "main.h"

/**
 * print_line - Draws a straight line using underscores.
 * @n: Number of underscores to print.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int underscore;

	for (underscore = 1; underscore <= n; underscore++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
