#include <stdio.h>
/**
 * main - prints 0-9 without char or printf/puts,
 *
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
