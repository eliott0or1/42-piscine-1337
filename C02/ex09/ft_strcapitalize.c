/* #include <stdio.h> */

char	*ft_strcapitalize(char *str)
{
	int i = 0;
	int j;
	while (str[i])
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) 
				|| (str[i] >= 91 && str[i] <= 96) 
				|| (str[i] >= 123 && str[i] <= 126))
			j = i + 1;
			while (str[j] >= 'a' && str[j] <= 'z')
			{
				str[j] = str[j] - 32;
			}
		i++;
	}
	return (str);
}

/* int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(str));
} */
