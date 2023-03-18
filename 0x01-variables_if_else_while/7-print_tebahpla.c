#include <stdio.h>

/**
* main - Prints alphabets in lowercas in reverse order
* Return: 0
**/
int main(void)
{
	char ltr = 'z';

	while (ltr >= 'a')
	{
		putchar(ltr);
		ltr--;
	}
	putchar('\n');
	return (0);
}
