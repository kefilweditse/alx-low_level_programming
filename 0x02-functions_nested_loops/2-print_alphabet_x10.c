#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i <= 9)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	i++;
	}
}
