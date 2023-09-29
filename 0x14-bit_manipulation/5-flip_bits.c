#include "main.h"

/**
 * flip_bits - Counts the number of bits to get from x to y
 * @x: The first number
 * @y: The second number
 *
 * Return: The number of bits that need to be flipped
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

	return (count);
}
