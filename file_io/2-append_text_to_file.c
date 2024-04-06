#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 *append_text_to_file - crates a file and puts text
 *@filename: name for file
 *@text_content: text to put into file
 *
 *Return: 1 on success, -1 on fail
 *
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file;
size_t len;
ssize_t bytes_written;

if (filename == NULL)
{
	return (-1);
}
if (text_content == NULL)
{
return (1);
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
len = strlen(text_content);
bytes_written = write(file, text_content, len);
close(file);
if (bytes_written == -1 || (size_t)bytes_written != len)
{
return (-1);
}
return (1);
}
