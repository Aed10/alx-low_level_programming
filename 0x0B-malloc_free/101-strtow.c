#include "main.h"
/**
 * strtow - Split A string into Words.
 *
 * @str: Astring to split.
 *
 * Return: Pinter of strings.
 */

char **strtow(char *str)
{
	char **t;
	int len;
	int i, j, k;
	int words = 0;

	if (str == NULL || strcmp(str, "") == 0 || strcmp(str, " ") == 0)
		return (NULL);

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1]))
			words++;
	}
	t = malloc(words * sizeof(char *));
	if (t == NULL)
		return (NULL);
	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i, len = 0; str[j] != ' ' && str[j] != '\0'; len++, j++)
			;
			if (len == 0)
				return (NULL);
			t[k] = malloc((len + 1) * sizeof(char));
			if (t[k] == NULL)
				return (NULL);

			strncpy(t[k], &str[i], len);
			t[k][len] = '\0';
			k++;
			i = j;
		}
	}
	if (t == NULL)
		return (NULL);

	return (t);
}
