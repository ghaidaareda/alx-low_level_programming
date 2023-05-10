#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file-function that appends text at the end of a file.
 * Return:1(success), -1(failure)
 * @filename:pointer to a file name
 * @text_content:pointer to text to be added
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1 || filename == NULL)
	{
		return (-1);
	}
	else
	{
		if (text_content == NULL)
		{
			wr = write(fd, "\0", 0);
			if (wr == -1)
			{
			close(fd);
			return (-1);
			}
		}
		else
		{
			wr = write(fd, text_content, strlen(text_content));
			if (wr == -1)
			{
			close(fd);
			return (-1);
			}
	}
	close(fd);
	}
	return (1);
}
