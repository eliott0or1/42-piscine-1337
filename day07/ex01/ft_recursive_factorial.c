/* #include <stdio.h> */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/* int main()
{
	int nbr = 20;
	printf("%d", ft_recursive_factorial(nbr));
} */
