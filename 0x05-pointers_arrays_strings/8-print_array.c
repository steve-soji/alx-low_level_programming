#include <stdio.h>
/**
 * print_array - print the first n of array
 *@a: array
 *@n: number to stop at
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
			printf(", ");
	}
	printf("\n");
}
