#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the diagonal line is printed
 *Return: returns nothing
 */

void print_diagonal(int n)
{
int x, y;

for (y = 1; y <= n; y++)
{
for (x = 1; x < y; x++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (n < 1)
_putchar('\n');
}
