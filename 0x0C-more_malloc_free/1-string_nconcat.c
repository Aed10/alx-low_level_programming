#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings.
 *
 * @s1: The first string.
 * @s2: the second string.
 * @n: The first n bytes of the second string @s2.
 *
 * Return: Pointer to a newly cllocated space in memory,
 * else NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new, *start;
	unsigned int len1, len2, i;

	/* Treat NULL pointers as empty strings */
	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	/* Allocate memory for the conactenated string*/
	new = malloc(len1 + 1 + n);

	if (new == NULL)
		return (NULL);

	/*Save the beggining addresse of the new string*/
	start = new;

	if (s1 != NULL)
	{
		while ((*new = *s1))
		{
			s1++;
			new++;
		}
	}


	/* Copy the first n bytes of s2 into the new string */
	if (s2 != NULL)
	{
		for (i = 0; i < n && i <= len2; i++)
		{
			*new = *s2;
			new++;
			s2++;
		}
	}
	*new = '\0';
	return (start);

}
