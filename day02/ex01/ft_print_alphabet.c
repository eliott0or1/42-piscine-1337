/* #include <unistd.h> */

void	ft_print_alphabet(void)
{
	char start;
	
	start = 'a';
	while (start <= 'z')
	{
		write (1, &start, 1);
		start++;
	}
}

/* int	main()
{
	ft_print_alphabet();
} */
