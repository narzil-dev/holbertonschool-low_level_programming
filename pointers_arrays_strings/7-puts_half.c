#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		i = i / 2;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (i % 2 == 1)
	{
		i = (i / 2) + 1;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}

	_putchar('\n');
}
