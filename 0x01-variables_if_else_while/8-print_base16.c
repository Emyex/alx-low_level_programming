#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16
 * lowercase
 * Return: alwaays 0
 */
int main(void)
{
unsigned char a = '0';
int i;

for (i = 0; i < 10; i++)
{
putchar(a);
a++;

}

a = '1';

for (i = 0; i < 6; i++)
{
putchar('0' + a);
a++;
}
putchar('\n');
return (0);
}
