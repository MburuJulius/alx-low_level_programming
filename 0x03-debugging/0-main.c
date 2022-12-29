#include "main.h"
/**
 *
 * * main - tests function that prints if integer is positive or negative
 *
 * * Return: 0
 *
 * */
int main(void)
{
	int i;

        i = 0;
	positive_or_negative(i);
	return (0);
}

#include <stdio.h>
/**
 * positive_or_negative - determines if input number is +ve or -ve
 *
 * @n: input number
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n >= 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}
