#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: always 0
 */
int main(void)
{
char a[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 25;

while (i >= 0)

{
putchar(a[i]);
i--;
}

putchar('\n');

return (0);

}
