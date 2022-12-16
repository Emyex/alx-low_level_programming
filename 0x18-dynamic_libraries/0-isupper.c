#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: character being tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
