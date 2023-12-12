/* #include <unistd.h> */

int	check_base(char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	int len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return (0);
	i = 0;
	int j = 1;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
			if (base[i] != base[i + j])
				j++;
			else
				return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base))
	{
		size_t len = 0;
		size_t nb = nbr;
		while (base[len])
			len++;
		if (nb >= len)
			ft_putnbr_base(nb / len, base);
		write (1, &base[nb % len], 1);
	}
	else
		write (1, "check ur code", 13);
}

/* int main()
{
	char base[] = "0123456789ABCDEF";
	int nbr = 2147483647;
	ft_putnbr_base(nbr, base);

} */
