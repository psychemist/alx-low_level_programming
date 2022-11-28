#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file -  creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: integer 1 (success) or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdd, size;

	if (filename == NULL)
		return (-1);

	/* open */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	size = strlen(text_content);

	if (text_content == NULL)
		text_content = "";

	/* write */
	fdd = write(fd, text_content, ++size);

	if (fdd == -1)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	close(fdd);
	return (1);
}

