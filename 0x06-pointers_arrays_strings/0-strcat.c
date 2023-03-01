#include "main.h"
/**
 * _strcat -  function to concatenate two strings.
 *
 * @dest: The first string
 * @src: The second that we need to append to first one.
 *
 * Return: a pointer to the string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{	i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
