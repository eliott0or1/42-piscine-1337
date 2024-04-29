/* #include <stdio.h> */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main()
{
	char src[] = "Hello world!";
	char dest[] = "";
	printf("%s",ft_strcpy(dest, src));
} */
