/* #include <stdio.h> */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	while (dest[len1] && len1 < size)
	{
		len1++;
	}
	while (src[len2] && len1 + len2 < size - 1)
	{
		dest[len1 + len2] = src[len2];
		len2++;
	}
	dest[len1 + len2] = '\0';
	return(len1 + len2);
}

/* int main()
{
	char dest[] = "Hello world!";
	char src[] = "Hello";
	int size = 17;
	printf("%d", ft_strlcat(dest, src, size));
} */
