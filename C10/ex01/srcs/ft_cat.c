#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

#define S_BUFFER 3000
char	buffer[S_BUFFER];

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			write (STDERR_FILENO, strerror(errno), strlen(strerror(errno)));
		size_t	read_b;
		read_b = read(fd, buffer, S_BUFFER);
		write (STDOUT_FILENO, buffer, read_b);
		close(fd);
	}
}
