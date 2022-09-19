#include "main.h"
#include <stdio.h>

/**
 * puts_half -function that prints half of the string
 * @str: string being tested
 * Return: always return 0
 */
void puts_half(char *str)
{
	int ct, even, neg;

	for (ct = 0; str[ct] != '\0'; ct++)
		;
	if ((ct % 2) == 0)
	{
		for (even = ct / 2; str[even] != '\0'; even++)
			putchar(str[even]);
	}
	else
	{
		for (neg = (ct - 1) / 2; str[neg] != '\0'; neg++)
			putchar(str[neg + 1]);
	}
	putchar('\n');
}
