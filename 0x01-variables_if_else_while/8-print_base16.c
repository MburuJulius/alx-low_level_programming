#include <stdio.h>
/**
 * main - print base16 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
	putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
