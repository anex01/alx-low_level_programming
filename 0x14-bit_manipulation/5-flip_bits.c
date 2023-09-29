#include "main.h"

/**
 * flip_bits - This counts the number of bits to get from x to y 
 * Return: The number of bits that is to be flipped
 */

unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
    unsigned long int xor_result = x ^ y;
    unsigned int count = 0;

    while (xor_result > 0)
    {
        count += xor_result & 1;
        xor_result >>= 1;
    }

    return count;
}

