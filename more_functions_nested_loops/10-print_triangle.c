
#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using #.
 * @size: Size of the triangle.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int line;
	int space;
	int triangle;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (space = 0; space < size - 1 - line; space++)
			{
				_putchar(' ');
			}
			for (triangle = 1; triangle <= line + 1; triangle++)
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
