#include "main.h"

/**
 * _islower - checks for lower case
 * @c: the letter to check
 *
 * Return: on void
 */
int _islower(int c)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
