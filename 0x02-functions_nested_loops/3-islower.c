#include "main.h"
/**
 * _islower - prints lowercase english alphabets
 * Return: 1 if it is a lowercase letter and 0 if it is not a lowercase letter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
