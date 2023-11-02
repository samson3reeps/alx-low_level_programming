#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void close_file(int fd);

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("Error: Can't close file descriptor");
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int from, to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		perror("Error: Can't read from source file");
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		perror("Error: Can't open or create destination file");
		exit(99);
	}

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		if (r == -1)
		{
			perror("Error: Can't read from source file");
			exit(98);
		}

		w = write(to, buffer, r);
		if (w == -1)
		{
			perror("Error: Can't write to destination file");
			exit(99);
		}
	}

	close_file(from);
	close_file(to);

	return (0); / added parenthesis around the return value
}

