/* #include <unistd.h> */

void	ft_putchar(char start)
{
	write (1, &start, 1);
}
void	ft_print_comb2(void)
{
	int	start = 0;
	int	end;
	while (start <= 98)
	{
		end = start + 1;
		while (end <= 99)
		{
			ft_putchar ((start / 10) + '0');
			ft_putchar ((start % 10) + '0');
			ft_putchar (' ');
			ft_putchar ((end / 10) + '0');
			ft_putchar ((end % 10) + '0');
			if (!(start == 98 && end == 99))
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			end++;
		}
		start++;
	}
	ft_putchar ('\n');
}
/* int	main()
{
	ft_print_comb2();
} */
