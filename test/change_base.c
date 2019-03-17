#include "holberton.h"
/**
* change_base - changes number base
* @num: input number
* @base: base to convert
* Return: pointer to array - with the number converted
*/
char *change_base(int num, int base)
{
	char symbols[] = "0123456789ABCDEF";
	char *ptr;
	int i = 0;

	ptr = malloc(sizeof(char) * 50);
	if (ptr == '\0')
	{
	
	return (0);
	}
	ptr[49] = '\0';
	do {
		ptr[48 - i] = symbols[num % base];
		num /= base;
		i++;
	} while (num != 0);
	ptr[0] = i;
return (ptr);
}
