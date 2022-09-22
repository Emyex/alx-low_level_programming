#include "main.h"

/**
 * *_strcat - check the code for Holberton School students.
 *@dest: destination
 *@src: source
 * Return: pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
		j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
