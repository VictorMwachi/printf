#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * formatSpecifier - format specifier struct
 * @next: pointer to next format specifier
 * @valist: va_list
 * Return: characters to be printed
 */

int formatSpecifier(char next, va_list valist)
{
	int funcsIndex;

	specifierStruct funcs[] = {
	{"c", print_character},
	{"s", print_string},
	{NULL, NULL}
	};

	for (funcsIndex = 0; funcs[funcsIndex].indentifier != NULL; funcsIndex++)
	{
		if (funcs[funcsIndex].indentifier[0] == next)
			return (funcs[funcsIndex].printer(valist));
	}
	return (0);
}

/**
 * _printf - custom printf
 * @format: format string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int identifier = 0, charPr = 0;
	va_list valist;

	va_start(valist, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPr++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charPr++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		identifier = formatSpecifier(format[i + 1], valist);
		if (identifier == -1 || identifier != 0)
			i++;
		if (identifier > 0)
			charPr += identifier;

		if (identifier == 0)
		{
			_putchar('%');
			charPr++;
		}
	}
	va_end(valist);
	return (charPr);
}
