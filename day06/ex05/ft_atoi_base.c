/* #include <unistd.h>
   #include <stdio.h> */

int	VALID_STR(char *str, char *base)
{
	int	i = 0;
	int	j = 0;
	while (str[i])
	{
		while (str[i] != base[j] && base[j])
			j++;
		if (base[j] == '\0')
			return (1);
		i++;
		j = 0;
	}
	return (0);
}

int	CHECK_LENBASE(char *base)
{
	int	len = 0;
	while (base[len])
	{
		len++;
	}
	if (len < 2)
		return (0);
	return (1);
}

int	CHECK_DOUBLE(char *base)
{
	int	i = 0;
	int	j = 0;
	while (base[i])
	{
		j = 1;
		while (base[i] != base[j + i] && base[j + i])
		{
			j++;
		}
		if (base[i] == base[j + i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i = 0;
	int	j = 0;
	int	result = 0;
	int	sign = 1;
	if (VALID_STR(str, base))
		return (0);
	if (CHECK_DOUBLE(base) == 1 && CHECK_LENBASE(base))
	{
		while (str[i] == ' ' || str[i] >= '\f' && str[i] <= '\r')
			i++;
		i = 0;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		i = 0;
		while (str[i]) 
		{
			while (str[i] != base[j])
				j++;
			result = result * ft_strlen(base) + j;
			j = 0;
			i++;
		}
		return (result * sign);
	}
	else
	write (1, "check your code", 15);	
}

/* int main()
{
	char str[] = "2A";
	char base[] = "0123456789ABCDEF";
	printf("%d", ft_atoi_base(str, base));
} */
