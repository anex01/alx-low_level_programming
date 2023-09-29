#include "main.h"

/**
 * print_binary: Prints binary representation of an unsigned long integer
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
    int shift;
    int flag = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    fo:w
