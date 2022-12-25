#include "main.h"
/**
 * print_alphabet_x10 - prints 10 line of lowercase alphabet
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int l = 0;

	for (n = 'a'; n <= 'z'; n++)
	{
		while (l <= 10)
		{
		_putchar(n);
		}
	l++;
	_putchar('\n');
	}
}
