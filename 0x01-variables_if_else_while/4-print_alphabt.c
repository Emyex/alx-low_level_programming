#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase except q and e
 *
 * Return: always 0 (for fun)
 */
int main(void)
{
char lower_case;
for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
if (lower_case == 'q' || lower_case == 'e')
{
continue;
}
putchar (lower_case);
}
putchar ('\n');

return (0);

}
