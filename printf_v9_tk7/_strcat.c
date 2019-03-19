#include "holberton.h"
/**
 * *_strcat - copies the string pointed to by src
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *ptr1, *ptr2;

	ptr1 = dest;
	ptr2 = src;
	for (; *ptr1 != '\0'; ptr1++)
	{
	}
	for (; *ptr2 != '\0'; ptr2++, ptr1++)
		*ptr1 = *ptr2;
return (dest);
}
