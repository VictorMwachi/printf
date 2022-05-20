#include "main.h"
/**
 * _printf - produces output to stdio according to format
 * @format: string containing characters and specifiers
 */
int _printf(const char *format, ...)
{
	va_list arguements;
	unsigned int i;
	char *str;
	char *s;

	va_start(arguements,format);
	while (*format)
	{
		if(*format !='%')
		{
			_putchar(*format++);
		}
		else
		{
		switch(*format)
		{
			case 'c': i = va_arg(arguements,int);
				 _putchar(i);
				  break;
			case 's': i = va_arg(arguements,char *);
				  while(*s)
				  {
					  _putchar(*s);
					  *s++;
				  }
				  break;
		}
		}
	}
	va_end(arguements);
	return (0);
}
