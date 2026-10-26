/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	ft_change_char(unsigned int i, char c)
{
	(void)i;
	return (c - 32);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	i = 0;
	new_str = malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>
int main(void)
{
    char    *res;
    char    *s;

    s = "abc";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 1: %s\n", res);
    free(res);

    s = "Hello";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 2: %s\n", res);
    free(res);

    s = "";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 3: %s\n", res);
    free(res);

    s = "42";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 4: %s\n", res);
    free(res);

    s = "a b";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 5: %s\n", res);
    free(res);

    s = "A";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 6: %s\n", res);
    free(res);

    s = "!@#";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 7: %s\n", res);
    free(res);

    s = "Random Text";
    res = ft_strmapi(s, ft_change_char);
    printf("Test 8: %s\n", res);
    free(res);

    res = ft_strmapi(NULL, ft_change_char);
    printf("Test 9 (NULL string): %s\n", res == NULL ? "PASS" : "FAIL");
    free(res);

    res = ft_strmapi("abc", NULL);
    printf("Test 10 (NULL function): %s\n", res == NULL ? "PASS" : "FAIL");
    free(res);

    return (0);
}
*/
