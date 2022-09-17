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

	if (n > 1)
	{
	for (lenth = 1; lenth <= n; lenth++)
	{

		for (breath = 1; breath < lenth; breath++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		if (lenth == (n - 2))
{
			continue;
}
		_putchar('\n');
	}
		_putchar('\n');
}
}
