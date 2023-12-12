#include <stdio.h>

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	int	index = 1;
	long int	result = 1;
	while (result <= nb)
	{
		result = index * index;
		index++;
	}
	return (index - 2);
}
int main()
{
	int number = 360;
	printf("%d", ft_sqrt(number));
}
