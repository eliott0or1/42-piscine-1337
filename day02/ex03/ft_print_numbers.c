/* #include <unistd.h> */

void	ft_print_numbers(void)
{
	int start;
	
	start = '0';
	while (start <= '9')
	{
		write (1, &start, 1);
		start++;
	}
}
/* int	main()
{
	ft_print_numbers();
} */
