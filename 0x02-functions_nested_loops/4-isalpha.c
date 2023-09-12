#include "main.h"
/**
 * _isalpha - Shows 1 if the input.
 *is a letter another cases,shows 0
 *
 * @c: The character in ASCII
 *
 * Return: 1 for letteres. 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
