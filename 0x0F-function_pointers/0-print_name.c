#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name using pointer to function
* @name: string to add
* @f: pointer to function
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	unsigned int i;
	i = 0;

	if (name == NULL || f == NULL)
{
	return (0);
}
while (name[i] != '\0')
{
	i++;
}
f(name);
}

