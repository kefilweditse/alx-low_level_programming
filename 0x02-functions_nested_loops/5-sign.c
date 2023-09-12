#include "main.h"

/**
 * print_sign - Determines if the input
 * number is greater, equals or less than zero.
 *
 * @n: the input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero
 * -1 is less than 0
 * ASCII for + - 0 - 43 45 48.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
