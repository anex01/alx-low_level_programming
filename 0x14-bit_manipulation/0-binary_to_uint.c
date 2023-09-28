#include "main.h"

/**This converts a binary number to an unsigned integer
 * Return: the number that has been converted
 */


unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (!b)
        return 0;

    for (int i = 0; b[i]; i++)
    {
        if (b[i] < '0' || b[i] > '1')
            return 0;

        result = result * 2 + (b[i] - '0');
    }

    return result;
}
