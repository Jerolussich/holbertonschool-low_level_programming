#include "main.h"
#include "string.h"

/**
 * create_file - create file with certain content
 * @filename: pointer to file
 * @text_content: letters to add to file
 * Return: actual number of letters or 0
 */
int create_file(const char *filename, char *text_content)
{
	int fp = 0, st = 0, wr = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fp = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fp == -1)
		return (0);
	st = strlen(text_content);
	wr = write(fp, text_content, st);
	if (wr == -1)
		return (0);
	close(fp);
	return (1);
}
