/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(s1_len + s2_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcat(result, s2, s1_len + s2_len + 1);
	return (result);
}

/*
#include <stdio.h>
int main() {
	// const char str1[] = "First";
	// const char str2[] = "Second";
	// char *res;
	// res = ft_strjoin(str1, str2);
	// printf("Result: '%s'\n", res);
	// free(res);
	// return 0;

	char *a1 = "Hello";
	char *b1 = "World";
	char *a2 = "";
	char *b2 = "Test";
	char *a3 = "ABC";
	char *b3 = "";
	char *a4 = "123";
	char *b4 = "456";
	char *a5 = "Longer string ";
	char *b5 = "concatenation test";
	char *a6 = "";
	char *b6 = " Y O ";
	char *r1 = ft_strjoin(a1, b1);
	char *r2 = ft_strjoin(a2, b2);
	char *r3 = ft_strjoin(a3, b3);
	char *r4 = ft_strjoin(a4, b4);
	char *r5 = ft_strjoin(a5, b5);
	char *r6 = ft_strjoin(a6, b6);
	printf("%s\n", r1);
	printf("%s\n", r2);
	printf("%s\n", r3);
	printf("%s\n", r4);
	printf("%s\n", r5);
	printf("%s\n", r6);
	free(r1);
	free(r2);
	free(r3);
	free(r4);
	free(r5);
	free(r6);
	return 0;
}
*/
