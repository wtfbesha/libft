/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:23:46 by mtorfs            #+#    #+#             */
/*   Updated: 2026/10/12 14:24:33 by mtorfs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	d;
	size_t			i;

	str = (unsigned char *)b;
	d = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = d;
			i++;
	}
	return (b);
}
