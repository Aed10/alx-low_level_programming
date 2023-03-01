#include "main.h"

/**
 * _strcmp - Function to compare two strings.
 *
 * @s1: The string that we need to compare.
 * @s2: The string that we need to comapre.
 *
 * Return: The difference between the ASCII code of two different chars, or
 * the difference between the last char ('\0') of a string
 * and the char of the other string.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
