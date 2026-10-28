
#include <stdio.h>

/**
 * main - Prints all single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nombre = 0;

	while (nombre <= 9)
	{
		putchar(nombre + '0');
		nombre++;
	}
	putchar('\n');

	return (0);
}
