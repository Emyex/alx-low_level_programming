#include "main.h"
#include <stdio.h>

/**
 * puts_half -function that prints half of the string
 * @str: string being tested
 * Return: always return 0
 */
void puts_half(char *str)

{
int j, i = 0;

while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
putchar(*(str + j));
j++;										}
putchar('\n');
}
