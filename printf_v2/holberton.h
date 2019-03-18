#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
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

int _putchar(char *c);
int _printf(const char *format, ...);
int _printarg(char *c);
char *change_base(int num, int base);
int p_char(va_list args);
int p_string(va_list args);
int p_percent(va_list args __attribute__((unused)));
int p_int(va_list args);
char *_strdup(const char *str);
int _strlen(char *s);
int *print_formats(int i, char *copyfmt, va_list args);
#endif
