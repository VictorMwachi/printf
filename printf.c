#include "main.h"
int _printf(const char* format,...)
{
    char *traverse;
    unsigned int i;
    char *s;

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
            putchar(*traverse);
            traverse++;
        }

        traverse++;

        switch(*traverse)
        {
            case 'c' : i = va_arg(arg,int);     //Fetch char argument
                        putchar(i);
                        break;


            case 's': s = va_arg(arg,char *);       //Fetch string
                        puts(s);
                        break;

        }
    }

    va_end(arg);
}
