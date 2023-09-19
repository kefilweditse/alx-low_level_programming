#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elemets of an arrray int
 * @a: Array of intergers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{

	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}