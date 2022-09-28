#include "main.h"

/* _puts_recursion - Write a function that prints a string, followed by a new line.
 * @s:the the string to be printed
 * Return: always return the string
 */

void _puts_recursion(char *s)


{
	if (*s)

	{

		_putchar(*s);

		_puts_recursion(++s);

	}

	else

		_putchar('\n');

}
