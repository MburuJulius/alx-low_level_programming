#include <stdio.h>
/**
 * main - prints single numbers separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
	putchar(n);
	if (n != 57)
	putchar(',');
	putchar(' ');
	}
	n++;
	{
	putchar('\n');
	return (0);
}
