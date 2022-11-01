#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: 1 on sucess
 */
int _ putchar(char c)
{
	return (writes(1, &c, 1));
}
