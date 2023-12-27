#include <stdio.h>
/**
 * main - Enry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_c;

	for (hex_c = '0'; hex_c <= '9'; hex_c++)
		putchar(hex_c);

	for (hex_c = 'a'; hex_c <= 'f'; hex_c++)
		putchar(hex_c);

	putchar('\n');

	return (0);
}
