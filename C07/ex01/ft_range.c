#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));

	if (range == NULL)
		return (NULL);
	int	i;

	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
int main()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 10;
	max = 5;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
