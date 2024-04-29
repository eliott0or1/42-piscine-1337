#include <stdlib.h>

int	ft_strlen (char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	if (src == NULL)
		return (NULL);
	dest = (char *)malloc(sizeof(char) + ft_strlen(src) + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((char *)dest);

}
