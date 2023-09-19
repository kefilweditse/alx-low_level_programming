#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointer src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}