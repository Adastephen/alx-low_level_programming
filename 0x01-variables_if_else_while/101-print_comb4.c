#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of three digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a != '7' || b != '8') || ((a == '7' || b == '8') && c != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
