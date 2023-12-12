/* #include <stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0;
	while ((s1[size] != '\0' || s2[size] != '\0') && size < n)
	{
		if (s1[size] > s2[size])
		{
			return (1);
		}
		else if (s1[size] < s2[size])
		{
			return (-1);
		}
		size++;
	}
	return (0);
}

/* int main()
{
	char s1[] = "heLLO World!";
	char s2[] = "HEllo world!";
	int size = 4;
	printf("%d", ft_strncmp(s1, s2, size));
} */
