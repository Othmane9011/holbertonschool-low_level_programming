#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the file the program was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
