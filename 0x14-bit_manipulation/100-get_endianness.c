#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	if (*byte == 1)
		return (1);
	else
		return (0);
}

