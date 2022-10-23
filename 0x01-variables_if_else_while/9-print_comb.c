#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * Return: Always 0
 */
int main(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
