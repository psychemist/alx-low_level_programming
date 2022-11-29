#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * 
 * 
 * 
 */
ssize_t read_file(char *arg1)
{
	int fdr;
	
	fdr = open(arg1, O_RDONLY);

	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}

	return (fdr);
}

/**
 * 
 * 
 * 
 * 
 */
ssize_t write_file(char *arg2)
{
	int fdw;

	fdw = open(arg2, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg2);
		exit(99);
	}

	return (fdw);
}

/**
 * 
 * 
 * 
 * 
 */
 void close_file(int fdesc)
 {
	 int fdc;

	 fdc = close(fdesc);

	 if (fdc == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdesc);
		 exit (100);
	 }
 }

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to main
 * @av: pointer to array of string arguments passed to main
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	int fd1, fd2;
	ssize_t read_t, write_t;
	char *buff[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = read_file(av[1]);
	fd2 = write_file(av[2]);

	while ((read_t = read(fd1, buff, 1024) != 0))
	{
		if (read_t == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		write_t = write(fd2, buff, 1024);
		if (write_t == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	close_file(fd1);
	close_file(fd2);

	return (0);
}

