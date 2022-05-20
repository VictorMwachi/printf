#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character
 * @c: character to be printed
 * Return: print to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
