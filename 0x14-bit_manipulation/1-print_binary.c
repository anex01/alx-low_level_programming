#include "main.h"
#include <stdio.h>

/**
 * print_binary: Prints the binary representation of an unsigned long int
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
    int bit_post = sizeof(n) * 8 - 1;
    int print = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (bit_post >= 0)
    {
        if ((n >> bit_post) & 1)
        {
            _putchar('1');
            print = 1;
        }
        else if (print)
        {
            _putchar('0');
        }
        bit_post--;
    }
}

