#include "main.h"
/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @str: pointer to string (filenamme)
 * @fd: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *str, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to main (3)
 * @av: pointer to array of string arguments passed to main
 * Return: 0 (success) or 97-100 (failure)
 */
int main(int ac, char *av[])
{
	int fd_1, fd_2, read_t, write_t;
	char *buff[1024];

	if (ac != 3)
		__exit(97, NULL, 0);

	/*sets file descriptor for copy-from file*/
	fd_1 = open(av[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, av[1], 0);

	/* sets file descriptor for copy-to file */
	fd_2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
		__exit(99, av[2], 0);

	/*reads original file as long as there's more than 0 to read*/
	/*copies/writes contents into new file */
	while ((read_t = read(fd_1, buff, 1024)) != 0)
	{
		if (read_t == -1)
			__exit(98, av[1], 0);

		write_t = write(fd_2, buff, read_t);
		if (write_t == -1)
			__exit(99, av[2], 0);
	}

	close(fd_2) == -1 ? __exit(100, NULL, fd_2) : close(fd_2);
	close(fd_1) == -1 ? __exit(100, NULL, fd_1) : close(fd_1);

	return (0);
}

