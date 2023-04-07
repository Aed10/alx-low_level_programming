#include "main.h"
/**
 * power_2 - Function to calculate the power of 2.
 *
 * @exp: Exponant.
 *
 * Return: The result.
 */
unsigned int power_2(unsigned int exp)
{
	unsigned int i, pwr = 1;

	for (i = 0; i < exp ; i++)
	{
		pwr = pwr * 2;
	}
	return (pwr);
}
/**
 * binary_to_uint - Function that converts a binary to an unsigned int.
 *
 * @b: A binary number.
 *
 * Return: A converted verion of @b, or 0 if it fails.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, exp;
	int i, len = 0;

	if (b == NULL)
		return (0);

	/*Get the length of th string b*/
	while (b[len] != '\0')
		len++;

	/*Convert and check if b contains any char differ to 0 or 1*/
	for (i = len - 1, exp = 0; i >= 0; i--, exp++)
	{
		if ((b[i] == '0') || (b[i] == '1'))
			conv += (b[i] - '0') * power_2(exp);
		else
			return (0);
	}
	return (conv);
}
