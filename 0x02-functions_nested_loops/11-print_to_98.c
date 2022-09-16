#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main point
 *
 * @n: integer n to 98
 *
 * Return: always 0 else 1
 */
void print_to_98(int n)
{	
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
