/* #include <stdio.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int size = 0;
	while (s1[size] != '\0' || s2[size] != '\0')
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
	char s1[] = "Hello ";
	char s2[] = "Hello World!";
	printf("%d", ft_strcmp(s1, s2));
} */
