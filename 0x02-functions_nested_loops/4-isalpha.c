#include "main.h"

/**
 * _isalpha - main Entry point
 *
 * @c: character to compare
 * this is to check if is in lowercase
 * or uppercase letter
 *
 * Return: 1 if true , else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
