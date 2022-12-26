#include "main.h"
/**
 * print_to_98 - prints all natural numbers from 0 to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	int n;

	for (n = 0, n <= 98, n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
