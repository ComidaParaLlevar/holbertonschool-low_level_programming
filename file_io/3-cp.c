#include "main.h"
/**
 * main - copy content from one file to another
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, fdR, fdW, close_from, close_to;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	buffer = malloc(1024);
	fd_from = open(argv[1], O_RDONLY);
	fdR = read(fd_from, buffer, 1024);
	if (fd_from == -1 || fdR == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (fdR > 0)
	{
		fdW = write(fd_to, buffer, fdR);
		if (fd_to == -1 || fdW == -1 || buffer == NULL)
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);
	}
	free(buffer);
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from), exit(100);
	if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to), exit(100);
	return (0);
}
