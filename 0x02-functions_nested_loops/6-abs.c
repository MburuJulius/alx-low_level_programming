#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @v: integer whose absolute value will be computed
 *
 * Return: Always 0 
 */
int _abs(int v)
{
	if (v >= 0)
	{
		return (v);
	}
	else if (v < 0)
	{
		return (v * -1);
	}
}
