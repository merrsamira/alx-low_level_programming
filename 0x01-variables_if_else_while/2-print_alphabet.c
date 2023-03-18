#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	char ltr;

	for (ltr = 97; ltr <= 122; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
