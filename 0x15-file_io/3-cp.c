#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * error-print error msg to stderr
 * @code:code
 * @format:format
 * @arg:argument
 * Return:void
 */
void error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg), exit(code);
}
/**
 * close_file- Closes file.
 * @fd: fd
 * Return: void
 */
void close_file(int fd)
{
	int x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main-function copy from file to another
 * Return:0 or error msg
 * @argc:argument count
 * @argv:argument variable
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t numread;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((numread = read(file_from, buf, BUF_SIZE)) > 0)
	{
		if (write(file_to, buf, numread) == -1)
		{
		error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
		if (numread < 0)
		{
		error(98, "Error: Can't read from file %s\n", argv[1]);
		}
	close_file(file_from);
	close_file(file_to);
	return (0);
}
