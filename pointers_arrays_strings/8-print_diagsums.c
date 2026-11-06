
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: pointer to the matrix
 * @size: size of the square matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}
