#include<stdio.h>
/**
 * is_prime():- check if an integer is prime or not.
 *@n:- is the integer that we check with the fct is_prime.
 *Return: - of is_prime 0 is @n is not prime 1 if it's.
 */
int is_prime(long n)
{
	int i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}


/**
 * main  - main function.
 *
 * Return: 0 Success
 */
int main(void)
{
	long MAX;
	long i;
	long Numb = 612852475143;

	if (is_prime(Numb))
		MAX = Numb;
	else
	{
		for (i = 2; i <= Numb; i++)
		{
			while (Numb % i == 0)
			{
				Numb /= i;
				if (is_prime(i))
					MAX = i;
			}
		}
	}

	printf("%ld\n", MAX);
	return (0);
}
