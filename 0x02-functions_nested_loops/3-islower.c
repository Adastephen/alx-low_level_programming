#include "main.h"

/**
 * _islower - main Entry ppoint
 *
 * @c: character to compare
 *
 * Return: if true 1, else return 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
