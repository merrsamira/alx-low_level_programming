#include <stdio.h>

/**
* main - Prints alphabets in lowercas, except q and e
* Return: 0
**/

int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (!(ltr == 'e' || ltr == 'q'))
			putchar(ltr);
	}
	putchar('\n');
	return (0);
}
