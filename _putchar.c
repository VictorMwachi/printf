#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: returns character to print to stdout or EOF when some error occurs
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
