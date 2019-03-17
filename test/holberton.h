#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
/**
 * struct fn - Struct fn
 * @ob: The operator
 * @type: The function associated
*/
typedef struct fn
{
	char *ob;
	int (*type)(va_list var);
} fn_t;

int _putchar(char c);
int _printf(const char *format, ...);
#endif
