#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @c: Pointer to first element
 *
 * Return: c
 */

char *string_toupper(char *c)

{
	int x = 0;

	while (c[x] != '\0')
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 'a' + 'A';
		}
		x++;
	}
	return (c);
}
