#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *@a: array being tested
 *@n: number of elements in the array
 * Return: always return 0
 *
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len != n - 1)
		printf("%d, ", a[len]);
		else 
			printf("%d", a[len]);
	}
	putchar(10);
}
