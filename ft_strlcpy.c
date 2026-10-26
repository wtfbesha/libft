/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src [i];
			i++;
		}
		dst [i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
int main() {
	char dest[10] = "";
	char src[] = "Hello wereld aarde..";

	unsigned int size = 10;

	int res;
	res = ft_strlcpy(dest, src, size);

	printf("result: %d ", res);
}
*/
