#include <stdio.h>

/**
 * main - prints all single digit no of base 10 starting from 0
 * Return:always 0
 */
int main(void)
{
int n;

for (; n < 10 ; n++)

putchar('0' + n);

putchar('\n');

return (0);
}
