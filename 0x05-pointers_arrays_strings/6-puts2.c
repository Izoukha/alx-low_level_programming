#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string,
 * starting with the first.
 * @str: The input string.
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;

	while (str[i] != '\0')
	{
		printf("%d ", str[i]);
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
