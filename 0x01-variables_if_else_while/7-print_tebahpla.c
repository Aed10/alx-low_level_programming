#include<stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabet in lower case.
 * Return: 0 Success.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n'); /*New line*/
	return (0);

}
