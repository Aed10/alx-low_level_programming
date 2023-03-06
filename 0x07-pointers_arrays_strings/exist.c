/**
 * exist  -  function to search for a specific char @c
 *
 * @s: string where we will search for a charachter @c.
 * @c: The character that we will search for.
 *
 * Return: 1 if c exist in @s else 0.
 */

int exist(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (1);
	}
	return (0);
}
