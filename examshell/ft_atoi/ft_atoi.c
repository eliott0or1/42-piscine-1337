int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	s = 1;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	
	r = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
