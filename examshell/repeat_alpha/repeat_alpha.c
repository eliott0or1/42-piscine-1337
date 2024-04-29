#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i];
				while (j >= 'a')
				{
					write (1, &av[1][i], 1);
					j--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= av[1][i])
			{
				j = av[1][i];
				while (j >= 'A')
				{
					write (1, &av[1][i], 1);
					j--;
				}
			}
			else
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
