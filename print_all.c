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

/**
 * print_integer - prints an integer to stdout
 * @valist: va_list
 * Return: integer
 */

int print_integer(va_list valist)
{
unsigned int div = 1;
unsigned int i, temp, num = 0;

int int_in = va_arg(valist, int);

if (int_in < 0)
{
_putchar('-');
num++;
int_in *= -1;
}

for (i = 1; int_in / div > 9; i++, div *= 10)
;

for (; div >= 1; int_in %= div, div /= 10, num++)
{
temp = int_in / div;
_putchar('0' + temp);
}
return (num);
}


