/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] != '\0' && dst_len + 1 < size)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	if (dst_len < size)
		dst[dst_len] = '\0';
	return (dst_len + src_len - i);
}
/*
#include <stdio.h>
int main(){
	char dest[20] = "Man of mon u are";
	char src[] = "iran";
	// unsigned int size = 80;
	unsigned int res;

	res = ft_strlcat(dest, src, sizeof(dest));
	printf("%d", res);
}
*/
