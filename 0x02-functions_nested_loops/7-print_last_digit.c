#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to be treated
 * Return: value of the last digit of number
 */

void print_last_digit(int n)

{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	_putchar('0' + last_digit);
}
