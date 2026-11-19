
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Affiche des chaînes avec un séparateur
 * @separator: Texte à afficher entre les chaînes
 * @n: Nombre de chaînes à afficher
 *
 * Return: Rien (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *chaine;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		chaine = va_arg(args, char *);

		if (chaine == NULL)
		{
			chaine = "(nil)";
		}

		printf("%s", chaine);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
