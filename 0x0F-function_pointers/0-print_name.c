#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: pointer to a funtion
 * Return: Nothing.
 */

void print_name_as_is(char *name,  void (*f)(char *))
{

	if (name != NULL && f != NULL)

		f(name);

}
