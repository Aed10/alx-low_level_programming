/**
 * _strlen - return th length of a string.
 *@s: the string that we need to caclut its length.
 * Return: the length of s.
 */

int _strlen(char *s)
{
	int i;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	return (n);
}
