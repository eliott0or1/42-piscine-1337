/* #include <stdio.h> */

int	ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 0)
		return (0);
	result = 1;
	
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/* int main()
{
	int nbr = 5;
	printf("%d", ft_iterative_factorial(nbr));
} */
