#include "main.h"
int _printf(const char* format,...)
{
    char *traverse;
    unsigned int i;
    char *s;
    int count =0;

    va_list arg;
    va_start(arg, format);

    for(traverse = format; *traverse != '\0'; traverse++)
    {

        while( *traverse != '%' )
        {
            if(*traverse=='\0')
	    {
		    return;
	    }
            _putchar(*traverse);
	    count++;
            traverse++;
        }

        traverse++;

        switch(*traverse)
        {
            case 'c' : i = va_arg(arg,int);     //Fetch char argument
                        _putchar(i);
		       count++;
                        break;


            case 's': s = va_arg(arg,char *);       //Fetch string
                        while(*s)
			{
				_putchar(*s);
				count++;
				*s++;
			}
                        break;

        }
    }

    va_end(arg);
    return (count);
}
