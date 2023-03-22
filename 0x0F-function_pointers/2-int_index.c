/**
 * int_index - Function to indicate the index where
 * the integer that we search exist.
 *
 * @array: When we will search.
 * @size: Size of our Array.
 * @cmp: A pointer to a fucntion that compare the element that
 * we search for with the elements of the array
 *
 * Return: Always -1 means Failure to find our element..
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);

}
