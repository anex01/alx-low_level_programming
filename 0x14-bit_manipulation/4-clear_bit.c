#include "main.h"

/**
 * clear_bit - This sets the value of a bit to 0 at a given index 
 * Return: 1 Success.
 */

int clear_bit(unsigned long int *a, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    unsigned long int mask = 1UL << index;
    *a = *a & (~mask);
    return (1);
}

