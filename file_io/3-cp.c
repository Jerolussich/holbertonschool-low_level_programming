#include "main.h"
#include "string.h"

/**
 * main - append text to file
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 or -1 if failed
 */
int main(int argc, char *argv[])
{
	int fp = 0,rd = 0, wr = 0, pp = 0;
	char *buf[1024];

	if (argc != 3)/*if the number of argument is not the correct one, exit with code 97*/
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])/*if file_from does not exist, exit with code 98*/
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	pp = open(argv[2],O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (pp == -1)/*if failed to open pp*/
		dprintf(2,"Error: Can't write to %s\n", argv[2]), exit(99);
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)/*if failed to open fp*/
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	while ((rd = read(fp, buf, 1024)) != 0)
	{
		if (rd == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		wr = write(pp, buf, rd);
		if (wr == -1)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if ((close(fp)) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fp), exit(100);
	if ((close(pp)) == -1)
		dprintf(2, "Error: Can't close fd %d\n", pp), exit(100);
	return (0);
}
