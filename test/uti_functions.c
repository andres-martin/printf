#include "holberton.h"

/**
 * p_rev - prints a string in reverse
 * @args: va_list
 * Return: i
*/
int p_rev(va_list args)
{
	char *s;
	int i, j;

	s = va_arg(args, char*);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	for (j = i; j > 0; j--)
	{
		s--;
		_putchar(s);
	}
return (i);
}

int p_bin(va_list args)
{
	char binary[1000];
	int i, j;
	int numb;

	numb = va_arg(args, int);
	for (i = 0; numb > 0; i++)
	{
		binary[i] = numb % 2;
		numb /= 2;	
	}

	for (j = i - 1; j >= 0; j--)
		_putint(binary[j] + '0');
return (i);
}
