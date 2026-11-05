
#include "main.h"

/**
 * leet - Encodes a string into 1337 speak
 * @s: String to encode
 *
 * Return: Pointer to the modified string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char lettres[] = "aeotlAEOTL";
	char chiffres[] = "4307143071";

	while (s[i] != '\0')
	{
		j = 0;

		while (lettres[j] != '\0')
		{
			if (s[i] == lettres[j])
			{
				s[i] = chiffres[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
