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
	if (ch ! ('q' | 'e'))
	putchar(ch);
	putchr('\n')
}

