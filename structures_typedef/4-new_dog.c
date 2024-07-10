#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string (excluding the null byte)
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string from source to destination
 * @dest: The destination buffer to copy to
 * @src: The source string to copy from
 *
 * Description: This function copies the string @src to the buffer @dest,
 *              including the terminating null byte ('\0'). The destination
 *              buffer must be large enough to hold the entire source string,
 *              including the null byte.
 *
 * Return: Pointer to the destination buffer @dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog (will be copied)
 * @age: The age of the dog
 * @owner: The owner of the dog (will be copied)
 *
 * Description: This function creates a new dog structure with the provided
 *              name, age, and owner. It allocates memory for the dog structure
 *              and copies the name and owner strings
 * into newly allocated memory.
 *
 * Return: Pointer to the newly created dog structure,
 * or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcopy(name_copy, name);
	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	_strcopy(owner_copy, owner);
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}
