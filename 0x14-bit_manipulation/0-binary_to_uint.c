#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint: Converts a binary number to an unsigned integer
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; b[i]; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result = (result << 1) | (b[i] - '0');
    }

    return result;
}

int main()
{
      unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);

    



    return 0;
}
