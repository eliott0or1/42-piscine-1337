/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* int main()
{
	char str[] = "HELLO WORLD!";
	printf("%s",ft_strlowcase(str));
} */
