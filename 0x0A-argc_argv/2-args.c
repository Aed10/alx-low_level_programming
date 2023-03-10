#include<stdio.h>

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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
