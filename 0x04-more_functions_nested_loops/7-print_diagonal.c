#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the diagonal line is printed
 *
 */

void print_diagonal(int n)
{
	int lenth, breath;

	if (n > 0)
	{
	for (lenth = 0; lenth <= n; lenth++)
	{

		for (breath = 0; breath < lenth; breath++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if (lenth == (n - 1))
{
			continue;
}
		_putchar('\n');
	}
		_putchar('\n');
}
}
