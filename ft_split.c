/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char delimeter)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != delimeter)
		{
			count++;
			while (str[i] && str[i] != delimeter)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_split_words(char const *str, char delimeter)
{
	char		*new;
	int			len;
	int			i;

	i = 0;
	len = 0;
	while (str[len] && str[len] != delimeter)
		len++;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

static	void	free_split(char **arr, int j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	fill_split(char **arr, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[j] = ft_split_words(&s[i], c);
			if (!arr[j])
				return (free_split(arr, j), 0);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_new_str;

	if (!s)
		return (NULL);
	arr_new_str = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr_new_str)
		return (NULL);
	if (!fill_split(arr_new_str, s, c))
		return (NULL);
	return (arr_new_str);
}
/*
#include <stdio.h>
void test_split(char *str, char delimiter)
{
		char **result;
		int i;

		i = 0;
		printf("\nInput: \"%s\" | Delimiter: '%c'\n",
			   str, delimiter);
		printf("Result:\n");

		result = ft_split(str, delimiter);
		if (!result)
		{
				printf("Allocation failed\n");
				return;
		}
		while (result[i])
		{
				printf("[%d]: \"%s\"\n", i, result[i]);
				free(result[i]);
				i++;
		}
		printf("Number of words: %d\n", i);
		free(result);
}

int main(void)
{
		//     test_split("ERIC THE ONE", 'E');
		//     test_split("hello world", ' ');
		//     test_split("hello", 'o');
		//     test_split("hello", 'x');
		//     test_split("", ' ');
		//     test_split("     ", ' ');
		//     test_split("  hello  world  ", ' ');
		//     test_split("hello,,world,,,42", ',');
		//     test_split(",,,hello,,,world,,,", ',');
		//     test_split("hello", '\0');
		//     test_split("aaaaa", 'a');
		//     test_split("42 School 1337", ' ');

		test_split("he l*lo", ' ');
		test_split("a*b*cde", '*');
		return (0);
}
*/
