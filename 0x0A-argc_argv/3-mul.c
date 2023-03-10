#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function.
 *
 * @argc: Number of arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: Always 0 means Success.
 */


int main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
