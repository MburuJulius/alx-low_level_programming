#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * Return: returns 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{	
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
