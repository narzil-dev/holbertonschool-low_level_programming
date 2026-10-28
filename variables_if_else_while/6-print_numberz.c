
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
		printf("%d", nombre);
		nombre++;
	}
	printf("\n");

	return (0);
}
