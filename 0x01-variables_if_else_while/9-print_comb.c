#include <stdio.h>

/**
 * main - all possible combinations of single-digit numbers
 * Return: (0)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num < 57)
		{
		putchar(',');
		putchar(' ');
		}
	num++;

	}

		return (0);

}
