#include "main.h"

/**
 * main - Prints_last_digit
 * @i: function parameter
 * Return: k
 */

void print_last_digit(int i)

{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
