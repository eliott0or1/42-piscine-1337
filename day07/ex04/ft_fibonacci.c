/* #include <stdio.h> */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (index);
}
/* int main()
{
	printf("%d", ft_fibonacci(7));
} */
