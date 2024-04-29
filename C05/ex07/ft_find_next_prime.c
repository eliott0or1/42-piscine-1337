#include <stdio.h>

int	ft_is_prime(int nb)
{
	long int nbr = nb;
	int check_number = 0;
	if (nbr <= 1)
		return (0);
	check_number = 2;
	while (check_number * check_number <= nbr)
	{
		if (nbr % check_number == 0)
			return (0);
		check_number++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
int main()
{
	int number = 882;
	printf("%d", ft_find_next_prime(number));
}
