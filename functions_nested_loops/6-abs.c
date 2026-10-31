
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Integer to process
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n <= -1)
	{
		n = -n;
		return (n);
	}
	else if (n >= 1)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
