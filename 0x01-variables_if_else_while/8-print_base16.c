#include <stdio.h>

/**
* main - Prints all numbers of base 16
* Return: 0
**/
int main(void)
{
	int num;
	char base;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (base = 'a'; base <= 'f'; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}
