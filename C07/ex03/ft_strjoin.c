#include <stdlib.h>

int ft_strlen(char *str)
{
	int len;
	
	len = 0;
	while (str[len])
	{
		len++;
	}
	return len;
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}

char *ft_strcat(char *dest, char *src) {
    int i = 0;
    int j = 0;
    while (dest[i]) {
        i++;
    }
    while (src[j]) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	final_len;
	int	i;
	char	*result;

	final_len = 0;
	i = 0;
	while (i < size)
    {
	    final_len += ft_strlen(strs[i]);
	    if (i < size - 1)
	    {
		    final_len += ft_strlen(sep);
	    }
	    i++;
    }
	result = (char *)malloc(sizeof(char) * (final_len + 1));
	if (!result)
	{
		return NULL;
	}
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
	return result;
}
