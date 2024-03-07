#include <stdio.h>
#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	index;
	
	if (min > max)
		return (NULL);
	
	int arr = max - min;
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	
	index = 0;
	while (index < arr)
	{
		tab[index] = min;
		min++;
		index++;
	}
	*range = tab;
	return (tab);
}
int main(void)
{
	int	min = 0;
	int	max = -2;
	int	*range;

	ft_ultimate_range(&range, min, max);
	int	i;

	i = 0;
	while (i < max - min)
	{
		printf("%d", range[i]);
		i++;
	}
}
