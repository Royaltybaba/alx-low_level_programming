#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9
 * Description: prints numbers 0 to 9
 * Return: numbers 0 to 9
 */

void _putchar();
void print_most_numbers(void)
{
	int x;

	for (x = '0' ; x <= '9' ; x++)	
	{
		if (x != '2' &&  x != '4')
		_putchar(x);
	}
	_putchar('\n');
}
