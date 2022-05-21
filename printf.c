#include "main.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	flags_t flags = {0, 0, 0};
    const char *track;
    unsigned int i;
    char *s;
    int count =0;

    va_list arg;
    va_start(arg, format);

    for(track = format; *track != '\0'; track++)
    {

        while( *track != '%' )
        {
            if(*track=='\0')
	    {
		    return;
	    }
            _putchar(*track);
	    count++;
            track++;
        }

        track++;

        switch(*track)
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
