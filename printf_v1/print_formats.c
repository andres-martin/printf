#include "holberton.h"
/**
 * print_formats - compares and prints according to the struct
 * @i:. iterator
 * @copyfmt: format
 * @args: arguments to print
 * Return: number of characters printed.
*/
int print_formats(int i, char *copyfmt, va_list args)
{
	fn_t fmt[] = {
			{"c", p_char},
			{"s", p_string},
			{"%", p_percent},
			{"i", p_int},
			{"d", p_int},
			{NULL, NULL}
			};
	int j = 0, count2 = 0;

		while (fmt[j].ob != NULL)
		{
			if (copyfmt[i] == *fmt[j].ob)
				count2 = fmt[j].type(args);
			j++;
		}
return (count2);
}
