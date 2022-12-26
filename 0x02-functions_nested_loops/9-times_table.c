#include "main.h"
/**
 * times_table - prints multiplication table from multples of 0
 *  to multiples of 9
 *
 *  Return: void
 */
void times_table(void)
{
	int n, m, k;

	k = n * m;
	{
		for (n = 0; n < 10; n++)
		{
			for (m = 0; m < 10; m++)
				_putchar(k);
			_putchar('\n')
		}
}
