#include <unistd.h>

char	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	*rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (0);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_print(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
