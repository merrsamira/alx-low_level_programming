#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers
* Return: 0
**/
int main(void)
{
	int nbr;

	for (nbr = 48; nbr <= 57; nbr++)
	{
		putchar(nbr);
		if (nbr != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
