#include<stdio.h>

/**
 * main - main function.
 *
 * @argc: Number of arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: Always 0 means Success.
 */

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
