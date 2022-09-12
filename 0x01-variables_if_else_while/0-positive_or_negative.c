#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- determine whether the number stored in the variable n is positive or negative.
 * 
 * Desciption: program will assign a random number n each time program is run if it is executable.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("98 is positive\n", n);

	else if (n < 0)
		printf("-98 is negative\n", n);

	else
		printf("0 is zero\n", n);

	return (0);
}
