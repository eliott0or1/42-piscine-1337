/* #include <stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main()
{
	char dest[] = "Hello";
	char src[] = "World   !";
	int size = 9;
	printf("%s", ft_strncat(dest, src, size));
} */
