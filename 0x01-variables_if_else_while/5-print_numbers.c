#include <stdio.h>

/**
* main - Prints all numbers of base 10
* Return: 0
**/
int main(void)
{
	char nbr;

	for (nbr = '0'; nbr <= '9'; nbr++)
	{
		putchar(nbr);
	}
	putchar('\n');
	return (0);
}
