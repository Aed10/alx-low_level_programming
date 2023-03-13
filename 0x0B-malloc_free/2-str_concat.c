#include "main.h"
/**
 *str_concat - A function to concatenate two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointers to the new string,
 * or NUll if @s1 or @s2 == NUll or  insufficient memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);

	if (t == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		t[i] = s1[i];
	for (i = strlen(s1), j = 0 ; j < strlen(s2); i++, j++)
		t[i] = s2[j];
	t[i + 1] = '\0';

	return (t);
}
