#include <stdio.h>

/**
* main - Prints all posible different combinations of two digits
* Return: 0
**/
int main(void)
{
	int n1, n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = n1 + 1; n2 <= 57; n2++)
		{
			putchar(n1);
			putchar(n2);

			if (!(n1 == 56 && n2 == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
