#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_char - prints char
 * @args: va_list
*/
int p_char(va_list args)
{
	char ch;
	
	ch = va_arg(args, int);
	_putchar(ch);
return (1);
}
/**
 * p_string - prints string
 * @args: va_list
*/
int p_string(va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char*);
	while (s[i] != '\0')
	_putchar(s[i++]);
return (i);
}
int p_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
return (1);
}
/**
 * print_all - prints anything
 * @format: const pointer to a char
*/
int _printf(const char * format, ...)
{
	int i, j, count = 0;

	fn_t fmt[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
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
				count += fmt[j].type(args);
				}
	
			j++;
			}

	}
	else
	{
	_putchar(format[i]);
	count++;
	}
	i++;
	}
va_end(args);
printf("%d", count);
return (count);
}
