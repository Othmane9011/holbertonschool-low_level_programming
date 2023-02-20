#include <stdio.h>
/**
 *  main - Prints a-A / z-Z.
 *  
 *  Return: return value to 0
 */  
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
