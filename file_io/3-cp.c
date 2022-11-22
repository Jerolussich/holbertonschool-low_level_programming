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
	int fp = 0,rd = 0, wr = 0, pp = 0;
	char *buf[1024];

	
	if (argc != 3)/*if the number of argument is not the correct one, exit with code 97*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	if (!argv[1])/*if file_from does not exist, exit with code 98*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE1\n");
		return (98);
	}

	pp = open(argv[2],O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (pp == -1)/*if failed to open pp*/
	{
		dprintf(STDERR_FILENO,"Error: Can't write to NAME_OF_THE_FILE\n");
		return (99);
	}

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)/*if failed to open fp*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE2\n");
		return (98);
	}
	while (rd != 0)
	{
		rd = read(fp, buf, 1024);
		if (rd == -1)/*if failed to read*/
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE3\n");
			return (98);
		}
	}
	if (fp == -1)/*if you can not create or if write to file_to fails, exit with code 99*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		return (99);
	}
	wr = write(pp, buf, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		return (99);
	}
	close(fp);
	close(pp);
	if (fp == -1 || pp == -1)/*if you can not close a file descriptor , exit with code 100*/
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE");
		return (100);
	}
	return (0);
}
