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
void error(int code, cost char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exti(code);
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
		error(97, "Usage: %s file_from file_to\n", argv[0])
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	file_to = open(argv[2], O_WRONLY);
	if (file_to == -1)
	{
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1 || fchmod(file_to, 0664) == -1)
	{
		error(98, "Error: Can't write to %s\n", argv[2]);
	}
	}
	while ((numread = read(file_from, buf, BUF_SIZE)) > 0)
		if (write(file_to, buf, numread) != numread || numread == -1)
	{
		error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (close(file_from) == -1)
	{
		error(100, "Error: Can't close fd %s\n", argv[1]);
	}
	if (close(file_to) == -1)
	{
		error(100, "Error: Can't close fd %s\n", argv[2]);
	}
	return (0);
}
