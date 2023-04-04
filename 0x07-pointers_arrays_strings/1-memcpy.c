#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	size_t	i;
	char	*p;
	char	*t;

	p = (char *)dest;
	t = (char *)src;
	i = 0;
	if (!dest && ! src)
		return (NULL);
	while (i < n)
	{
		p[i] = t[i];
		i++;
	}
	return (p);
}
