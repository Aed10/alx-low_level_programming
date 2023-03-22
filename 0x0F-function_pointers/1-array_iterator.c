#include "function_pointers.h"
/**
 * array_iterator - function executes a function givenas a parameter
 * on each elemnet of ana array.
 *
 * @size: The size of the array.
 * @action: Apointer to the function you need to use .
 * @array: The array given.
 *
 * Return: Always 0 means Success.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);

}
