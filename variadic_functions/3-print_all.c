
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Affiche des arguments de différents types
 * @format: Chaîne indiquant les types des arguments
 *
 * Return: Rien (void)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *chaine;
	char *separateur = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separateur);
			separateur = ", ";
		}

		if (format[i] == 's')
		{
			chaine = va_arg(args, char *);

			(chaine == NULL) && printf("(nil)");
			(chaine != NULL) && printf("%s", chaine);
		}

		(format[i] == 'c') && printf("%c", va_arg(args, int));
		(format[i] == 'i') && printf("%d", va_arg(args, int));
		(format[i] == 'f') && printf("%f", va_arg(args, double));

		i++;
	}

	va_end(args);
	printf("\n");
}
