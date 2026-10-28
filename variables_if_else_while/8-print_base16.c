
#include <stdio.h>

/**
 * main - Prints all hexadecimal digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nombre = 0;
	char lettre = 'a';

	while (nombre <= 9)
	{
		putchar(nombre + 48);
		nombre++;
	}
	while (lettre <= 'f')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');

	return (0);
}
