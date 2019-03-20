#include "holberton.h"
/**
 * replace_str - replace no printable characters by \x + hexa value
 * @s: pointer to char
 * Return: pointer to char
*/
char *replace_str(char *s)
{
	int i = 0;
	int j = 0;
	char buffer[10000];
	char *ptr;
	char *ptr2;

	ptr = &buffer[0];
	while (s[i])
	{
		if (s[i] < 32)
		{ ptr[j] = 92;
		ptr[j + 1] = 120;
		ptr2 = change_base(s[i], 16);
			if (s[i] < 17)
			{
				ptr[j + 2] = 48;
				ptr[j + 3] = ptr2[0];
			}
			else
			{
				ptr[j + 2] = ptr2[0];
				ptr[j + 3] = ptr2[1];
			}
			j += 4;
		}
			else
			{
				ptr[j] = s[i];
				j++;
			}
		i++;
	}
	ptr[j] = '\0';
return (ptr);
}
