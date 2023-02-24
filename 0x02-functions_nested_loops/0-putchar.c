#include "main.h"

/**
 * main - Entry point
 *
 * Return: on 0 (Success)
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0 ; x[i] ; i++)
		_putchar(x[i]);
	_putchar('\n');
	return (0);
}
