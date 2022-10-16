#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 /n", n);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
