#include <stdio.h>
/**
 * main - prints the numbers 1 - 100, print fizz for multiples of 3, print buzz fo4 multiples of 5, print fizzbuzz for multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");
		else if ((n % 3) == 0)
			printf("Fizz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(' ');
	}
	printf('\n');
	return (0);
}
