#include<stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabet in lower case.
 * Return: 0 Success.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		printf("%c", letter);
	}
	printf("\n"); /*New line*/
	return (0);

}
