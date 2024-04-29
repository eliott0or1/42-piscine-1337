/* #include <stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}

/* int main()
{
	char dest[] = "Hello";
	char src[] = "World!";
	printf("%s", ft_strcat(dest, src));
} */
