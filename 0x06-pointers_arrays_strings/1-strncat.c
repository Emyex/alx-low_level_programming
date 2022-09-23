#include "main.h"

/**
 * *_strncat - concatenates two strings
 *@dest: destination
 *@src: source
 * @n: number of bytes
 * Return: pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)

{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
