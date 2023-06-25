#include <stdio.h>
/**
 * main - print alphabets, lower case and upper case
 * Return: (0)
 */
int main(void)
{
	int lower_case;
	int upper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}

		putchar('\n');

	return (0);
}
