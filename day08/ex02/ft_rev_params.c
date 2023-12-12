#include <unistd.h>

int main(int ac, char *av[])
{
	int i = ac - 1;
	while (i > 0)
	{
		int j = 0;
		while (av[i][j] != '\0')
		{
			write (1, &av[i][j], 1);
			j++;
		}
		i--;
		write (1, "\n", 1);
	}
}
