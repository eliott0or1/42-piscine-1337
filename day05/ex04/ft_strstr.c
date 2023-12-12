/* #include <stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		int j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
}

/* int main()
{
	char str[] = "Hello World!";
	char to_find[] = "World!";
	printf("%s", ft_strstr(str, to_find));
} */
