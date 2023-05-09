#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
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
	char *buffer;
	ssize_t bytes_read, bytes_written;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		free(buffer);
		return (0);
	}
	if (close(fd) == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (bytes_written);
}
