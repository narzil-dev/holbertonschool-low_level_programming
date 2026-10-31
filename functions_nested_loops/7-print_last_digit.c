
#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of an integer
 * @n: Integer to process
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(-n + '0');
		return (-n);
	}
}
