/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

/*
#include<unistd.h>
int main () {
    int res = ft_isalpha('q');
    if (res == 1)
    {
        write(1, "1\n", 2);
    } else {
        write(1, "0\n", 2);
    }
    return 0;
}
*/
