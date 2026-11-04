#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i <= n - 2)
		{
			printf("%d, ", a[i]);
		}
		else if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
