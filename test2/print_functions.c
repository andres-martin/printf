#include "holberton.h"
/**
 * p_char - prints char
 * @args: va_list
 * Return: number of characters printed
*/
int p_char(va_list args)
{
	char ch[2];
	int i;

	ch[1] = '\0';
	ch[0] = va_arg(args, int);
	i = _printarg(ch);
return (i);
}
/**
 * p_string - prints string
 * @args: va_list
 * Return: number of characters printed
*/
int p_string(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char*);
	i = _printarg(s);
return (i);
}
/**
 * p_percent - prints percent symbol
 * @args: va_list
 * Return: number of characters printed
*/
int p_percent(va_list args __attribute__((unused)))
{
	char *s;
	int i;

	s = "%";
	i = _putchar(s);
return (i);
}
/**
 * p_int - prints an integer
 * @args: va_list
 * Return: number of characters printed
*/
int p_int(va_list args)
{
	char *str;
	char *sign;
	int i, num;

	sign = "-";
	num =  va_arg(args, int);
	if (num < 0)
	{
		_putchar(sign);
		num = -num;
	}
	str = change_base(num, 10);
	if (str == '\0')
	return (-1);
	i = _printarg(str + 49 - str[0]);
	free(str);
return (i);
}
