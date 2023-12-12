/* #include <stdio.h> */

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int main()
{
	int div_val = 5;
	int mod_val = 2;
	ft_ultimate_div_mod(&div_val, &mod_val);
	printf("%d\n%d", div_val, mod_val);
} */
