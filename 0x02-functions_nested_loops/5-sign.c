#include "main.h"

/**
 * print_sign - checks for sign of number
 *
 *@n: parameter
 * Return: 1 if n is positive
 * and 0 if n is zero
 * and -1 if n is negtive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
