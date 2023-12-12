/* #include <unistd.h> */

void	ft_print_reverse_alphabet(void)
{
	char	end;

	end = 'z';
	while (end >= 'a')
	{
		write (1, &end, 1);
		end--;
	}
}

/* int	main()
{
	ft_print_reverse_alphabet();
} */
