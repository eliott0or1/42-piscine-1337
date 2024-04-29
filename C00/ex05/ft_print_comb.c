/* #include <unistd.h> */

void	ft_putchar(char start)
{
	write (1, &start, 1);
}

void ft_print_comb(void)
{
	int first;
	int second;
	int last;

	first = 0;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			last = second + 1;
			while (last <= 9)
			{
				ft_putchar ('0' + first);
				ft_putchar ('0' + second);
				ft_putchar ('0' + last);
				if (!(first == 7 && second == 8 && last == 9))
				{
					ft_putchar (',');
					ft_putchar (' ');
				}
				last++;
			}
			second++;
		}
		first++;
	}
	ft_putchar ('\n');
}

/* int	main()
{
	ft_print_comb();
} */
