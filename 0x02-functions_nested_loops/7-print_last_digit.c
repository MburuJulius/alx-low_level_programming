#include "main.h"
/**
 * print_last_digit - prints the last digit of input number
 *
 * @pld: input number
 *
 * Return: returns the last digit
 */
int print_last_digit(int)
{
	int pld;
	int ld = (pld % 10);

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
