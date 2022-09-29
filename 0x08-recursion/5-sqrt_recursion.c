#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g:guess at sqrt
 * @c: number to find sqrt of
 *
 * Return: -1 or sqrt of c
 */

int _sqrt_check(int g, int h)
{
	if (g * g == h)
	{
		return (g);
	}
	if (g > h)
	{
		return (-1);
	
	else
	{
		return (_sqrt_check(g +1, h));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt_check(1, n));
	}
}

