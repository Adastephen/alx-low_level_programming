#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * different combinations of two digits.
 *
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		for (; b <= '9'; b++)
		{
			if (a != b)
			{
			putchar(a);
			putchar(b);
			}
			if (a != '8' && (b != '9' || b == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);

}
