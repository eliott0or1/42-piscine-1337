/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int end = size - 1;
	int start = 0;
	while (start < end)
	{
		swap = tab[start];
		tab[start] = tab[end];
		tab[end] = swap;
		start++;
		end--;
	}
}

/* int main()
{
	int tab[5] = {0, 1, 2, 3, 4};
	int size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d%d%d%d%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
} */
