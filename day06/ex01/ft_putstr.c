/* #include <unistd.h> */

void	ft_putstr(char *str)
{
	int len = 0;
	while (str[len])
	{
		write (1, &str[len], 1);
		len++;
	}
}

/* int main()
{
	char str[] = "Hello World!";
	ft_putstr(str);
} */
