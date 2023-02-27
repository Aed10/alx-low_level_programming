#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - function to reverse a string.
 *@s: a string to reverse.
 * Return: Always 0 means Success.
 */

void rev_string(char *s)
{
	char t;
	int i, j;

	for (i =  0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
