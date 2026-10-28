#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nombre = 'z';

	while (nombre >= 'a')
	{
		putchar(nombre);
		nombre--;
	}
	putchar('\n');

	return (0);
}
