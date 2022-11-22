#include "main.h"
#include "string.h"

/**
 * append_text_to_file - append text to file
 * @filename: pointer to file
 * @text_content: letters to add to file
 * Return: 1 or -1 if failed
 */
int main(int argc, char *argv[])
{
	int fp = 0,rd = 0, wr = 0, pp = 0, close = 0, close1;
	char *buf[1024];

	
	if (argc != 3)/*if the number of argument is not the correct one, exit with code 97*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	if (!argv[1])/*if file_from does not exist, exit with code 98*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	pp = open(argv[2],O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (pp == -1)/*if failed to open pp*/
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)/*if failed to open fp*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	rd = read(fp, buf, 1024);
	
	while (rd != 0)
	{
		wr = write(pp, buf, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to test %s\n", argv[2]);
			return (99);
		}
		rd = read(fp, buf, 1024);
		if (rd == -1)/*if failed to read*/
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
	}
	close = close(fp);
	if (close == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		return (100);
	close1 =close(pp);
	if (close1 == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", pp)
		return (100);
	}
	return (0);
}
