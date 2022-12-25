#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * @c: single character input
 *
 * Return: returns 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
