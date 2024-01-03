#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The input array.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", a[0]);

		for (int i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}

	printf("\n");
}
