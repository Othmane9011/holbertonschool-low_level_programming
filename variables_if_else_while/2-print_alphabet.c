#include <stdio.h>
/**
 * main - print
 *
 * Return: return value to 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
