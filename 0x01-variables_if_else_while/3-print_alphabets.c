#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point for displaying alphabets.
 *Return: always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z'; low++)
	putchar(low);

	for (low = 'A' ; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
