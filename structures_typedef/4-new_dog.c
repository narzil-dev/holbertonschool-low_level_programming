
#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - Creates a copy of a string
 * @src: String to copy
 *
 * Return: Pointer to the copy, or NULL on failure
 */
char *copy_string(char *src)
{
	char *start = src;
	char *copy, *dest;
	int len = 0;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	dest = copy;
	while (*start != '\0')
	{
		*dest = *start;
		dest++;
		start++;
	}
	*dest = '\0';

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *chien;

	chien = malloc(sizeof(dog_t));
	if (chien == NULL)
		return (NULL);

	chien->name = copy_string(name);
	if (chien->name == NULL)
	{
		free(chien);
		return (NULL);
	}

	chien->owner = copy_string(owner);
	if (chien->owner == NULL)
	{
		free(chien->name);
		free(chien);
		return (NULL);
	}

	chien->age = age;

	return (chien);
}
