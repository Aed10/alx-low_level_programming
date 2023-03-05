#include "stdio.h"
#include "main.h"
#include "Upperchar.c"
/**
 * rot13 -  function encodes a string rot13.
 *@s: The string that we will encoude.
 * Return: Always 0 means Success.
 */

char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; Upperchar(s[i]) >= 'A' && Upperchar(s[i]) <= 'Z'; j++)
		{
			if ((Upperchar(s[i]) - 'A') >= 13 && s[i] <= 'Z')
			{
				s[i] = 'A' + ((s[i] - 'A') % 13);
				break;
			}
			else if ((Upperchar(s[i]) - 'A') >= 13 && s[i] >= 'a')
			{
				s[i] = 'a' + ((s[i] - 'a') % 13);
				break;
			}
			else
			{
				s[i] = s[i] + 13;
				break;

			}
		}
	}
		return (s);
}
