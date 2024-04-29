/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int change_value;

	change_value = *a;
	*a = *b;
	*b = change_value;
}

/* int main()
{
	int val1 = 6;
	int val2 = 8;
	ft_swap(&val1, &val2);
	printf("%d\n%d",val1, val2);
} */
