#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * separated by commas.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
