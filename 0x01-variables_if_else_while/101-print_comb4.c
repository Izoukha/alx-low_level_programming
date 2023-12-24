#include <stdio.h>
/**
 * main - Enry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds_c, tens_c, ones_c;

	for (hundreds_c = 0; hundreds_c <= 7; hundreds_c++)
	{
		for (tens_c = hundreds_c + 1; tens_c <= 8; tens_c++)
		{
			for (ones_c = tens_c + 1; ones_c <= 9; ones_c++)
			{
				putchar(hundreds_c + '0');
				putchar(tens_c + '0');
				putchar(ones_c + '0');
			
				if (hundreds_c < 7 || tens_c < 8 || ones_c < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
