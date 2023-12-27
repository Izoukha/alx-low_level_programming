#include <stdio.h>
/**
 * main - Enry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_c, ones_c;

	for (tens_c = 0; tens_c <= 8; tens_c++)
	{
		for (ones_c = tens_c + 1; ones_c <= 9; ones_c++)
	{
		putchar(tens_c + '0');
		putchar(ones_c + '0');

		if (tens_c < 8 || ones_c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}

	putchar('\n');

	return (0);
}

