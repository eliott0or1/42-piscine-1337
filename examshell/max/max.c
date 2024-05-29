#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max_v;

	i = 0;
	max_v = tab[0];
	if (len == 0)
		return (0);
	i = 1;
	while (i < len)
	{
		if (tab[i] > max_v)
		{
			max_v = tab[i];
		}
		i++;
	}
	return (max_v);
}

int	main()
{
	int	tab[] = {42, 73, 932, 26, 4268};
	unsigned int	size = sizeof(tab) / sizeof(tab[0]);
	int	max_m = max(tab, size);
	printf("the max_m: %d\n", max_m);
}
