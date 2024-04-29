/* #include <stdio.h> */

int	ft_iterative_power(int nb, int power)
{
	int	result ;

	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/* int main()
{
	int nbr = 3;
	int power = 2;
	printf("%d", ft_iterative_power(nbr, power));
} */
