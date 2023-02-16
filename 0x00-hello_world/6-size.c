#include <stdio.h>

/**
 * main - this is a description
 * Return: return 0
 */
int main (void)
{
	printf("Size of a char: %2d bytes ", sizeof(char));
	printf("Size of an int: %2d bytes ", sizeof(int));
	printf("Size of a long int: %2d bytes ", sizeof(long int));
	printf("Size of a long long int: %2d bytes ", sizeof(long long int));
	printf("Size of a float: %2d bytes ", sizeof(float));
	return (0);
}
