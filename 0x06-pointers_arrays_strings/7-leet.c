#include "main.h"
#include "Upperchar.c"
/**
 * leet -  function e,codes a string inyo 1337.
 *@s: The string that we will encoude.
 * Return: Always 0 means Success.
 */

char *leet(char *s)
{
	int i, j;
	char c[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (Upperchar(s[i]) == c[j])
			{
				s[i] = n[j];
				break;
			}
		}
		s[i] = s[i];
	}
	return (s);
}
