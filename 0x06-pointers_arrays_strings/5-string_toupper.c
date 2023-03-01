#include "main.h"
#include <stdio.h>
/**
 * string_toupper-  function to uppers a lower.
 *@s: Character to upper.
 * Return: Always 0 means Success.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
	}
	return (s);
}
