#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - function to copy a string to a buffer.
 * @src: source string to cpy
 * @dest: a buffer to copy to.
 * Return: Always 0 means Success.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

