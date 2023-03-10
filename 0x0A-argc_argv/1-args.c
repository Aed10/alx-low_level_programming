#include<stdio.h>

/**
 * main - main function.
 *
 * @argc: Number of arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: Always 0 means Success.
 */

int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
