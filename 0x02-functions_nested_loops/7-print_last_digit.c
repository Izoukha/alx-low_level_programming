#include "main.h"

/**
 * print_last_digit - prints last digit
 * @i: function parameter
 * Return: k
 */

void print_last_digit(int i)

{
	int K;

	K = i % 10;
	if (i < 0)
		K = -k;
	_putchar(K + '0');
	return (K);
}
