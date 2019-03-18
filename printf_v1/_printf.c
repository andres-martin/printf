#include "holberton.h"
/**
 * _printf - A printf clone
 * @format: const pointer to a char - % include formats
 * Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
	int i, count = 0;
	char *copyfmt;
	va_list args;

	copyfmt = _strdup(format);
	va_start(args, format);
	i = 0;
	while (copyfmt[i] != '\0')
	{
	if (copyfmt[i] == '%')
	{
		i++;
		count += print_formats(i, copyfmt, args);
	}
	else
		count += _putchar(&copyfmt[i]);
	i++;
	}
va_end(args);
return (count);
}
