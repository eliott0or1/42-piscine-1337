#include <unistd.h> 

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	Check_Base(char *base)
{
	int	i;
	int	j;
	
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (ft_strlen(base) > 1);
}

int	double_character(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] != base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (Check_Base(base) == 1)
	{
		long int	len;
		long int	nb;
			
		len = ft_strlen(base);
		nb = nbr;
		if (len <= nb)
		{
			ft_putnbr_base(nb / len, base);
		}
		write(1, &base[nb % len], 1);
	}
	else
	{
		write(1, "Error: Invalid base", 19);
	}
}

int	main()
{
	int nb = 42;
	char *base = "0123456789ABCDEF";
	ft_putnbr_base(nb, base);
	return (0);
}
