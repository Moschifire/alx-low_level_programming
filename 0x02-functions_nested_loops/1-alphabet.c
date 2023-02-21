#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 * Return: return nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
