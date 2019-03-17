#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * p_int - prints integer
 * @args: va_list
*/
void p_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * p_char - prints char
 * @args: va_list
*/
void p_char(va_list args)
{
	char ch;
	
	ch = va_arg(args, int);
	_putchar(ch);
}
/**
 * p_float - prints float
 * @args: va_list
*/
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * p_string - prints string
 * @args: va_list
*/
void p_string(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char*);
	while (s[i] != '\0')
		_putchar(s[i++]);
}
/**
 * print_all - prints anything
 * @format: const pointer to a char
*/
int _printf(const char * format, ...)
{
	int i, j;

	fn_t fmt[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};

	va_list args;

	va_start(args, format);
	
	for (i = 0; format[i] != '\0';)
	{	
	if (format[i] != '%')
	_putchar(format[i]);
	i++;
		for (j = 0; fmt[j].ob != NULL; j++)
		{
			if (format[i] == '%' && (format[i + 1] == *fmt[j].ob))
			{
				fmt[j].type(args);
			}
		}
	}
va_end(args);
return (0);
}
