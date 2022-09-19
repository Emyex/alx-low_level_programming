#include "main.h"

/**
 * void reset_to_98(int *n) - Write a function that takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 * @n: number to test
 * Return: always return 0
 */
int main(void)
{
int n;
int *p;

n = 402;
*p = &n;

{
printf("n = %d\n", n);
}
*p = 98;
printf("n = %d\n", n);
return (0);
}
