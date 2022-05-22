#include "main.h"
#include <stdarg.h>

/**
 * print_character - prints a character to stdout
 * @valist: va_list
 * Return: character
*/

int print_character(va_list valist)
{
char c;

c = va_arg(valist, int);
return (_putchar(c));
}

/**
 * print_string - prints a string to stdout
 * @valist: va_list
 * Return: string
 */

int print_string(va_list valist)
{
char *s;
int i;

s = va_arg(valist, char *);
if (s == NULL)
s = "(null)";
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
return (i);
}
