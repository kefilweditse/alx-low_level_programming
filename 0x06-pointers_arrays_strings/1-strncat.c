#include "main.h"

/**
 * _strncat - Concatenates two strings an outputted number of bytes
 * from src.
 * @dest: String to be appended
 * @src: String to be appended to dest
 * @n: Number of bytes from srcvto appended to dest
 * Return: Pointer to the result string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
