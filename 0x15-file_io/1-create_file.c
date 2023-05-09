#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file-function to create a file
 * Return:1 (success), -1 (faliure)
 * @filename:pointer to a file name
 * @text_content:text to be written in file created
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (filename == NULL || fd == -1 || fchmod(fd, 0600) == -1)
		return (-1);
	if (text_content == NULL)
		if (write(fd, "", 0) != 0)
		{
			close(fd);
			return (-1);
		}
	if (write(fd, text_content, strlen(text_content)) < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
