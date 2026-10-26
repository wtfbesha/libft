/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
// while (n > 0)
// {
//     *d = *s;
//     d++;
//     s++;
//     n--;
// }
/*
#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void printArray (char *str) {
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    write(1, "\n", 1);
}

int main () {
    char src[] = "eric 43 belg";
    char dest[10] = {0};


    printArray(src);
    ft_memcpy(dest, src, sizeof(src));
    printArray(dest);

   return 0;
}
*/
