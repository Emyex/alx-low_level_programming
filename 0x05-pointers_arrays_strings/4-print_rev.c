#include "main.h"
#include <stdio.h>
/**
 * print_rev - print astring in reverse
 * @s: parameter to be used
 * Return: always return 0
 */
void print_rev(char *s)
{
int i, x = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		x++;
	}
	for (i = x - 1; i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
