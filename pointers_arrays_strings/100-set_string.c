#include "main.h"

/**
 * set_string - Sets the value of a pointer-to-pointer to a new string.
 * @s: Pointer to a pointer that will be updated.
 * @to: Pointer to the new string value.
 *
 * This function updates the pointer @s to point to the string @to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
