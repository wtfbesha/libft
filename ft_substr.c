/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	else if (len > slen - start)
		len = slen - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int main(void)
{
    char *dest;

    dest = ft_substr("Hello World", 0, 5);
    printf("1. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello World", 6, 5);
    printf("2. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello", 2, 0);
    printf("3. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello", 2, 10);
    printf("4. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello", 5, 2);
    printf("5. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello", 8, 2);
    printf("6. %s\n", dest);
    free(dest);

    dest = ft_substr("", 0, 3);
    printf("7. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello", 0, 5);
    printf("8. %s\n", dest);
    free(dest);

    dest = ft_substr("Hello", 4, 1);
    printf("9. %s\n", dest);
    free(dest);

    dest = ft_substr(NULL, 0, 3);
    printf("10. %s\n", dest);
    free(dest);

    return (0);
}
*/
