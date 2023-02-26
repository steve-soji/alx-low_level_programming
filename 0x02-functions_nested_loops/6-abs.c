#include "main.h"

/**
 * _abs - checks absolutr value of a number
 *
 * @i: parameter to check absolute value
 *
 * Return: Always i
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
