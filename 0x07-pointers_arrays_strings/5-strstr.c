#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	size_t	i;
	int	j;
	char	*p;
	char	*p1;

	i = 0;
	p = (char *)haystack;
	p1 = (char *)needle;
	if (*p1 == 0)
		return (p);
	while (p[i] != '\0')
	{
		j = 0;
		while (p[i + j] == p1[j] && p[i + j] != '\0')
		{
			if (p1[j + 1] == '\0')
				return (p + i);
			j++;
		}
		i++;
	}
	return (0);
}
