#include "main.h"

/**
 * times_table -main Entry
 *
 * Description: fuction that print 9 times table
 *
 * Return: 1 else 0
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 0; j++)
		{
			n = i * j;
			
			if ((n / 10) == 0);
			 {
				 if (j != 0)
					 _putchar(' ');
 				_putchar(n + '0');

				if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			}

 			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
																			if (j == 9)
				continue;
				_putchar(',');
				_putchar(' ');
			}

		}

			_putchar('\n');
	}

}