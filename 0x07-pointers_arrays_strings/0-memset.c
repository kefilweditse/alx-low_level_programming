#include "main.h"

/**
 * _memset - Entry point
 * @s: Pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
