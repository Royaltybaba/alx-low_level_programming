#include "main.h"
/**
 * _strlen - funtion that prints length
 * @s: length to be printed
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
