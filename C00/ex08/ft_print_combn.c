/* #include <unistd.h> */

void	ft_print_combn(int n)
{
	int b[9];

	ft_print_combn_recursive(n, 0, 0, b);
}

void	ft_print_combn_recursive(int n, int pos, int val, int *buffer)
{
	const char	*elem = "0123456789";
	int	i = 0;

	if (pos == n)
	{
		while (i < n)
		{
			write (1, elem + (buffer[i++]), 1);
		}
		if (buffer[0] != 10 - n)
		{
			write (1, ", ", 2);
		}
		return ;
	}
	while (val <= 9)
	{
		buffer[pos] = val;
		ft_print_combn_recursive(n ,pos + 1, ++val, buffer);
	}
}

/* int main()
{
	ft_print_combn(2);
} */
