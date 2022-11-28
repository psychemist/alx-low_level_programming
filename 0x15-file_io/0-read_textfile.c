#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be read and printed
 * Return: integer (actual number of letters read and printed) or 0 (fail)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len;
	char buffer[1024];

	/* open */

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0400);

	if (fd == -1)
		return (0);

	/* read */

	len = read(fd, buffer, letters);

	if (fd == -1)
		return (0);

	/* close */

	close(fd);

	printf("%s", buffer);

	return (len);
}

