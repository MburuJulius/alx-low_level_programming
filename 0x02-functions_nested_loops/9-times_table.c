#include "main.h"
/**
 * times_table - prints multiplication table from multples of 0
 * to multiples of 9
 *
 *  Return: void
 */
void times_table(void)
{
	int n, m, k;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (m = 0; m < 10; m++)
		{
			k = n * m;
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((k % 10) + '0');

			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
