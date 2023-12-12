#include <stdio.h>

int	ft_is_prime(int nb)
{
	int check_number = 0;
	long int nbr = nb;

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
int main()
{
	int number = 10007;
	printf("%d", ft_is_prime(number));
}
