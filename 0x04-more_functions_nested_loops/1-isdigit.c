#include "main.h"

/**
 * _isdigit - main check the idgit
 *
 * @c: check if is a digit
 * Return: 1 else 0
 */
int _isdigit(int c)
{
	int isdigit = 0;
	int notdigit = 0;

	for (; isdigit <= 9; isdigit++)
	{
		if (c == isdigit)
		{
			notdigit = 1;
			break;
		}
	}
	return (notdigit);
}
