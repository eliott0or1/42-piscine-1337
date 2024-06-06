#include <unistd.h>
#include <fcntl.h>

void	display_file(char *file)
{
	int	fd;
	char	buff;

	fd = open(file, O_RDONLY);
	if (fd > 0)
		while (read(fd, &buff, 1))
			write (1, &buff, 1);
	close(fd);
}
