#include "main.h"

/**
 * print_last_digit - Print the last
 * digit of a number
 *
 * @n: input integer number
 * ASCII for 0 - 48
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

