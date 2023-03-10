#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - main function.
*
* @argc: Number of arguments supplied to the program.
* @argv: array of pointers to the strings which are those arguments.
*
* Return: Always 0 means Success.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
