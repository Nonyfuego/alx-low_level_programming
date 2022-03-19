#include "main.h"

/**
 * _abs - function that computes the absolute value of integer
 *
 *@c: represent integer
 *
 * Return: 0
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
	return (0);
}
