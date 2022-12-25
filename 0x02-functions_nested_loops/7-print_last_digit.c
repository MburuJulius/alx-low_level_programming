#include "main.h"
/**
 * print_last_digit - prints the last digit of input number
 *
 * @x: input number
 *
 * Return; returns the last digit
 */
int print_last_digit(int x)
	int y = x % 10;
{
	if (x < 0)
		x = x * -1 ;
	{
		_putchar(y);
		return (y);
	}
}

