/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main()
{
	int val1 = 5;
	int val2 = 2;
	int div_val;
	int mod_val;
	ft_div_mod(val1, val2, &div_val, &mod_val);
	printf("%d\n%d",div_val ,mod_val);
} */
