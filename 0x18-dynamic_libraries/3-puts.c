#include "main.h"
#include <stdio.h>

/**
 * _puts - write  a function that print a string,followed by a new line
 * @str: string to be printed
 * Return: always return 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

	putchar(str[i]);

		i++;

	}

	putchar('\n');
}
