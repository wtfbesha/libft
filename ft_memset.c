/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	ch;

	p = s;
	ch = c;
	while (n != 0)
	{
		*p++ = ch;
		n--;
	}
	return (s);
}

/*
// #include <string.h>
// void    *ft_memset(void *s, int c, size_t n)
// void    *ft_memset(void *s, int c, unsigned int n)
// ft_memset(s, '7', sizeof(5));

#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void printArray (char *str, int n) {
    int i = 0;
    while (i < n)
    {
        ft_putchar(str[i]);
        i++;
    }
    write(1, "\n", 1);
}

int main () {
    char s[100] = "Hello world";

    // print array before memset
    printArray(s, 12);

    //print memset itself
    ft_memset(s, '7', 5);

    // print same array after memset
    printArray(s, 12);

   return 0;
}
*/
