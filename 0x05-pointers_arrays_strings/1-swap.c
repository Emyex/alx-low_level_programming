#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: first parameter
 * @b: second parameter
 * Return: always return 0
 */
void swap_int(int *a, int *b)
{
int c = *a;

*a = *b;
	*b = c;
}
