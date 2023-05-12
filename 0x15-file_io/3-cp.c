#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * main-function copy from file to another
 * Return:0 or error msg
 * @argc:argument count
 * @argv:argument variable
 */
int main (int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t numread;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1 || fchmod(file_from, 0664) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numread = read(file_from, buf, BUF_SIZE)) > 0)
		if (write(file_from, buf, numread) != numread || numread == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if(close(file_from) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if(close(file_to) == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
