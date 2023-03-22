#include "main.h"
/**
 * _abs - Computes the absolute value
 * of an integer
 *
 * @a: input number as an integer
 *
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);

	else if (a >= 0)
		a = a;

	return (a);
}
