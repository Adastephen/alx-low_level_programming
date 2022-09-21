#include "main.h"

/**
 * print_array - main entry
 *
 * @n: array int a, int b
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		if(i != (n - 1));
	printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}
