/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	if (dest == src || n == 0)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}

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
    char dest[7] = {0};


    printArray(src);
    ft_memmove(dest, src, 4);
    printArray(dest);

   return 0;
}
*/
