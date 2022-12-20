#include <stdio.h>
/**
 * main - prints lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch ! 'e' && ch ! 'q')
	putchar(ch);
	putchr('\n')
}

