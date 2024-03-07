#include <stdlib.h>
#include "ft_strs_to_tab.h"

int	ft_strlen(char	*string)
{
	int	index;

	index = 0;
	while (string[index])
		index++;
	return (index);
}

char	*strdup(char	*src)
{
	int	index;
	char	*dest;
	char	*d;

	index = 0;
	d = (dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1));
	if(!d)
		return NULL;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
{
	int	index;
	struct s_stock_str	*array;
	struct s_stock_str	*arr;

	index = 0;
	arr = (array = malloc((av + 1) * sizeof(struct s_stock_str)));
	if (!arr)
		return NULL;
	while (index < ac)
	{
		array[index].size = ft_strlen(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index].str[index] = 0;
	array[index].copy[index] = 0;
	return (array);
}
