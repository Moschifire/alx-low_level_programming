#include "main.h"
/**
 * print_sign - determines whether an integer is positive, negative or zero
 * Return: 1 if positive, 0 if zeeo, -1 if negative and / if not a number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0:);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}