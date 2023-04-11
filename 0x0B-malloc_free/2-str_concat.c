#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *dup;
	size_t i, j, ls1, ls2;

	while (s1 && s1[ls1])
		ls1++;
	while (s2 && s2[ls2])
		ls2++;

	dup = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (dup == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < ls1)
		{
			dup[i] = s1[i];
			i++;
		}
	}
	i--;

	if (s2)
	{
		while (i < (ls1 + ls2))
		{
			dup[i] = s2[j];
			i++;
			j++;
		}
	}
	dup[i] = '\0';

	return (dup);
}
