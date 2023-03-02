#include "main.h"
#include "upperChar.c"
#include "Separators.c"
/**
 * cap_string - a function that Capitalizes all word of a string.
 *
 * @s: a string that we need to capitalize.
 *
 * Return: A pointer of char Capitalized.
 */


char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
			s[i] = upperChar(&s[i]);
		else
		{
			if (Separators(s[i]))
				s[i + 1] = upperChar(&s[i + 1]);
			else
				s[i] = s[i];
		}
	}
	return (s);
}
