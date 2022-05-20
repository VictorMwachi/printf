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
	for (str = format; str !='\0'; str++)
	{
		while (*str != '%')
		{
			_putchar(*str);
			*str++;
		}
		*str++;
		switch(*str)
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
	va_end(arguements);
}
