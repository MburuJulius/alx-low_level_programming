#include "main.h"
/**
 * print_last_digit - prints the last digit of input number
 *
 * @x: input number
 *
 * Return: returns the last digit
 */
int print_last_digit(int d)
{
	int y = (d % 10);

	if (d < 0)
	{
		d = (d * -1);
	}
		_putchar(y + '0');
		return (y);
}
