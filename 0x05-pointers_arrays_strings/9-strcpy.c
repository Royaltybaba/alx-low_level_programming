#include "main.h"
/**
 * _strcpy - copies string
 * @dest: a buffer to copy string to
 * @src:  point of string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
