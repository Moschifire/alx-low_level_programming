#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the max number of bytes to copy from src
 * Return: a pointwr to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;
	while (src[i++])
		l++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = l; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
