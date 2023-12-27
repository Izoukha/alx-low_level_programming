#include "main.h"

/**
 * print_last_digit - prints the last degiot on a number
 * @i: the number to extract the last digit from
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
