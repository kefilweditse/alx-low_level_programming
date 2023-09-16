#include "main.h"

/**
 * _isdigit  - Checks if the character is a digit
 * @i: the number to be checked
 * Return: 1 for character that is a digit or 0 otherwise
 */

int _isdigit(int i)

{
	if (i >= 48 && i <= 57)
	{
	return (1);
	}
	return (0);
}
