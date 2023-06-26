#include <stdio.h>

/**
 * main - numbers of base 16 in lowercase
 * Return: (0)
 */
int main(void)
{
	int base_16_num;
	int base_16_letter;

	for (base_16_num = 48; base_16_num <= 57; base_16_num++)
	{
		putchar(base_16_num);
	}

	for (base_16_letter = 97; base_16_letter <= 102; base_16_letter++)
	{
		putchar(base_16_letter);

	}

		putchar('\n');

	return (0);


}
