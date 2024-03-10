#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char *c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		write (1, &string[index++], 1);
	}
}

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		ft_putchar ('-');
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr (number / 10);
	}
	ft_putchar ((number % 10) + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str)
	{
		ft_putstr (par[index].str);
		ft_putchar ("\n");
		ft_putnbr (par[index].size);
		ft_putchar ("\n");
		ft_putstr (par[index].copy);
		ft_putchar ("\n");
		index++;
	}
}
