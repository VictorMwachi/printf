#ifndef MAIN_H
#define MAIN_H
/*add standard libraries*/
#include <stdarg.h>
#include <stdlib.h>
/*function protoypes*/
int _putchar(char c);
int _printf(const char *format, ...);
int print_character(va_list valist);
int print_string(va_list valist);
int print_integer(va_list valist);

/**
 * struct formatSpecifier - struct for format specifiers
 * @indentifier: format specifier
 * @printer: function pointer to print the format specifier
 */

typedef struct formatSpecifier
{
char *indentifier;
int (*printer)(va_list valist);
} specifierStruct;


#endif /* MAIN_H */
