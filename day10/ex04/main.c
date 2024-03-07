#include <stdlib.h>
#include <stdio.h>
#include "ft_strs_to_tab.h"

int	ft_strlen(char	*string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char	*src)
{
	int	index;
	char	*dest;
	char	*d;

	d = (dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1));
	if(!d)
		return (0);
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	index;
	struct s_stock_str	*array;
	struct s_stock_str	*arr;

	index = 0;
	arr = (array = malloc((ac + 1) * sizeof(struct s_stock_str)));
	if (!array)
		return NULL;
	while (index < ac)
	{
		array[index].size = ft_strlen(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		if (!array[index].copy)
		{
			while (index >= 0)
			{
				free(array[index].copy);
				index--;
			}
			free(array);
			return NULL;
		}
		index++;
	}
	array[index].str[index] = 0;
	array[index].copy[index] = 0;
	return(array);
}

int	main(int argc, char **argv)
{
	int	index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}
