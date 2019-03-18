#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
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
	int i = 0;

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
	i = 0;
	
	while (format[i] != '\0')
	{	
	if (format[i] == '%')
	{
		j = 0;
		i++;
		while (fmt[j].ob != NULL)
			{
				if (format[i] == *fmt[j].ob)
				{
				fmt[j].type(args);
				}
	
			j++;
			}

	}
	else
	{
	_putchar(format[i]);
	}
	i++;
	}
va_end(args);
return (0);
}
