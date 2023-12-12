/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int main()
{
	char str[] = "";
	printf("%d", ft_str_is_printable(str));
} */
