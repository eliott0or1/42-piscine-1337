/* #include <stdio.h> */

void	ft_sort_int_tab(int *tab, int size)
{
	int start = 0;
	int end = size - 1;
	int swap = 0;
	while	(start < end)
	{
		int sort = start + 1;
		while (sort < size)
		{
			if (tab[start] > tab[sort])
			{
				swap = tab[start];
				tab[start] = tab[sort];
				tab[sort] = swap;
			}
			sort++;
		}
		start++;
	}
}

/* int main()
{
	int tab[] = {4, 2, 5, 3, 1};
	int size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
} */
