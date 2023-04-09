#include "main.h"
/**
 * append_text_to_file - Function That appends text at the end of the file.
 *
 * @filename: The name of the file
 * @text_content: Text.
 *
 * Return: 1 if it succed, -1 if not.
 * if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
