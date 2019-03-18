#include <unistd.h>
#include "holberton.h"
/**
 * _printarg - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printarg(char *c)
{
	if (c[0] == '\0')
	return (write(1, &c[0], 1));
	else
	return (write(1, c, _strlen(c)));
}
