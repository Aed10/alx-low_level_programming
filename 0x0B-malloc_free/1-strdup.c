#include "main.h"
/**
 *_strdup - A function to duplicate a litterral string.
 *
 * @str: The string that we need to duplicate.
 *
 * Return: Pointers to the new string,
 * or NUll if @str == NUll or  insufficient memory.
 */
char *_strdup(char *str)
{
	char *t;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		t = malloc(strlen(str) * sizeof(char) + 1);

		if (t == NULL)
			return (NULL);
		for (i = 0; i <= strlen(str); i++)
			t[i] = str[i];
	}
	return (t);
}
