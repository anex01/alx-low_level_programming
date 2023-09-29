#include "main.h"

/**
 * get_endianness: Checks endianness of system
 *
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
    unsigned int value = 1;
    char *byte = (char *)&value;

    if (*byte == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

