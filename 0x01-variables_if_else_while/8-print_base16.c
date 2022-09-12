#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16
 * lowercase
 * Return: alwaays 0
 */
int main(void)
{

	char b[16] = "0123456789abcdef";
	int i = 0;

while (i < 16)
{
	putchar(b[i]);
	putchar(i++);
}
putchar ('\n');
	return (0);
}
