#include "main.h"
/**
 * print_sign - checks if a number is positive, negative or zero
 *
 * @n: the integer to be checked/entered
 *
 * Return: returns 1 if n is positive, 0 if n zero, -1if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	if (n = 0)
	{
		_putchar('-');
		return (-1);
	}
}
