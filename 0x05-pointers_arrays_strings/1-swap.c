#include <stdio.h>

/**
 * swap_int - Swaps the values of two intergers.
 * @i: The first integer to swap.
 * @j: The second integer to swap.
 * Return: Nothing
 */
void swap_int(int *i, int *j)

{
	int temp = *i;
	*i = *j;
	*j = temp;
}
