#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
/**
 * read_textfile-reads text  and prints it to the POSIX standard output
 * Return:actual number of letters it could read and print
 * or 0 if filename is NULL or can't be read or openned
 * @filename:file name
 * @letters: number of letters should be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	fd = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, letters);
	if (bytes_written == -1)
	{
		return (0);
	}
	if (close(fd) == -1)
	{
		return (0);
	}
	return (bytes_written);
}
