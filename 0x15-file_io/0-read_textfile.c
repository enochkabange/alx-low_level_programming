#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads texts files and prints the letters.
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. When it fails, returns 0.
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
