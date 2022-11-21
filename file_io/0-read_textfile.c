#include "main.h"

/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp = 0, rd = 0, wr = 0;

	if (!filename)
		return (0);
	if (letter == 0)
		return (-1);
	fp = open(filename, O_RDONLY);
	if (fp == - 1)
		return (-1);

	buf = malloc(letters + 1);
	if (!buf)
		return (-1);
	rd = read(fp, buf, letters);
	if (rd == - 1)
		return (-1);
	buf[letters + 1] = '\0';
	close(fp);

	wr = write(STDOUT_FILENO, buf, rd);
	if (!wr)
		return (-1);
	free(buf);
	return (rd);
}
