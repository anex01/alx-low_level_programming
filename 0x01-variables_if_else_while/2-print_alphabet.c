#include <stdio.h>
/**
 * main - print alphabets, lower case
 * Return: (0)
 */
int main(void)
{
	int lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
		putchar('\n');
		
	return (0);
}
