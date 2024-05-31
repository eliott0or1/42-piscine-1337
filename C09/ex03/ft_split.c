#include <stdlib.h>
#include <stdio.h>

int	ft_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_countword(char *str, char *sep)
{
	int	i;
	int	word;
	int	in_word;
	
	i = 0;
	while (str[i])
	{
		if (!ft_sep(str[i], sep) && !in_word)
		{
			in_word = 1;
			word++;
		}
		else if (ft_sep(str[i], sep))
		{
			in_word = 0;
		}
		i++;
	}
	return (word);
}

char	*ft_strdup(char *str, int *index, char *sep)
{
	char	*word;
	int	i;
	int	start;
	
	i = 0;
	start = *index;
	while (str[start] && ft_sep(str[start], sep))
		start++;
	while (str[start + i] && !ft_sep(str[start + i], sep))
		i++;
	
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return NULL;
	i = 0;
	while (str[start] && !ft_sep(str[start], sep))
	{
		word[i++] = str[start++];
	}
	word[i] = '\0';
	*index = start;
	return (word);
}


char	**ft_split(char *str, char *charset)
{
	char	**words;
	int	index;
	int	count;
	int	i;
	
	index = 0;
	count = ft_countword(str, charset);
	i = 0;
	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (!words)
		return NULL;
	
	while (i < count)
	{
		words[i] = ft_strdup(str, &index, charset);
		i++;
	}
	words[count] = NULL;
	return (words);
}

int	main()
{
	char	*str = "Nothing in life is promised except death";
	char	*delimiter = " ";
	char	**split_words = ft_split(str, delimiter);
	int	i;
	
	if (!split_words)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}
	
	i = 0;
	while (split_words[i])
	{
		printf("Word %d: %s\n", i + 1, split_words[i]);
		i++;
	}
	
	i = 0;
	while (split_words[i])
	{
		free(split_words[i]);
		i++;
	}
	free(split_words);
	return (0);
}
