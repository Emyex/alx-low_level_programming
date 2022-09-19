#include "main.h"

/**
 * _puts - write afunction that print a string,followed by a new line
 * @str: string to be printed
 * Return: always return 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		_putchar(str[i]);

		i++;

	}

	_putchar('\n');
}
