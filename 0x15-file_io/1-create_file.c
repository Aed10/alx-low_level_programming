#include "main.h"
/**
 * create_file - Function create a file and write in it a @text.
 *
 * @filename: The name of the file
 * @text_content: Text.
 *
 * Return: 1 if it succed, -1 if not.
 * if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;/* Get the length of the text_content. */

		if (write(fd, text_content, len) == -1)
		return (-1);

	}


	if (close(fd) == -1)
		return (-1);
	return (1);
}
