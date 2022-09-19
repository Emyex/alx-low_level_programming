#include "main.h"

/**
 * _strlen - write a function that returns the length of a string
 * @s: parameter to be tested
 * Return: always return 0
 */
int _strlen(char *s)
{
int a;

	a = 0;
	while (*s != '\0')
	{
		a++;

		s++;
	}
	return (a);
}

