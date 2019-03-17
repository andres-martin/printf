#include "holberton.h"
/**
 * _printf - A printf clone
 * @format: const pointer to a char - % include formats
 * Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	char *copyfmt;
	fn_t fmt[] = {
			{"c", p_char},
			{"s", p_string},
			{"%", p_percent},
			{"i", p_int},
			{"d", p_int},
			{"r", p_rev},
			{NULL, NULL}
			};
	va_list args;

	copyfmt = _strdup(format);
	va_start(args, format);
	i = 0;
	while (copyfmt[i] != '\0')
	{
		if (copyfmt[i] == '%')
		{	
			j = 0;
			i++;
			while (fmt[j].ob != NULL)
			{
				if (copyfmt[i] == *fmt[j].ob)
					count += fmt[j].type(args);
				j++;
			}
		}
		else
			count += _putchar(&copyfmt[i]);
		i++;
	}
va_end(args);
return (count);
}
