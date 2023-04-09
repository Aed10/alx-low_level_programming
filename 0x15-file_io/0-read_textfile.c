#include "main.h"
/**
 * read_textfile - Function read a text file and prints it to stdrout.
 *
 * @filename: The name of the file
 * @letters: Number of letters should print.
 *
 * Return: The actual numbers of letters it could read and print, or 0
 * if it fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nbread;
	char *buffer = malloc(letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, 2);
	if (fd == -1)
		return (0);


	nbread = read(fd, buffer, letters);
	if (nbread == -1)
		return (0);
	if (write(1, buffer, nbread) != nbread)
		return (0);

	if (close(fd) == -1)
		return (0);
	free(buffer);
	return (nbread);

}
