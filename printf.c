#include "main.h"
/**
 * _printf - produces output to stdio according to format
 * @format: string containing characters and specifiers
 */
int _printf(const char *format, ...)
{
	va_list arguements;
	unsigned int i,state =0;
	char *str;
	char *s;

	va_start(arguements,format);
	while (*format !='\0')
	{
	    if (state ==0)
	    {
		if(*format =='%')
		{
		    state = 1;
		}
		    else
		    {
			_putchar(*format++);
		    }
	    }
		else
		{
		switch(*format)
		{
			case 'c': i = va_arg(arguements,int);
				 putchar(i);
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
