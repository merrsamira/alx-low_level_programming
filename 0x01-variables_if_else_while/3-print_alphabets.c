#include <stdio.h>

/**
* main - Prints alphabets in lowercase, then in uppercase
* Return: 0
**/
int main(void)
{
	char ll;
	char ul;

	for (ll = 'a'; ll <= 'z'; ll++)
	{
		putchar(ll);
	}
	for (ul = 'A'; ul <= 'Z'; ul++)
	{
		putchar(ul);
	}
	putchar('\n');
	return (0);
}
