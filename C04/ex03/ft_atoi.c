/* #include <stdio.h> */

int	ft_atoi(char *str)
{
	int	len = 0;
	int	result = 0;
	int 	sign = 1;
	while (str[len] >= '\t' && str[len] <= '\r' || str[len] == ' ')
		len++;
	while (str[len] == '+' || str[len] == '-')
	{
		if (str[len] == '-')
		{
			sign *= -1;
		}
		len++;
	}
	while (str[len] >= '0' && str[len] <= '9')
	{
		result = result * 10 + (str[len] - 48);
		len++;
	}
	return (result * sign);
}

/* int main()
{
	char str[] = "	-1234ab567";
	printf("%d", ft_atoi(str));
} */
