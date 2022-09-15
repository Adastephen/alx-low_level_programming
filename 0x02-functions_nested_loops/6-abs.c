#include "main.h"
#include <stdio.h>

/**
 * _abs - main Entry
 *
 * @n: compute the value
 *
 * Return:always 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
