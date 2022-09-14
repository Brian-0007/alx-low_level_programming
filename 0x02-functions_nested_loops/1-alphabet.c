#include "main.h"
/**
 * print_alphabet - prin the alphabet
 *
 * Return: Always success
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
