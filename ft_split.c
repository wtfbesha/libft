static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(char const *start, char const *end)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = end - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	char	*start;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		result[i] = word_dup(start, s);
		if (!result[i])
		{
			free_all(result, i - 1);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
