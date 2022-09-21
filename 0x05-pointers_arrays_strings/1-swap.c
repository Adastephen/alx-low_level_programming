#include "main.h"

/**
 * swap_int - main Entry
 *
 * @n: int a and int b swap int value a to b and vice versa
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
