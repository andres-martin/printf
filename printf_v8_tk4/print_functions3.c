#include "holberton.h"
/**
 * p_unsigned - prints an integer
 * @args: va_list
 * Return: number of characters printed
*/
int p_unsigned(va_list args)
{
	char *str;
	int i = 0;
	unsigned int num2;

	num2 =  va_arg(args, int);
	str = change_base(num2, 10);
	i += _printarg(str);
return (i);
}
/**
* p_octal - prints an octal number.
* @args: arguments to print.
* Return: number of characters printed.
*/
int p_octal(va_list args)
{
	char *str;
	unsigned int num2;
	int i = 0;

	num2 =  va_arg(args, int);
	str = change_base(num2, 8);
	i += _printarg(str);
return (i);
}
/**
* p_hex_upper - prints an octal number.
* @args: arguments to print.
* Return: number of characters printed.
*/
int p_hex_upper(va_list args)
{
	char *str;
	unsigned int num2;
	int i = 0;

	num2 =  va_arg(args, int);
	str = change_base(num2, 16);
	i += _printarg(str);
return (i);
}
/**
* p_hex_low - prints an octal number.
* @args: arguments to print.
* Return: number of characters printed.
*/
int p_hex_low(va_list args)
{
	char *str;
	unsigned int num2;
	int i = 0;

	num2 =  va_arg(args, int);
	str = change_hex_low(num2, 16);
	i += _printarg(str);
return (i);
}

