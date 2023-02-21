#include "main.h"

/**
 * main - Chekc the code.
 * main.h: contains all functions.
 *
 * Description: write a programm that prints _putchar.
 *
 * Return: 0 Success.
 */

int main(void)
{
	char string[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);

}
