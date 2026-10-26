/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n != 0)
	{
		*p++ = '\0';
		n--;
	}
}

/*
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

    // print array before bzero
    printArray(s, 12);

    //print bzero itself
    ft_bzero(s, 5);
    // ft_bzero2(s, 5);
    // ft_bzero2(s, 5);

    // print same array after bzero
    printArray(s, 12);

   return 0;
}
*/
