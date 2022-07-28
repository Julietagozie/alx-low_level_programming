#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: The number to be raised to y
 * @y: The power
 *
 * Return: If y < 0 return -1
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
