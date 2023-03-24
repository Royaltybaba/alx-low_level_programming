#include "main.h"

/**
 * print_line - function draws line with the char _
 * @n: the no of char to be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len  < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
