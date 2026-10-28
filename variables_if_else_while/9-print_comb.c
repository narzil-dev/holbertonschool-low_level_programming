
#include <stdio.h>

/**
 * main - Prints digits separated by commas and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nombre = 0;

	while (nombre <= 9)
	{
		putchar(nombre + 48);
		if (nombre <= 8)
		{
			putchar(',');
			putchar(' ');
		}
		nombre++;
	}
	putchar('\n');

	return (0);
}
