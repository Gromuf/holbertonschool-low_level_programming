#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != 0)
		length++;
	return (length);
}

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to a new string,
 * or NULL if it fails or if ac is 0 or av is NULL.
 * The new string contains all arguments concatenated
 * with a newline after each one.
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	int i;
	int j = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
		length += _strlen(av[i]) + 1;
	result = (char *)malloc(length + 1);

	if (result == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		char *arg = av[i];

		while (*arg)
			result[j++] = *arg++;
		result[j++] = '\n';
	}
	result[length] = '\0';
	return (result);
}
