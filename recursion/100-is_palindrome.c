#include "main.h"
#include <string.h>

/**
 * palindrome_rec - Recursively checks if a substring is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int palindrome_rec(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_rec(s, start + 1, end - 1));
}
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (palindrome_rec(s, 0, length - 1));
}
