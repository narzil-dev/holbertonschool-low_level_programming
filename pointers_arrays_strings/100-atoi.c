#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int started = 0;
	unsigned int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && started == 0)
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			number = number * 10 + (s[i] - '0');
		}
		else if (started == 1)
		{
			break;
		}
		i++;
	}

	return (number * sign);
}
