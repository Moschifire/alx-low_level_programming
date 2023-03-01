#include "main.h"
/**
 * strcat - concatenates the string pointed to by @src
 * @dest: a pointer to the string
 * @src: the source string
 * Return: a pointer to @dest
 */
char *strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
