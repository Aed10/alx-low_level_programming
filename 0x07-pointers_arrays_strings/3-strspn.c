#include "main.h"
#include "exist.c"
/**
 * _strspn  - function that gets the length of a prefix substring.
 *
 * @s: string where we will search for a charachter @c.
 * @accept: The sbstring that we will search for.
 *
 * Return: A pointer to the first occurrence of the character @c.
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int length = 0;

		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (exist(accept, *(s + j)))
			{
				++length;
			}
			else
				break;
		}
		return (length);
}
