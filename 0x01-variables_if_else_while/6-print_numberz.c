#include <stdio.h>
/**
 * main - print numbers, putchar
 * Rrturn: (0)
 */
int main(void)
{
	int single_digit;

	for (single_digit = 48; single_digit <= 57; single_digit++)
	{
		putchar(single_digit);
	}
		putchar('\n');

	return (0);
}
