#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * return: Always 0 (success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar (ch);
	}
	putchar ('\n');
	return (0);
}
