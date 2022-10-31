#include "main.h"

/**
*read_textfile - function that reads a text file
*and prints it to the POSIX standard output
*@filename: name of the file
*@letters: number of buffers to read
*Return: number of characters red;
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *str;

	if (filename == NULL || letters < 1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char *) * letters);
	if (str == NULL)
		return (0);
	i = read(fd, str, letters);
	if (i == -1)
		return (0);
	i = write(STDOUT_FILENO, str, i);
	if (i == -1)
		return (0);
	close(fd);
	free(str);
	return (i);
}
