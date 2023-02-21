#include "main.h"
/**
 * _isalpha - tests whether a character is an english alphabet
 * Return: 1 if the character is an alphabet and 0 if the character is not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}
