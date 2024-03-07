#include <stdio.h>
#include <stdlib.h>

int	Check_delimiter(char c, char *delim)
{
	int	i;

	i = 0;
	while (delim[i])
	{
		if (c == delim[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	Count_words(char *str, char *delim)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && Check_delimiter(str[i], delim))
			i++;
		if (str[i])
			count++;
		while (str[i] && !Check_delimiter(str[i], delim))
			i++;
	}
    return (count);
}

int	Count_delimiter(char *str, char *delim)
{
	int	i;

	i = 0;
	while (str[i] && Check_delimiter(str[i], delim))
		i++;
	return (i);
}

char	*extract_word(char *str, char *charset)
{
	int	i;
	int	len_word;
	char	*word;
	
	i = 0;
	len_word = Count_delimiter(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int	i;
	int	word_count;
	
	i = 0;
	word_count = Count_words(str, charset);
	string = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		while (str[i] && Check_delimiter(str[i], charset))
			i++;
		if (str[i])
		{
			string[i] = extract_word(str + i, charset);
			if (string[i] == NULL)
			{
				free(string);
				return NULL;
			}
			i++;
		}
		while (str[i] && !Check_delimiter(str[i], charset))
			i++;
	}
	string[i] = NULL;
	return (string);
}
