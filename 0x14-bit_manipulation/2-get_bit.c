#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs
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

