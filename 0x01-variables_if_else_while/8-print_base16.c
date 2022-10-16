#include <stdio.h>

/**
 * main - prints 16 characters nu + alpha
 * Return: Always 0
 */
int main(void)
{
	int num;
	char af;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (af = 'a'; af < 'g'; af++)
		putchar(af);
	putchar('\n');
	return (0);
}
