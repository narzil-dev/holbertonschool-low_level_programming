#include <stdio.h>

/**
 * main - Prints the lowercase and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'a';

	while (lettre != 'a' + 26)
	{
		putchar(lettre++);
	}

	lettre = 'A';

	while (lettre != 'A' + 26)
	{
		putchar(lettre++);
	}

	putchar('\n');

	return (0);
}
