#include "main.h"

#include <stdlib.h>

#include <time.h>

/**
 * positive_or_negative - Prints if number is positive, zero or negative
 *@i: is the int that will use for the argument of the function
 * Return: Always (Success)
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}
