#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: the programme tell us some information about last digit
 * less than 5 or greater than it and if it equal to 0
 * Return:0 Success
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10; /*last digit of number n*/
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if ((last < 0) || ((last > 0) && (last <= 5)))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else
		printf("Last digit of %d is %d and is 0\n", n, last);
	return (0);

}
