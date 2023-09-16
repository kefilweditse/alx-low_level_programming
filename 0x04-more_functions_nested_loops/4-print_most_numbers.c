#include "main.h"

/**
 * print_most_numbers - Print the numbers 0 up to 9
 * Description: do not print 2 and 4
 * Return: The numbers since 0 up to 9
 */

void  print_most_numbers(void)

{
	int i = 0;

	for (; i <= 9; i++)
	{
	if (i == 2  && i == 4)
	{
	continue;
	}
	else
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}