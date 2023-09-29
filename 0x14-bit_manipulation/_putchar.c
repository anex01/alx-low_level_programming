#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to be displayed
 *
 * Return: 1 (Success)
 *-1 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

