#include <stdio.h>

/**
* main - Prints all numbers of base 10, without using type char
* Return: 0
**/
int main(void)
{
	int nbr;

	for (nbr = 48; nbr <= 57; nbr++)
	{
		putchar(nbr);
	}
	putchar('\n');
	return (0);
}
