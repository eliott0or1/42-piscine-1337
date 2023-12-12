#include <stdlib.h>
#include <stdio.h>

char	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
char	*ft_strdup(char *src)
{
	char	*dest;
	int	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return NULL;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
int main()
{
	char	*src = "Hello World!";
	char	*mine = NULL;
	mine = ft_strdup(src);
	printf("%s", mine);
}
