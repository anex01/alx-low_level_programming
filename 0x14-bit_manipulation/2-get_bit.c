#include "main.h"
#include <stdio.h>

/**
 * get_bit - Retrives the value of a bit at a given indexd
 *
 * Return: returns the value of a bit at the given index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(n) * 8))
        return (-1);

    unsigned long int mask = 1UL << index;

    if ((n & mask) == 0)
        return (0);
    else
        return (1);
}

