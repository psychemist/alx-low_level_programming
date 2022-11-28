#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2, size;

	if (filename == NULL)
		return (-1);

	/* open */

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	/* get size of string */

	if (text_content == NULL)
	{
		if (!filename)
			return (-1);
		else
			return (1);
	}

	size = strlen(text_content);

	/* append */
	fd2 = write(fd, text_content, size);

	if (fd2 == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	close(fd2);
	return (1);
}

