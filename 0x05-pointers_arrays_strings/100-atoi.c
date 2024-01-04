#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int c = 0;
	int n = 1;
	int d;

	while (*s)
	{
		if (*s == '-')
		{
			n *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			d = *s - '0';

			if (c  > (INT_MAX - d) / 10)
			{

				if (n == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			c = c * 10 + d;
		}
		else if (c != 0)
		{
			break;
		}

		s++;
	}

	return (c * n);
}
