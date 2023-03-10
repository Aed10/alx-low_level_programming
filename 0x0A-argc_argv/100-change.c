#include <stdio.h>
#include <stdlib.h>

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
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;
	printf("%d\n", coins);
	return (0);
}
