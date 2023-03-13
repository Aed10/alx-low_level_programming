#include "main.h"
#include <string.h>
/**
* argstostr - a function that concatenates all the arguments of your program.
*
* @ac: Number of arguments.
* @av: A pointer to the arguments
*
* Return: NULL if ac == 0 or av == NULL
* Returns a pointer to a new ting, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	t = malloc(sizeof(char) * len + 1);

	if (t == NULL)
		return (NULL);
	 len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			t[len++] = av[i][j];

	t[len++] = '\n';
	}
	t[len] = '\0';
	return (t);

}
