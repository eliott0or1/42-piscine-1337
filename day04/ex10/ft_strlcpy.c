/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len = 0;
	while (src[len] != '\0' && size - 1 > len)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (len);
}

/* int main()
{
	char src[] = "Hello World!";
	char dest[20];
	int size = 20;
	printf("%d%d%d", ft_strlcpy(dest, src, size));
} */
