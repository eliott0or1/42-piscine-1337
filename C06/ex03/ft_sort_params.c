#include <unistd.h>

void	ft_putchar(char start)
{
	write (1, &start, 1);
}

void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
    char	*tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int ac, char *av[])
{
	int	i = 1;
	int	j = 1;
	
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - j)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
			}
			i++;
		}
		j++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

