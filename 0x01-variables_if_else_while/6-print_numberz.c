#include <stdio.h>
/**
 * main - print digits between 0 and 9
 *
 * Return: 0 as success
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
