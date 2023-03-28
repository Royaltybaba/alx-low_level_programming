#include "main.h"
/**
 * swap_int - functions to swap an integer
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
