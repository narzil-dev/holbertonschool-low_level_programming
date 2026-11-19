
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Affiche des entiers avec un séparateur
 * @separator: Texte à afficher entre les nombres
 * @n: Nombre d'entiers à afficher
 *
 * Return: Rien (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int nombre;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nombre = va_arg(args, int);
		printf("%d", nombre);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
