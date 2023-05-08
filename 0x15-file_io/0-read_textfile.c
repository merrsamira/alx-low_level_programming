#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (wrt);
}
