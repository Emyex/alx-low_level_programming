#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints out character out of a string
 * @str: string been printed
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if ((a % 2) == 0)
			putchar(str[a]);
		a++;
	}
	putchar('\n');
}
