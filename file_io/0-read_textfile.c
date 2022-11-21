#include "main.h"

/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp = 0, rd = 0;

	fp = open(filename, O_RDONLY);
	if (fp == - 1)
		return (-1);
	if (!filename)
		return(0);

	buf = malloc(sizeof(letters));
	if (!buf)
	{
		return (-1);
	}
	rd = read(fp, buf, letters);

	write(fp, buf, letters);

	close(fp);

	dprintf(rd, "%s", buf);
	return (rd);
}
