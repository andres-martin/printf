#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  int len2;
 unsigned int ui;
 void *addr;

len =  _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W','i', "some", "more", 'r', "s", "", "know", 't', ",Jon", '\n');
len2 =  printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W','i', "some", "more", 'r', "s", "", "know", 't', ",Jon", '\n');

//len =  _printf("%c%cth %s%s a%cg%s: me\n", 'W','i', "some", "more", 'r', "s");
//len2 =  printf("%c%cth %s%s a%cg%s: me\n", 'W','i', "some", "more", 'r', "s");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length yo:[%d, %i]\n", len2, len2);
//len = _printf("%k");
//len2 =  printf("%k");
len = _printf("%k");
len2 = printf("%k");
//  len = _printf("Complete the sentence: You %s nothig. Jon snow. \n", (char *)0);
// len2 = printf("Complete the sentence: You %s nothig. Jon snow. \n", (char *)0);
// printf("String:[%s]\n", "I am a string !");
 // _printf(NULL);
// printf(NULL);
  ui = (unsigned int)INT_MAX + 1024;
  addr = (void *)0x7ffe637541f0;
  _printf("Length yo:[%d, %i]\n", len, len);
  printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("impresion de vacio%shola\n", "");
len2 = _printf("impresion de vacio%shola\n", "");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
  _printf("Negative:[%d]\n", -762534);
  printf("Negative:[%d]\n", -762534);
  _printf("Unsigned:[%u]\n", ui);
  printf("Unsigned:[%u]\n", ui);
  _printf("Unsigned octal:[%o]\n", ui);
  printf("Unsigned octal:[%o]\n", ui);
  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
  _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  _printf("Address:[%p]\n", addr);
  printf("Address:[%p]\n", addr);
  len = _printf("Percent:[%%]\n");
  len2 = printf("Percent:[%%]\n");
  _printf("Len:[%d]\n", len);
  printf("Len:[%d]\n", len2);
  _printf("Unknown:[%r]\n");
  printf("Unknown:[%r]\n");
  return (0);
}
