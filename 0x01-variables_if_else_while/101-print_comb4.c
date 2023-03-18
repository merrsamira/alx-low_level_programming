#include <stdio.h>

/**
* main - Print all possible different combinations of three digits
* Return: 0
**/

int main(void)
{
	int n1, n2, n3;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = n1 + 1; n2 <= 57; n2++)
		{
			for (n3 = n2 + 1; n3 <= 57; n3++)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);

				if (!(n1 == 55 && n2 == 56 && n3 == 57))
				{

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
