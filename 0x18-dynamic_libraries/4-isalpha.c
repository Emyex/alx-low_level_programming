#include "main.h"
/**
 * _isalpha - function that checks if c is a letter,lower or uppercase
 * @c: is the int that will use for the argument of the functin
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
