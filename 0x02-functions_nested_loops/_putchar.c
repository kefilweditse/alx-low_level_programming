#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: The character to print
 * Return: On correct 1.
 * Error, -1 and errn is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
