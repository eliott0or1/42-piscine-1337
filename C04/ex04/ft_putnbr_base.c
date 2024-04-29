#include <unistd.h> 

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
	{
		len++;
	}
	if(len <= 1)
	{
		return (0);
	}
	else
		return (1);
}

int	Check_Base(char *base)
{
	int	i;
	int	j;
	
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (1);

	i = 0;
	j = 1;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if(base[i] != base[i + j])
			{
				j++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void  ft_putnbr_base(int nbr, char *base)
{
	if (Check_Base(base) == 1 && ft_strlen(base) == 1)
	{
		long	int len;
		long	int nb;
		
		len = 0;
		nb = nbr;
		while (base[len])
		{
			len++;
		}
		if (len <= nb)
		{
			ft_putnbr_base(nb / len, base);
		}
		write (1, &base[nb % len], 1);
	}
	else
		write (1, "Error: Invalid base", 19);
}

int  main(void)
{
  int nb = 42;
  char *base = "01234567189ABCDEF";
  ft_putnbr_base(nb, base);
}
