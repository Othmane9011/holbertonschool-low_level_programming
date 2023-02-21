#include <stdio.h>
/**
 * main - Prints alphabet excluse the letter q and e.
 *
 * Return: return value to 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
