/* #include <unistd.h> */

void	ft_putchar(char start)
{
	write (1, &start, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int start = 0;
	while (str[start])
	{
		if ((str[start] >= 1 && str[start] <= 31) || str[start] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[start] / 16]);
			ft_putchar("0123456789abcdef"[str[start] % 16]);
		}
		else
		{
			ft_putchar(str[start]);
		}
		start++;
	}
}

/* int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
} */
