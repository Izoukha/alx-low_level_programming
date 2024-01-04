#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first, until a null character is encountered.
 * @str: The input string.
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		if (str[i + 1] == '\0')
			break;

		i += 2;
	}

	_putchar('\n');
}
