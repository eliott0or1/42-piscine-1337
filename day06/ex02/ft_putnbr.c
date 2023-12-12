/* #include <unistd.h> */

void	ft_putchar(char start)
{
	write (1, &start, 1);
}
void	ft_putnbr(int nb)
{
	long nbr;
	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr (nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

/* int main()
{
	ft_putnbr(-2147483648);
} */
