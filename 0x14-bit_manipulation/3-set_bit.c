#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * Return: 1 Success.
 */
int set_bit(unsigned long int *a, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    unsigned long int mask = 1UL << index;
    *a = *a | mask;
    return (1);
}

