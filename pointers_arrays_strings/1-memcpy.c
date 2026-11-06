
#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the beginning of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0)
	{
		*dest = *src;
		n--;
		src++;
		dest++;
	}
	return (start);
}
