#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The number to print in binary
 *
 * Return: No return value (void)
 */
void print_binary(unsigned long int n)
{
	int bit_pos = sizeof(n) * 8 - 1;
	int print = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bit_pos >= 0)
	{
		if ((n >> bit_pos) & 1)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}
		bit_pos--;
	}
}

