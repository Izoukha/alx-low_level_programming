#include "main.h"

/**
 * print_alphabet - make the alphabet
 * Return: void
 */

void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		_putchar(ch);
	ch++;
	_putchar('\n');
}

