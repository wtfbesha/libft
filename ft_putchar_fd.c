/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
    	ft_putchar_fd('c', 1);
    	ft_putchar_fd('\n', 1);
	ft_putchar_fd('A', 1); // terminal output
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('B', 0); // error output
	ft_putchar_fd('\n', 1);
    return (0);
}
*/
