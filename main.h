#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
